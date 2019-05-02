#include<iostream>
//Definimos la funciñon fuera del main
int mayor(int num1,int num2,int num3){
          int respuesta;
          if(num1>num2 && num1>num3){
                       respuesta=num1;
                       }
          if(num2>num1 && num2>num3){
                       respuesta=num2;
                       }
          if(num3>num1 && num3>num2){
                       respuesta=num3;
                       }
          return respuesta;
}
int main(){
    int num1,num2,num3;
    char salir;
    //Leo un numero entero
    std::cout<<"Introduce un numero: ";
    std::cin>>num1;
    //Leo otro numero entero
    std::cout<<"Introduce un numero: ";
    std::cin>>num2;
     //Leo otro numero entero
    std::cout<<"Introduce un numero: ";
    std::cin>>num3;
    //Funcion mayor. Lo envio a una funcion que los compara
    std::cout<<"el mayor es: "<<mayor(num1,num2,num3);    
    std::cout<<"\nToca cualquier letra para salir ";
    std::cin>>salir;
    return 0;
}
