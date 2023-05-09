#include<iostream>
#include<cmath>
using namespace std;
class Circulo{
        double radio;
    public:
        Circulo(double radio){
            this->radio=radio;
        }
        friend void calcularArea(Circulo& objeto){
            cout<<"El area del circulo es: "<<M_PI*pow(objeto.radio,2)<<endl;
        }
};
int main(){
    Circulo circulo1(17.898);
    calcularArea(circulo1);
}