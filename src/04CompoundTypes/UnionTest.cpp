#include <iostream>
#include "UnionTest.h"

using namespace std;

void unionTest()
{
    union mix_t
    {
        bool b;
        char c;
        short sh;
        int i;
        double d;
        struct 
        {
            short x;
            int y;
            double z;
        }point;
        char arr[20];
    }mix;
    cout << "All members of union occupy the same physical space in memory" << endl;
    cout << "Size of union is size of largest member (Not true with struct / array inside union)" << endl;
    cout << "sizeof(bool): " << sizeof(bool) << endl;
    cout << "sizeof(char): " << sizeof(char) << endl;
    cout << "sizeof(short): " << sizeof(short) << endl;
    cout << "sizeof(int): " << sizeof(int) << endl;
    cout << "sizeof(double): " << sizeof(double) << endl;
    cout << "sizeof(mix.point): " << sizeof(mix.point) << endl;
    cout << "sizeof(arr): " << sizeof(mix.arr) << endl;
    cout << "sizeof(mix_t): " << sizeof(mix_t) << endl;
    cout << "sizeof(mix): " << sizeof(mix) << endl;
}

void anonymousUnionTest() {
    struct book_t {
        char title[40];
        char author[40];
        union {
            int i_price;
            float f_price;
        }; // anonymous union (without name)
        union {
            int num_type;
            bool bool_type;
        }type; // non-anonymous union (with a name)
    }book;
    book.i_price = 10;
    book.f_price = 10.5f;
    book.type.num_type = 2048; // book.type as binary in memory: 00000000 00000000 00000100 00000000
    cout << "book.type.num_type: " << book.type.num_type << endl; // 2048
    book.type.bool_type = true; // now it is: 00000000 00000000 00001000 00000001
    cout << "book.type.num_type: " << book.type.num_type << endl; // 2049
}