#ifndef Q1P2_H
#define Q1P2_H

#include <string_view>
#include <cassert>

namespace q1p2
{
    int getPotionsNeeded(const std::string_view& area)
    {
        // length of area should be even, or pairing won't work
        assert(area.size() % 2 == 0 && "Can't split into pairs as there are an odd number of creatures.\n");

        int potions {0};
        // read in pairs
        for (auto it{area.begin()}; it != area.end(); it += 2)
        {
            char first {*it};
            char second {*(it + 1)};

            if (first == 'B')
                potions += 1;
            else if (first == 'C')
                potions += 3;
            else if (first == 'D')
                potions += 5;
            
            if (second == 'B')
                potions += 1;
            else if (second == 'C')
                potions += 3;
            else if (second == 'D')
                potions += 5;
            
            if (first != 'x' && second != 'x')
                potions += 2;
        }
        return potions;
    }
}

#endif // Q1P2_H
