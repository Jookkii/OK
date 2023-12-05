#include <iostream>
#include "json.hpp"
#include <random>

void gentable(int** table,int vertex);

int main(){
    int vertex,voyagers;
    std::cout<<"size of n: ";
    std::cin>>voyagers;
    std::cout<<"size of graph: ";
    std::cin>>vertex;
    int** tablica = new int*[vertex];
    for (int i = 0; i < vertex; ++i) {
        tablica[i] = new int[vertex];
    }
    gentable(tablica,vertex);
    return 0;
}

void gentable(int** table,int n){
    std::random_device rd;
    std::mt19937 generator(rd());
    std::uniform_int_distribution<int> distribution(1, 10);
    for(int i = 0;i < n; i++){
        for(int j = 0; j < n;j++){
            table[i][j] = 0;
            std::cout<<table[i][j]<<" ";
        }
        std::cout<<std::endl;
    }
}


