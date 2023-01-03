#include <graphics.h>
#include <iostream>
#include <conio.h>
#include <math.h>
 
using namespace std;
 
void midPointCircleDraw(int x_centre, int y_centre, int r){ 
    int x = r, y = 0; 
    putpixel( x + x_centre, y + y_centre, WHITE); 
   
    if (r > 0) { 
        putpixel( x + x_centre, -y + y_centre, WHITE); 
        cout << x + x_centre << " "<<   -y + y_centre << endl;
        putpixel( y + x_centre, x + y_centre, WHITE); 
        cout <<  y + x_centre << " "<<  x + y_centre << endl;
        putpixel( -y + x_centre, x + y_centre, WHITE);
        cout <<  -y + x_centre << " "<<  x + y_centre << endl;
    } 
   
    int P = 1 - r; 
    while (x > y) {  
        y++; 
          
        if (P <= 0) 
            P = P + 2*y + 1; 
              
        else{ 
            x--; 
            P = P + 2*y - 2*x + 1; 
        } 
          
        if (x < y) 
            break; 
          
        putpixel( x + x_centre, y + y_centre, WHITE); 
        cout << x + x_centre << " "<<  y + y_centre << endl;
        putpixel( -x + x_centre, y + y_centre, WHITE); 
        cout << -x + x_centre << " "<<  y + y_centre << endl;
        putpixel( x + x_centre, -y + y_centre, WHITE); 
        cout << x + x_centre << " "<<  -y + y_centre << endl;
        putpixel( -x + x_centre, -y + y_centre, WHITE); 
        cout <<  -x + x_centre << " "<<  -y + y_centre << endl;
          
        if (x != y) { 
            putpixel( y + x_centre, x + y_centre, WHITE); 
            cout << y + x_centre << " "<<  x + y_centre << endl;
            putpixel( -y + x_centre, x + y_centre, WHITE); 
            cout << -y + x_centre << " "<<  x + y_centre << endl;
            putpixel( y + x_centre, -x + y_centre, WHITE); 
            cout << y + x_centre << " "<<  -x + y_centre << endl;            
            putpixel( -y + x_centre, -x + y_centre, WHITE); 
            cout << -y + x_centre <<" "<<  -x + y_centre << endl;
        } 
    }  
} 
int main(){
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    cout << "Enter x, y, r: ";
    int x, y, r;
    cin >> x >> y >> r;
    midPointCircleDraw(x, y, r);
    
    getch();
    closegraph();
 
    return 0;
}
