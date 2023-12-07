#include <iostream>
#include "json.hpp"
#include <random>
#include <vector>

void gentable(int** table,int vertex);
std::vector<int> find_group(int** table,int n);

int main(){
    int vertex = 20,voyagers;
    //std::cout<<"size of n: ";
    //std::cin>>voyagers;
    // std::cout<<"size of graph: ";
    // std::cin>>vertex;
    int** tablica = new int*[vertex];
    for (int i = 0; i < vertex; ++i) {
        tablica[i] = new int[vertex];
    }

    
    gentable(tablica,vertex);
    std::vector<int> graph = find_group(tablica,vertex);

    

    for (int i = 0; i < vertex; ++i) {
        delete[] tablica[i];
    }
    delete[] tablica;
    return 0;
}



void gentable(int** table,int n){
    std::random_device rd;
    std::mt19937 generator(rd());
    std::uniform_int_distribution<int> distribution(1, 10);
    for(int i = 0;i < n; i++){
        int random_number = distribution(generator);
        if (i==random_number){
            random_number++;
        }
        table[i][random_number]=1;
        table[random_number][i]=1;  
        for(int j = 0; j < n;j++){
            if (table[i][j]!=1){
                table[i][j] = 0;
            }
        }
    }
    for(int i = 0;i < n; i++){
        std::cout<<i<<" ";
    }
    std::cout<<std::endl;
    for(int i = 0;i < n; i++){
        for(int j = 0; j < n;j++){
            std::cout<<table[i][j]<<" ";
        }
        std::cout<<"    |"<<i<<std::endl;
    }
}


std::vector<int> find_group(int** table,int n){
    std::vector<int> maxcoherent;
    int index = -1;
    maxcoherent.push_back(0);
    int element;
    do{ 
        index++;
        element = maxcoherent[index];
        std::cout<<element<<std::endl;
        for(int i = 0; i<n;i++){
            //sprawdzenie czy występuje krawędź
            if(table[maxcoherent[index]][i] > 0){            
                //zmienna pomocnicza
                int c = 0;
                //sprawdzenie czy wierzchołek został już dodany do wektora
                for (int a:maxcoherent){
                    if (a==i) c = 1;
                }
                //jeśli krawędzi n nie ma w wektorze
                if (c!=1) maxcoherent.push_back(i);
            }
        }
        
        std::cout<<"element:"<<element<<"   |maxcoherentback:"<<maxcoherent.back()<<std::endl;
        std::cout<<"size:"<<maxcoherent.size()<<"    |index+1:"<<index+1<<std::endl;
    }while (!((maxcoherent.size() == index+1) && (maxcoherent.back()==element)));
    for (int i = 0; i<maxcoherent.size();i++){
        std::cout<<maxcoherent[i]<<" ";
    } 
    std::cout<<std::endl;
    return maxcoherent;
}
