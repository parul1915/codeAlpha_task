#include <iostream>
using namespace std;

int main() {
    int n; // number of subjects
    cout << "Enter number of subjects: ";
    cin >> n;

    float gradePoint, totalGradePoints = 0;
    int credit, totalCredits = 0;

    for (int i = 1; i <= n; i++) {
        cout << "Subject " << i << ":\n";
        cout << "  Enter Grade Point (out of 10): ";
        cin >> gradePoint;
        cout << "  Enter Credit Hours: ";
        cin >> credit;

        totalGradePoints += gradePoint * credit;
        totalCredits += credit;
    }

    float cgpa = totalGradePoints / totalCredits;
    cout << "\nYour CGPA is: " << cgpa << endl;

system("pause");
    return 0;
}

