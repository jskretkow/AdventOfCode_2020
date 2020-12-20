#include <iostream>
#include <fstream>
#include <memory>

namespace day_3
{


using Slope = std::pair<int, int>;

static long slide(std::ifstream& input, Slope slope)
{
    int startPos{0};
    int trees{0};

    auto [horizontal, vertical] = slope;

    std::string line;
    while(std::getline(input, line))
    {
        if(line[(startPos) % line.size()] == '#')
            trees++;

        startPos += horizontal;

        if (vertical  > 1)
        {
            auto times = vertical - 1;
            while(times-- > 0)
            {
                std::getline(input, line);
            }
        }
    }
    return trees;
}

static std::pair<long, long>  solvePart1And2(std::ifstream& input)
{
    std::pair<long, long> results {1, 1};

    Slope firstPartSlope {3, 1};
    results.first = slide(input, firstPartSlope);


    std::array <Slope, 5> slopes = {Slope{1,1}, Slope{3,1}, Slope{5,1}, Slope{7, 1}, Slope{1,2}};

    for(auto& slope : slopes)
    {
        input.clear();
        input.seekg(0, std::ios::beg);
        results.second *= slide(input, slope);

    }
    return results;
}
};
