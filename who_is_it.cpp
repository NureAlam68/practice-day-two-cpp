#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    int id;
    string name;
    char section;
    int totalMarks;

    // Constructor
    Student(int id, string name, char section, int totalMarks) {
        this->id = id;
        this->name = name;
        this->section = section;
        this->totalMarks = totalMarks;
    }
};

int main()
{
    int T;
    cin >> T;

    while (T--) {
        // First student input and initialize best
        int id, marks;
        string name;
        char section;
        cin >> id >> name >> section >> marks;
        Student best(id, name, section, marks);

        // Next two students
        for (int i = 1; i < 3; i++) {
            cin >> id >> name >> section >> marks;
            Student s(id, name, section, marks);

            if (s.totalMarks > best.totalMarks) {
                best = s;
            } else if (s.totalMarks == best.totalMarks) {
                if (s.id < best.id) {
                    best = s;
                }
            }
        }

        // Print best student info directly from main
        cout << best.id << " " << best.name << " " << best.section << " " << best.totalMarks << endl;
    }
    return 0;
}