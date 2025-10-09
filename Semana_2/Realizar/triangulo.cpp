#include <iostream>
using namespace std;

int main() {
    float base;
    float altura;
    float lado;
    float resultadoArea;
    float resultadoPerimetro;
    
    cout<< "Ingresa la base:"<<endl;
    cin>> base;
    
    cout<< "Ingresa la altura:"<<endl;
    cin>> altura;
  
  	cout<< "Ingresa la lado:"<<endl;
    cin>> lado;
    
    resultadoArea = ((base*altura)/2);
    resultadoPerimetro = (lado*3);
    
    cout<< "El Area el Triangulo es: "<<resultadoArea <<endl;
	cout<< "El Perimetro del Triangulo es: "<< resultadoPerimetro <<endl;

    return 0;
}
