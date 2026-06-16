#include <iostream>
#include "Sales_item.h"
int main ()
{
    Sales_item curbook;
    Sales_item book;
    if(std::cin >> curbook){
        while(std::cin >> book){
            if(curbook.isbn()== book.isbn()){
                curbook +=book;
             }
           
            else{
                std::cout << curbook << std::endl;
                curbook=book;
            }
            
        }
        std::cout << curbook << std::endl; 
    } 
    else{
        std::cerr << "no data?!" << std::endl;
        return -1;

    }
    return 0;
    
}