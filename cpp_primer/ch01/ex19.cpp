#include <iostream>
int main()
{
    int a=0,b=0;
    std::cout << "请输入两个整数: ";
    std::cin >> a >> b;
    if(a<=b)
        for(;a<=b;++a)
        std::cout << a << " ";
    else
        for(;b<=a;++b)
          std::cout <<b << " ";
    std::cout << std::endl;
    return 0;

}