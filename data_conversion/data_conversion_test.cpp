#include<iostream>
// #include "std_lib_facilities.h" Remove this entirely!
int main() {

    double d = 0;
    while (std::cin>>d){
        int i = d;

        char c = i;
        int i2 = c;
        std::cout<< " d==" << d
                 << " i==" << i
                 << " i2==" << i2
                 << " char(" << c << ")\n";

    }

    
}