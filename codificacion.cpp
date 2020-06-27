#include "iostream"
#include "conio.h"
#include "cstring"
 using namespace std;
int codificacion(); //DECLARANDO FUNCION DE CODIFICAR
 int main(void){

codificacion(); //FUNCION QUE CODIFICA PALABRA


     getch();
     return 0;
 }

int codificacion(){
char p[100]={};
 cout<<"Ingrese una palabra: ";
cin.getline(p,100,'\n');
for(int i=0;i<100;i++){
    switch (p[i])
    {
    case 'a': cout<<"7";     
                                    
        break;                   
    case 'b': cout<<"b";         
       
        break;
    case 'c': cout<<"3";        
       
        break;
    case 'd': cout<<"d";        
       
        break;
    case 'e': cout<<"5";      
       
        break;
    case 'f': cout<<"f";       
       
        break;
    case 'g': cout<<"8";     
       
        break;
    case 'h': cout<<"h";       
       
        break;
    case 'i': cout<<"4";          
       
        break;
    case 'j': cout<<"j";        
       
        break;
    case 'k': cout<<"k";         
       
        break;
    case 'l': cout<<"6";  
       
        break;
    case 'm': cout<<"0";     
       
        break;
    case 'n': cout<<"n";       
       
        break;
    case 'ñ': cout<<"ñ";   
       
        break; 
    case 'o': cout<<"9";        
       
        break;
    case 'p': cout<<"p";     
       
        break;
    case 'q': cout<<"q";       
       
        break;
    case 'r': cout<<"2";     
       
        break;
    case 's': cout<<"s";      

        break;
    case 't': cout<<"t";       
       
        break;
    case 'u': cout<<"1";     
       
        break;
    case 'v': cout<<"v";         
       
        break;
    case 'w': cout<<"w";      
       
        break;
    case 'x': cout<<"x";      
       
        break;
    case 'y': cout<<"y";     
       
        break; 
    case 'z': cout<<"z";       
    
        break;
    
    default:
        break;
        
    }
}

}