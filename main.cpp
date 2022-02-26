#include <iostream>
#include <vector>
int main(int, char**) {
    std::cout << "Hello, world!\n";
    std::vector<int> s;
    for (int i = 0; i < 10; i++)
    {
        s.push_back(i);
    }
    for (int i = 0; i < 10; i++)
    {
        std::cout<<s[i]<<std::endl;
    }
    
}
