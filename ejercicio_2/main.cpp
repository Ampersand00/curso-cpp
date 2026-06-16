#include <iostream>
#include <vector>
/*
* Realiza una aplicación que pida por pantalla números, hasta que el usuario escriba 0,
* almacénalos en un array y luego recorre el array mostrándolos todos por pantalla.
*/

std::vector<int> readNumbers() {
    int num;
    std::vector<int> inputs; 
    do{
        std::cout << "Introduce numero. Para con 0\n";
        std::cin >> num;
        inputs.push_back(num);
    }while(num != 0);

    return inputs;
}

void printNumbers(std::vector<int> v){
    for(int i: v)
        std::cout << " item: " << i << "\t";
}

int main() {
    std::vector<int> a = readNumbers();
    printNumbers(a);

    return 0;
}