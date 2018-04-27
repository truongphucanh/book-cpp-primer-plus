#include <iostream>
#include "StructTest.h"

void printPerson(Person person)
{
    cout << "============================" << endl;
    cout << "Name: " << person.Name << endl;
    cout << "Age: " << person.Age << endl;
    cout << "Job: " << person.Job << endl;
    cout << "============================" << endl;
}

void printSchool(School school)
{
    cout << "============================" << endl;
    cout << "Name: " << school.name << endl;
    cout << "Classes: ";
    for (int i = 0; i < N_CLASSES - 1; i++)
    {
        cout << school.classes[i] << ", ";
    }
    cout << school.classes[N_CLASSES - 1] << endl;
    cout << "============================" << endl;
}

void structInitializationTest()
{
    Person me;
    me.Name = "Phuc Anh";
    me.Age = 22;
    me.Job = "Game Developer";
    printPerson(me);

    Person someone = {"Moc Moc", 18, "Student"};
    printPerson(someone);
}

void structAssigmentTest()
{
    School uit, ussh;
    uit.name = "UIT";
    int arr[3];
    uit.classes[0] = "Computer Science";
    uit.classes[1] = "Networking";
    printSchool(uit);
    ussh = uit; // memberwise assigment = copy assigment - copy all member's value of uit
    printSchool(ussh);
    cout << sizeof(string);
}

void structSizeTest()
{
    Point p = {0, 0, 0, 'c'};
    cout << "sizeof(int): " << sizeof(int) << endl;
    cout << "sizeof(char): " << sizeof(char) << endl;
    cout << "sizeof(point): " << sizeof(p) << endl;
}

void structBitFieldTest()
{
    Something st = {0, true};
    cout << "sizeof(int): " << sizeof(int) << endl;
    cout << "sizeof(bool): " << sizeof(bool) << endl;
    // cout << "sizeof(st.field1): " << sizeof(st.field1) << endl;
    // cout << "sizeof(st.field2): " << sizeof(st.field2) << endl; // compile error: bits field not work with sizeof
    cout << "sizeof(st.field3): " << sizeof(st.field3) << endl;
    cout << "sizeof(st): " << sizeof(st) << endl;
}

void structTest()
{
    // structInitializationTest();
    // structAssigmentTest();
    structSizeTest();
    // structBitFieldTest();
}
