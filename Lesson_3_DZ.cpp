#include <iostream>

#include "Lesson_3_DZ_InitFile.cpp"c

float forThreeTack()
{
    using namespace Init;
    float res {};
    res = a * (b + (c / d));
    return res;
}

int main(){
    using namespace Init;
    //----------------------------------------------
    // ������� 1:
    std::cout
    << (float)(a * (b + (c / d)))
    <<
    std::endl;
    //----------------------------------------------
    // ������� 2:
    int chislo = 31;
        chislo > 21
    ?
        std::cout << (chislo - 21 ) * 2 << std::endl
    :
        std::cout <<  chislo         << std::endl;
    //----------------------------------------------
    // ������� 3:
    std::cout
    << forThreeTack()
    <<
    std::endl;
    //----------------------------------------------
    // ������� 4:
    std::cout
    << *(pCube + 1 + 3 + 9)
    <<
    std::endl;
    return 0;
}
