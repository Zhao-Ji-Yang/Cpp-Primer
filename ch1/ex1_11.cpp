#include <iostream>
using namespace std;
int main(){
    std::cout << "Please input two numbers" << std::endl;
    int c1, c2;
    std::cin >> c1 >> c2;

    for(int i = c1; i <= c2; ++i){
        std::cout << i << std::endl;
    }
    return 0;

}