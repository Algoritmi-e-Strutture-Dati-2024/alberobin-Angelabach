#include <iostream>
#include "Albero.cpp"

int main() {
    AlberoBinario <int> alberoA;

    alberoA.insRadice(10);

    alberoA.insFiglioSinistro(0,4);
    alberoA.insFiglioDestro(0,8);

    alberoA.insFiglioSinistro(1,6);
    alberoA.insFiglioDestro(1,2);

    std::cout << "Figlio sinistro della radice: ";
    if (alberoA.figlioSinistro(0) != -1) {
        std::cout <<std::to_string(alberoA.radice());
    }
    else {
        std::cout << "Nessuno";
    }
    std::cout <<std::endl;

    std::cout << "Figlio destro della radice: ";
    if (alberoA.figlioDestro(0) != -1) {
        std::cout <<std::to_string(alberoA.radice());
    }
    else {
        std::cout << "Nessuno";
    }
    std::cout << std::endl;

    alberoA.rimuovi(6);

    std::cout << "Struttura dell'albero:" << std::endl;
    alberoA.stampa();

    return 0;
}
