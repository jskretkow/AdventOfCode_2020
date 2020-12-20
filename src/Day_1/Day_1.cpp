#include<iostream>
#include<fstream>
#include <vector>

namespace day_1
{

static std::pair <unsigned long int , unsigned long int> solvePart1And2(std::ifstream& input)
{
    int num{};
    std::vector<int> numbers;
    std::pair <unsigned long int, unsigned long int> results{0, 0};

    while(input >> num)
        numbers.push_back(num);

    for (auto first : numbers)
    {
        for (auto second : numbers)
        {
            if (first == second )
                continue;

            if ((first + second) == 2020)
                results.first = first * second;

            for (auto third : numbers)
            {
                if (third == second or third == first)
                    continue;

                if ((first + second + third) == 2020)
                    results.second = first * second * third;
            }
        }
    }
    return results;
}

}
