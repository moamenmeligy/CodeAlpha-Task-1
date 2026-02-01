#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "enter number of courses: ";
    cin >> n;
    double grade, credit;
    double totalCredits = 0, totalGradePoints;
    for (int i = 1; i<=n; i++){
        cout <<"\nCourse " << i << " grade (0-4): ";
        cin >> grade;
        cout << "Course " << i << "credit hours: ";
        cin >> credit;
        totalCredits+= credit;
        totalGradePoints+= grade*credit;
    }
    double cgpa = totalGradePoints / totalCredits;
    cout <<"\nTotal Credits: "<< totalCredits; 
    cout <<"\nCGPA: " << cgpa;
    return 0;
}