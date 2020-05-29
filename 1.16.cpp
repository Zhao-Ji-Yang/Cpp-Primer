#include <iostream>
using namespace std;
int main(){
    int num, sum = 0;
    std::cout << "Please input a number:" << std::endl;
    while(std::cin >> num){
        sum += num;
    }
    std::cout << sum;
    return 0;
}