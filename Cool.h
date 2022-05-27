#ifndef COOL_H
#define COOL_H
#include <vector>

class Cool {
    public:
    Cool();
    
    std::string thing(std::vector<std::string> operate, std::vector<int> number);
    
    int calculate(std::string sign,int a,int b);
    
    int value;
};
#endif 