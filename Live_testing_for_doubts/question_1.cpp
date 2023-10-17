#include <iostream>

class person: {
    public:
        str name[100];
        cout << "This is a person" << endl;
        cout << "Enter the name of the person" << endl;
        cin >> name;
        cout << "The name of the person is " << name << endl;
};

class student: person {
    cout << "This is a student" << endl;
};

class athelete: person {
    cout << "This is an athelete" << endl;
};

class sports_student: student, athelete {
    cout << "This is a sports student" << endl;
};

int main() {
    person p;
    student s;
    athelete a;
    sports_student ss;
    return 0;
}
