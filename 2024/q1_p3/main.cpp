#include "q1p3.h"
#include "input.h"
#include "../../shared/Timer.h"
#include <iostream>

int main()
{
    Timer timer {};
    
    constexpr std::string_view input {input::input};
    
    constexpr std::string_view testInput {R"(xBxAAABCDxCC)"};
    
    int potions {q1p3::getPotionsNeeded(input)};
    std::cout << "Number of potions needed: " << potions << '\n';
    
    std::cout << "Time taken: " << timer.getDuration() << " s\n";
    
    return 0;
}
