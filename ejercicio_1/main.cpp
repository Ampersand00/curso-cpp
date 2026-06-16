#include <iostream>

bool esPar(int num){

    return num%2 == 0 ;
}

bool esPrimo(int a){
    if(a <= 2)
        return false;
    else{
        for(int i=2;i++;i<a){
            if(a%i == 0)
                return false;
        }
        return true;
    }
}

void esIgual(){
    int num1, num2;
    do{
        std::cout << "Introduce un numero:\n";
        std::cin >> num1;
        std::cout << "Let the fun begin :), inserta OTRO numero: \n";
        std::cin >> num2;
        if(num1 > num2)
            std::cout << "El primero es más grande \n";
        else if(num1 < num2)
            std::cout << "El priemro es más chico\n";

    }while(num1 != num2);
    std::cout << "LET's GOOOO\n";
}

int main(){

    int a;
    std::cout << "Inserte numero entero: " << "\n";
    std::cin >> a;
    std::cout << (esPar(a) ? "Es par\n" : "No es par\n");

    std::cout << "Inserte OTRO numero entero:\n ";
    std::cin >> a;
    std::cout << (esPrimo(a) ? "Es primo\n":"No es primo\n");

    esIgual();

    return 0;
}
