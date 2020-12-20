#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

namespace day_2
{

static std::pair <int, int> solvePart1And2(std::ifstream& input)
{
    std::string line;
    int low {0}, high {0};
    char letter;
    std::string pass;
    std::pair <int, int> results {0, 0};
    while(std::getline(input, line))
    {
        int letterOccurences{0};

        std::istringstream split(line);
        std::string part;
        std::getline(split, part, '-');
        low = std::stoi(part);

        std::getline(split, part, ' ');
        high = std::stoi(part);

        std::getline(split, part, ':');
        letter = *part.begin();

        std::getline(split, part, '\n');
        pass = part;


        for (auto& c: pass)
            if (c == letter ) letterOccurences++;

        // first part of solution
        if (letterOccurences >= low  && letterOccurences <= high)
            results.first++;

        // second part of solution
        const bool lower {pass[low] == letter};
        const bool higher {pass[high] == letter};

        if (lower ^ higher)
            results.second++;
    }
    return results;
}

}
