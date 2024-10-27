#include <iostream>
#include <Windows.h>

enum Names { Oleg, Sven, Vova, Vika, Stacy, Taras, Joe, Arthur, Anya, Artem, Lusy, Oliver};
struct Student1
{
    Names name1;
    unsigned short yearOfStudy1;
    bool army1;
};
struct Student2
{
    Names name2;
    float score2;
    bool dance2;
};

int main()
{
    //part 1
    std::cout << "part 1" << std::endl;
    Student1 myStudents1[7];
    myStudents1[0] = { Oleg, 2, true };
    myStudents1[1] = { Taras, 1, true };
    myStudents1[2] = { Sven, 5, false };
    myStudents1[3] = { Vova, 2, false };
    myStudents1[4] = { Stacy, 1, true };
    myStudents1[5] = { Joe, 3, true };
    myStudents1[6].name1 = Taras;
    myStudents1[6].yearOfStudy1 = 5;
    myStudents1[6].army1 = true;

    int count1 = 0;
    for (int i = 0; i < 7; i++)
    {
        if (myStudents1[i].yearOfStudy1 == 1 && myStudents1[i].army1 == true)
        {
            count1++;
        }
    }
    float percent1 = (float)count1 * 100 / 7;
    std::cout << percent1 << "%" << std::endl;
    //part 2
    std::cout << "part 2" << std::endl;
    Student2 myStudents2[7];
    myStudents2[0] = { Vika, 4.5, true };
    myStudents2[1] = { Anya, 4.4, false };
    myStudents2[2] = { Artem, 5, true };
    myStudents2[3] = { Lusy, 3, false};
    myStudents2[4] = { Arthur, 5, true };
    myStudents2[5] = { Oliver, 4, true };
    myStudents2[6].name2 = Artem;
    myStudents2[6].score2 = 3.6;
    myStudents2[6].dance2 = true;

    int count2 = 0;
    for (int i = 0; i < 7; i++)
    {
        if (myStudents2[i].dance2 == true && myStudents2[i].score2 >= 4.5)
        {
            count2++;
        }
    }
    float percent2 = (float)count2 * 100 / 7;
    std::cout << percent2 << "%" << std::endl;
    return 0;
}