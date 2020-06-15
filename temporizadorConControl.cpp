#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <conio.h>

#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif

#include <cstdlib>

using namespace std;

int main(){
	
	int hora = 0, minuto = 59, segundo = 59;

	cout<<"Temporizador inicia en "<<endl<<"1:00:00"<<endl;
	
	while(true){
		
		while(!kbhit()){
			
			if(minuto >= 0){
				
				if(segundo >= 0){
					
					if(hora == 0 && minuto == 0 && segundo == 0){
						cout<<"FIN DEL TEMPORIZADOR"<<endl;
						cout<<"Programador: Jose Posso - @daniel7byte"<<endl;
						system("PAUSE");
						return 0;
					}
					
					cout<<hora<<":"<<minuto<<":"<<segundo<<endl;
				  
					Sleep(1000);
					// Sleep(0); // TEST
			
					segundo--;
					
				}else{
					
					segundo = 59;
					minuto--;
					
				}
			}
			
		}
		
		char tecla = getch();
		if(tecla == 'P' || tecla == 'p'){
			cout<<endl<<"PAUSA"<<endl<<endl;
			getch();
		}
		
		if(tecla == 'T' || tecla == 't'){
			cout<<endl<<"REINICIO"<<endl<<endl;
			minuto = 59;
			segundo = 59;
		}
		
	}
	
}
