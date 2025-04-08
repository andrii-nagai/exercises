#include<iostream>

int main() {

    int index = 0;
    while (index<20){
        
        std::cout<<char('a' + index)<<'\t'<< int('a') + index <<'\n';

        ++index;
    }

    
}