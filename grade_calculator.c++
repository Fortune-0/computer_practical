#include <iostream>
#include <string>
using namespace std;

int main() {
    string studentName, matNo, level;
    float scores[15];
    float totalScore = 0, averageScore;
    char grade;

    // Get student details
    cout << "Enter student's name: ";
    getline(cin, studentName);

    cout << "Enter student's matriculation number (matNo): ";
    getline(cin, matNo);

    cout << "Enter student's level: ";
    getline(cin, level);

    // Input scores for 15 courses
    cout << "Enter the scores for 15 courses: " << endl;
    for (int i = 0; i < 15; i++) {
        cout << "Score for course " << i + 1 << ": ";
        cin >> scores[i];
        totalScore += scores[i];
    }

    // Calculate average score
    averageScore = totalScore / 15;

    if (averageScore >= 75) {
        grade = 'A';
    } else if (averageScore >= 70) {
        grade = 'B';
    } else if (averageScore >= 65) {
        grade = 'C';
    } else if (averageScore >= 60) {
        grade = 'D';
    } else if (averageScore >= 55) {
        grade = 'E';
    } else if (averageScore >= 50) {
        grade = 'F';
    } else {
        grade = 'G';
    }

    cout << "\nStudent Details: " << endl;
    cout << "Name: " << studentName << endl;
    cout << "Matriculation Number: " << matNo << endl;
    cout << "Level: " << level << endl;
    cout << "Total Score: " << totalScore << endl;
    cout << "Average Score: " << averageScore << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}
