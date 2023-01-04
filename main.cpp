#include<graphics.h>
#include<stdlib.h>
#include<conio.h>
#include<dos.h>
#include<iostream>
using namespace std;
void draw(int xm,int ym,int x, int y){

    	
        putpixel(xm+x,ym-y,5);
        
        putpixel(xm+y,ym-x,5);
       
        putpixel(xm+y,ym+x,5);
       
        putpixel(xm+x,ym+y,5);
     
        putpixel(xm-x,ym+y,5);
       
        putpixel(xm-y,ym+x,5);
       
        putpixel(xm-y,ym-x,5);
        
        putpixel(xm-x,ym-y,5);
       
}
void calculate(int r,int xm,int ym){
	int x=0;
	
    int y=r;
    float p=1-r;
    
    	while(x<=y)
    	
    {
    	delay(10);
    	draw(xm,ym,x,y);
        if(p<0)
        {
        	x++;
            p+=(2*x)+1;
        }
        else
        {
            p=p+(2*(x-y))+1;
            y--;
            x++;
        }
        
    }
}
int main()
{
	float xm,ym;
	initwindow(400,400);
    cout<<"Enter radius:";
	int r;
    cin>>r;
	cout<<"Enter the center of the circle: ";
	cin>>xm>>ym;
	
	for(int i=0;i<24;i++){
		calculate(i,xm+i,ym+i);
	}   
    
    getch();
    closegraph();
    return 0;
}
