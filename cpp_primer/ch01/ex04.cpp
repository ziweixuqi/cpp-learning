#include <iostream>
int main()
{
    std::cout << "请输入两个整数: " << std::endl;
    int a=0,b=0;
    std::cin >> a >> b;
    std::cout << a <<"和" << b <<"的乘积是" << a*b << std::endl;
    return 0;
}