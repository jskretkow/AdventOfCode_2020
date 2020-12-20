#include <gtest/gtest.h>
#include <Day_2/Day_2.cpp>

TEST(Day2, testInput)
{
    std::ifstream inputFile("../tst/Day_2/input_test.txt");
    auto solution = day_2::solvePart1And2(inputFile);
    EXPECT_EQ(2, solution.first);
    EXPECT_EQ(1, solution.second);
}

TEST(Day2, solvePart_1_And_2)
{
    std::ifstream inputFile("../tst/Day_2/input.txt");
    auto solution = day_2::solvePart1And2(inputFile);
    std::cout <<"\n[Day 2 p.1] - solution :  " << solution.first << std::endl;
    std::cout <<"[Day 2 p.2] - solution :  " << solution.second << "\n\n";
}
