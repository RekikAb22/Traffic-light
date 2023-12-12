#include<graphics.h>
#include<iostream>
#include<dos.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int main(){
	int gd=0,gm;
	initgraph(&gd,&gm,(char*)"C:\\Dev-Cpp\\lib");

 
	rectangle(258,45,387,435);

	moveto(387,70);
	lineto(465,70);
	lineto(418,160);
	lineto(387,160);
	lineto(387,70);
	
	 
		moveto(258,70);
	lineto(180,70);
	lineto(227,160);
	lineto(258,160);
	lineto(258,70);
	
	
	
	
	moveto(387,195);
	lineto(465,195);
	lineto(418,285);
	lineto(387,285);
	lineto(387,195);
	
	
	
		moveto(258,195);
	lineto(180,195);
	lineto(227,285);
	lineto(258,285);
	lineto(258,195);
		
	
	 
		moveto(387,320);
	lineto(465,320);
	lineto(418,411);
	lineto(387,411);
	lineto(387,320);
	

			moveto(258,320);
	lineto(180,320);
	lineto(227,411);
	lineto(258,411);
	lineto(258,320);
	while(1){
	

		setfillstyle(4,4);
		circle(320,130,40);
			delay(2000);
		floodfill(325,120,15);
		
setfillstyle(4,0);//greenoff
floodfill(325,320,15);	
		
		setfillstyle(4,14);	
	circle(320,230,40);
		delay(2000);
		floodfill(325,220,15);
	
		setfillstyle(4,0);//redoff
floodfill(325,120,15);

		setfillstyle(4,2);
	circle(320,330,40);
		delay(2000);
		floodfill(325,320,15);
		
setfillstyle(4,0);	//yellow off
floodfill(325,220,15);


}
	getch();
	return 0;

}
