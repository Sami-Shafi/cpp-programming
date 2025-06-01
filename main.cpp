#include<bits/stdc++.h>
using namespace std;

// Problem Statement

// A student has several pieces of information, such as a unique ID, name, section, and total marks. You will be given the information of three students. Your task is to determine and print the details of the student who achieved the highest total marks. In the case of a tie (i.e., two or more students having the same total marks), print the information of the student with the smaller ID.

// Input Format

// First line will contain T, the number of test cases.
// For each test case there will be 3 lines. Each line will contain - ID, Name, Section, Total Marks of a student. The name will contain lowercase English alphabets only.
// Constraints

// 1 <= T <= 1000
// 1 <= ID <= 3
// 1 <= |Name| <= 100
// 'A' <= Section <= 'Z'
// 0 <= Total Marks <= 100
// Output Format

// Ouptut the information as asked in the question.
// Sample Input 0

// 3
// 1 sakib A 50
// 2 rakib D 96
// 3 akib C 90
// 1 sakib A 50
// 2 rakib D 96
// 3 akib C 96
// 1 sakib A 50
// 2 rakib D 50
// 3 akib C 40
// Sample Output 0

// 2 rakib D 96
// 2 rakib D 96
// 1 sakib A 50

int main()
{
    int t;
    cin >> t;

    while(t--) {

        int n = 3;
        int idMarks[3][2];
        char names[3][1001], sections[n];

        for (int i = 0; i < n; i++)
        {
            cin >> idMarks[i][0] >> names[i] >> sections[i] >> idMarks[i][1];
        }

        int mark1 = idMarks[0][1];
        int mark2 = idMarks[1][1];
        int mark3 = idMarks[2][1];
        int id1 = idMarks[0][0];
        int id2 = idMarks[1][0];
        int id3 = idMarks[2][0];

        int maxVal = max({idMarks[0][1], idMarks[1][1], idMarks[2][1]});

        int targetId, targetMark;
        char targetName[1001], targetSection;

        int targetLevel = 3;

        if (mark1 == maxVal && mark2 == maxVal && mark3 == maxVal) {
            if (id1 < id2) {
                if (id1 < id3) {
                    targetLevel = 1;
                }
            }else if (id2 < id3) {
                targetLevel = 2;

            }
        }
        else if (mark1==maxVal && mark2==maxVal) {
            if (id1 < id2) {
                targetLevel = 1;

            }else {
                targetLevel = 2;
            }
        }
        else if (mark1==maxVal && mark3==maxVal) {
            if (id1 < id3) {
                targetLevel = 1;

            }
        }
        else if (mark2==maxVal && mark3==maxVal) {
            if (id2 < id3) {
                targetLevel = 2;

            }
        }
        else if (mark1==maxVal) {
            targetLevel = 1;

        }
        else if (mark2==maxVal) {
            targetLevel = 2;
        }

        if (targetLevel==1) {
            targetId = id1;
            targetMark = mark1;
            strcpy(targetName, names[0]);
            targetSection = sections[0];
        }else if (targetLevel == 2) {
            targetId = id2;
            targetMark = mark2;
            strcpy(targetName, names[1]);
            targetSection = sections[1];
        }else {
            targetId = id3;
            targetMark = mark3;
            strcpy(targetName, names[2]);
            targetSection = sections[2];
        }

        cout << targetId << " " << targetName << " " << targetSection << " " << targetMark << endl;

    }

    return 0;
} 