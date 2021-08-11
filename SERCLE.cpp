#include<graphics.h>

main(){
	initwindow(1000,500);
	
	
	//move circal 
	for(int i=0; i<1000; i++){
	//create circle
	circle (100 +i,100 ,50);
	
		delay(10);
	cleardevice();	
	}
	

	//getch();
}