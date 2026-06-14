#include <iostream>
int main()
{
    int val=0,curval=0;
    if(std::cin >> curval){
        int count=1;
        while(std::cin >> val){
            if(val == curval)
                ++count;
            else {
                std::cout << curval << "occur" << count << "times" <<std::endl;
                curval=val;
                count=1;

            }

        }
        std::cout << curval << "occur" << count << "times" <<std::endl;        
    }
    return 0;
}