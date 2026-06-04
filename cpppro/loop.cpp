#include <iostream>

using namespace std;

int main() {

    string name, course, ys;
    int numSub;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your course: ";
    cin >> course;

    cout << "Enter your year and section: ";
    cin >> ys;

    do {
        cout << "Enter number of subjects: ";
        cin >> numSub;

        if (numSub <= 0) {
            cout << "Invalid input. Please enter a positive number.\n";
        }

    } while (numSub <= 0);

    string subNames[numSub];
    float grades[numSub];
    float total = 0;

    cin.ignore();

    for (int i = 0; i < numSub; i++) {
        cout << "\nSubject " << i + 1 << " Name: ";
        getline(cin, subNames[i]);

        cout << subNames[i] << " Grade: ";
        cin >> grades[i];

        total += grades[i];
        cin.ignore();
    }

    cout << "\n====STUDENT INFORMATION====";
    cout << "\nStudent Name: " << name;
    cout << "\nCourse, Year and Section: " << course << "-" << ys;


    cout << "\n";
    cout << "\n====SUBJECT RESULTS====";

    int i = 0;

    cout << "\n";

    while (i < numSub) {
        cout << subNames[i] << " Grade: " << grades[i] << " - ";
        cout << (grades[i] <=70? "Failed" : "Passed") << endl;

        i++;

    }

    float gwa = total / numSub;

    cout << "\n\nGeneral Weighted Average (GWA): " << gwa << endl;

    return 0;
}