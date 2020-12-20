#include <gtest/gtest.h>
#include <Day_1/Day_1.cpp>

TEST(Day1, test_input)
{
    std::ifstream inputFile("../tst/Day_1/input_test.txt");

    auto solution = day_1::solvePart1And2(inputFile);
    EXPECT_EQ(514579 ,solution.first);
    EXPECT_EQ(241861950, solution.second);
}

TEST(Day1, solvePart_1_And_2)
{
    std::ifstream inputFile("../tst/Day_1/input.txt");

    auto solution = day_1::solvePart1And2(inputFile);
    std::cout <<"\n[Day 1 p.1] - solution :  " << solution.first << std::endl;
    std::cout <<"[Day 1 p.2] - solution :  " << solution.second << "\n\n";
}

