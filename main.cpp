#include <stdio.h>
#include <iostream>



int main(){
    //wczytanie danych
    int macierzwierzcholkow[12][12]{
        {0,1,0,1,1,0,0,0,0,0,1,0}, //1
        {1,0,0,0,0,1,0,0,0,0,0,0}, //2
        {0,0,0,1,1,0,0,1,1,1,0,0}, //3
        {1,0,1,0,0,0,0,0,0,0,1,1}, //4
        {1,0,1,0,0,1,0,1,0,0,0,0}, //5
        {0,1,0,0,1,0,0,1,0,0,0,0}, //6
        {0,0,0,0,0,0,0,0,0,1,0,1}, //7
        {0,0,1,0,1,1,0,0,0,0,0,0}, //8
        {0,0,1,0,0,0,0,0,0,1,0,0}, //9
        {0,0,1,0,0,0,1,0,1,0,0,1}, //10
        {1,0,0,1,0,0,0,0,0,0,0,1}, //11
        {0,0,0,1,0,0,1,0,0,1,1,0}, //12
    };

    int t = 0;
    while (true){
        t++;
        std::cout<<t<<std::endl;
   
    }
    return 0;
}