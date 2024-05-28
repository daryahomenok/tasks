#include <iostream>

using namespace std;

struct Student 
{
    string noun;
    string surname;
    int lessons;
    int missed;
};


double middle(Student student) {
    int presence = student.lessons - student.missed;
    double meter = presence * 5 + student.missed;
    return meter / student.lessons;
};

int main()
{
    Student student;
    cout << "Enter a name: \n";
    cin >> student.noun;
    cout << "Enter your last name: \n";
    cin >> student.surname;
    cout << "Enter the number of classes: \n";
    cin >> student.lessons;
    cout << "Enter the number of passes: \n";
    cin >> student.missed;
    double middleMeter = middle(student);

    cout << "Student's middle calculation " << student.noun << " " << student.surname << "is: " << middleMeter << endl;
}

