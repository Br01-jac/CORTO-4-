#include<iostream>
#include<conio.h>
#include<string.h>
#include <iomanip>
using namespace std;


float  nstudent(){
    
    int n = -1;
    cin>>n;
    float notas[n][4];//arreglo con n estudiantes

cout<<"CALCULAR PROMEDIO DE N ALUMNOS, NOTA MINIMA ES DE 7 PARA APROBAR!"<<endl;

for (int i = 0; i <n ; i++){
    int numeroalumno=i+1;
    cout<<"digite las notas del estudiante # "<<numeroalumno<<endl;
    float name = 1 , nota1=0, nota2=0, nota3=0, nota4=0, nota5=0;//donde se almacenan las notas
    cout<<"estudiante # "<<name+i<< endl;

       cout<<"Ingrese la nota 1"<< endl;
   
    cin>>nota1;
     notas[i][0] = nota1;

      cout<<"Ingrese la nota 2"<< endl;
    
    cin>>nota2;
     notas[i][1] = nota2;


      cout<<"Ingrese la nota 3"<< endl;
   
    cin>>nota3;
     notas[i][2] = nota3;

      cout<<"Ingrese la nota 4"<< endl;
   
    cin>>nota4;
     notas[i][3] = nota4;

      cout<<"Ingrese la nota 5"<<endl;
    
    cin>>nota5;
     notas[i][4] = nota5;
       
}

//SACANDO EL PROMEDIO DENOTAS DE LOS ALUMNO
for (int i = 0; i <n; i++)
{
    float promedio=0;
    for (int s = 0; s < 5; s++)
    {
            promedio += notas[i][s]*0.2;
            
    }
   int h=i+1;
cout<<"El promedio del estudiante  "<<h<<" es de: "<<promedio<<endl;
 
    if(promedio<7)
    {
      cout<<"Este alumno reprobo."<<endl;
    }
    else{
cout<<"Este alumno Aprobo!!!"<<endl;
    }

}


}





int main(){
 cout<<"ingrese a cuantos estudiantes quiere calcular su nota"<<endl;
 nstudent();
}