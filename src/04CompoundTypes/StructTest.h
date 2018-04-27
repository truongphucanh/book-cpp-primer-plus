#include <string>
#define N_CLASSES 10

using namespace std;

struct Person
{
    string Name;
    int Age;
    string Job;
};

struct School
{
    std::string name;
    std::string classes[N_CLASSES];
};

struct Point
{
    int x;
    int y;
    int z;
    char name;
};

struct Something
{
    int field1 : 2; // bits field
    bool field2: 1; // bits field
    int field3; // normal field
};

void printPerson(Person person);
void printSchool(School school);
void structInitializationTest();
void structAssigmentTest();
void structSizeTest();
void structBitFieldTest();
void structTest();

