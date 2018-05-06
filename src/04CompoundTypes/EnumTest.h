// value of an enumerator can ONLY be assigned with an int (or a long)
enum Day{
    // str = "abc", // compile error
    none, // default value is 0
    monday = 2,
    tueday, // 3
    wednesday, // 4
    thursday, // 5
    friday, // 6
    saturday, // 7
    sunday // 8
};

enum XYZ{
    nothing, // 0
    x = 101, // 101
    y, // 102
    z // 103
};

void enumTest();
void enumRangeTest();
