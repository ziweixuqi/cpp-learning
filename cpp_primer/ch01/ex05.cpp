#include <iostream>
int main()
{
    int a=0,b=0;
    std::cout << "请输入两个数: " << std::endl;
    std::cin >> a >> b;
    std::cout << a;
    std::cout << "和";
    std::cout << b;
    std::cout << "的乘积是：";
    std::cout << a*b;
    return 0;
}