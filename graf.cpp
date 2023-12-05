#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include "json.hpp"
#include <fstream>

using json = nlohmann::json;
std::string d = "graf.json";

class graf{
    private:
    std::vector<std::string> names;
    std::ifstream i;
    std::vector<std::string> zawartosc;
    std::vector<std::string> converted;

    std::vector<std::vector<int>> macierz_sąsiedztwa;
    std::vector<std::vector<int>> macierz_incydencji;
    std::vector<std::vector<int>> lista_nastepnikow;


    public:

    // void pobierznazwe(){
    //     std::string nazwa;
    //     std::cout<<"wpisz nazwe: ";
    //     std::cin>>nazwa;
    //     names.push_back(nazwa);
    //     std::cout<<"udalo sie"<<std::endl;
    // }



    // void wypisznazwe(){
    //     std::cout<<"nazwa: "<<names.front();
    // }


    int odczytajgraf(){
        std::ifstream f("graf.json");
        json data = json::parse(f);
        plik.open(d,std::ios::in);
        if (!plik.is_open()) {
            std::cout << "Nie można otworzyć pliku: " << d<< std::endl;
            exit(-1);
            }
        std::cout<<"otwarto"<<std::endl;
        std::string linia;
        int i = 0;
        while (std::getline(plik, linia)) {
            zawartosc.push_back(linia);   
            i++; 
            }
        std::cout<<"--"<<i<<"--"<<std::endl;
        plik.close();
        for(std::string line : zawartosc){
            //TODO zamiana na słowa i wartości
        }
        return i;
        }
       
    
        


    void wypiszzawartosc(int g){
        int i = 0;
        for(std::string line : zawartosc){
            std::cout<<line<<"-------"<<i<<std::endl;
            i++;
            }   
        }
    };


int main(){
    int g;
    graf graf;
    // graf.pobierznazwe();
    // graf.wypisznazwe();
    graf.odczytajgraf();
    graf.wypiszzawartosc(g);
}