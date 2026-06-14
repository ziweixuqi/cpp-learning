#include <iostream>
int main()
{
    int sum=0;
    for(int val=50;val<=100;++val)
    sum += val;
    std::cout << "50加到100的和是: "
             << sum
             << std::endl;
    return 0;
}