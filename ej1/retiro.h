#include <iostream>
using namespace std;
class Retiro
{
public:
    void aplicaRetiro();
    void setEdad(int);
    void setGenero(char);
    Retiro();
private:
    int edad;
    char genero;
};
Retiro::Retiro()
{
};
void Retiro::aplicaRetiro(){
    if(genero && edad){
        if(genero=='F' || genero=='f'){
            if(edad<55){
                cout<<"No aplica a retiro aún";
            }else{
                cout<<"Si aplica a retiro";
            }
        }else if(genero=='M' || genero=='m'){
            if(edad>=60){
                cout<<"Si aplica";
            }else{
                 cout<<"No aplica a retiro aún";
            }
        }else{
            cout<<"Datos invalidos";
        }
    }else{
        cout<<"Las variables deben ser inicializadas";
    }
};
void Retiro::setEdad(int valor){
    edad=valor;
}
void Retiro::setGenero(char gen){
    genero=gen;
}   