#include <iostream>
using namespace std;
class Person {
protected:
    char name[50];
    int age;
};
class Student:public Person {
    int roll;
    float marks;
public:
    void getdata() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter roll no: ";
        cin >> roll;
        cout << "Enter marks: ";
        cin >> marks;
    }
    void display() {
        cout << "Student details:" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll no: " << roll << endl;
        cout << "Marks: " << marks << endl;
    }
};
int main() {
    Student s;
    s.getdata();
    s.display();
    return 0;
}
