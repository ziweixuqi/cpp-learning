#include <iostream>
int main()
{
    int a,b;
    std::cout << "请输入两个整数： ";
    std::cin >> a >> b;
    int val=a;
    while(val<=b){
        std::cout << val << " ";
        ++val;
    }
    std::cout << std::endl;
    return 0;
}