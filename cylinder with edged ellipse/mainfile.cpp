#include<iostream>
#include<graphics.h>
#include<conio.h>

using namespace std;

void ellipse(int xc, int yc , int rx, int ry){
	int p1 = ry*ry-rx*rx*ry+(rx*rx)/4;
	
	int x = 0;
	int y = ry;
	
	while(2*x*ry*ry <= 2*y*rx*rx){
		if(p1<=0){
			x+=1;
			p1+=2*ry*ry*x+ry*ry;
		}
		else{
			x+=1;
			y-=1;
			p1+=2*ry*ry*x+ry*ry-2*rx*rx*y;
		}
		putpixel(xc+x,yc+y,5);
//		delay(500);
		putpixel(xc+x,yc-y,6);
//		delay(500);
		putpixel(xc-x,yc+y,7);
//		delay(500);
		putpixel(xc-x,yc-y,8);
		delay(.002);
	}
	int p2 = ry*ry*(x+1/2)*(x+1/2)+rx*rx*(y-1)*(y-1)-rx*rx*ry*ry;
	
	while(y!=0){
		if(p2>0){
			y-=1;
			p2+=rx*rx-2*rx*rx*y;
		}
		else{
			x+=1;
			y-=1;
			p2+=rx*rx-2*rx*rx*y+2*ry*ry*x;
		}
		putpixel(xc+x,yc+y,5);
//		delay(500);
		putpixel(xc+x,yc-y,6);
//		delay(500);
		putpixel(xc-x,yc+y,7);
//		delay(500);
		putpixel(xc-x,yc-y,8);
		delay(.002);
	}
}

int main(){
	int xc,yc,rx,ry,h;
	
	initwindow(900,900,"cylinder using ellipse");
	
	cout<<"Enter the center of ellipse x and y: ";
	cin>>xc>>yc;
	cout<<"Enter the x-radius: ";
	cin>>rx;
	cout<<"Enter y-radius: ";
	cin>>ry;
	cout<<"Enter height of the ellipse: ";
	cin>>h;
//	int i;
	for(int i=0;i<=h;i++){
		ellipse(xc+i,yc+i,rx,ry);
	}
	
	getch();
	closegraph();
	
	return 0;
}
