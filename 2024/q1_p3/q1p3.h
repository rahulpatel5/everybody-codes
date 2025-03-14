#ifndef Q1P3_H
#define Q1P3_H

#include <string_view>
#include <cassert>

namespace q1p3
{
    int getPotionsNeeded(const std::string_view& area)
    {
        // length of area should be divisible by 3, or grouping won't work
        assert(area.size() % 3 == 0 && "Number of creatures isn't divisible by three.\n");

        int potions {0};
        // read in groups of 3
        for (auto it{area.begin()}; it != area.end(); it += 3)
        {
            char first {*it};
            char second {*(it + 1)};
            char third {*(it + 2)};

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
            
            if (third == 'B')
                potions += 1;
            else if (third == 'C')
                potions += 3;
            else if (third == 'D')
                potions += 5;
            
            if (first != 'x' && second != 'x' && third != 'x')
                potions += 6;
            else if ((first != 'x' && second != 'x') || (first != 'x' && third != 'x') || (second != 'x' && third != 'x'))
                potions += 2;
        }
        return potions;
    }
}

#endif // Q1P3_H
