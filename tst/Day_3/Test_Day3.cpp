#include <gtest/gtest.h>
#include <Day_3/Day_3.cpp>

TEST(Day3, inputTest)
{
    std::ifstream inputFile("../tst/Day_3/input_test.txt");
    EXPECT_EQ(7, day_3::solvePart1And2(inputFile).first);;
}

TEST(Day3, solvePart_1)
{
    std::ifstream inputFile("../tst/Day_3/input.txt");
    auto solution = day_3::solvePart1And2(inputFile);
    std::cout <<"\n[Day 3 p.1] - solution :  " << solution.first << std::endl;
    std::cout <<"[Day 3 p.2] - solution :  " << solution.second << "\n\n";
}
