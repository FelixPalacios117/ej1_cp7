#include <iostream>
#include "retiro.h"
using namespace std;
int main(){
    Retiro retiro;
    retiro.setEdad(66);
    retiro.setGenero('M');
    retiro.aplicaRetiro();
    return 0;
}