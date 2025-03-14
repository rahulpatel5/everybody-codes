#ifndef Q1P1_H
#define Q1P1_H

#include <string_view>

namespace q1p1
{
    constexpr int getPotionsNeeded(const std::string_view& area)
    {
        int potions {0};
        for (char p : area)
        {
            if (p == 'B')
                potions += 1;
            else if (p == 'C')
                potions += 3;
        }
        return potions;
    }
}

#endif // Q1P1_H
