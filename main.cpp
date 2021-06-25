#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include<math.h>
#include<conio.h>
#include<time.h>
using namespace std;
#include "rlutil.h"
#include "funciones.h"
using namespace rlutil;
void FondoLetra(const char* text , int posx , int posy,bool selecion){
if(selecion){
     setBackgroundColor(BLUE);
}else{
    setBackgroundColor(BLACK);

}
locate(posx,posy);
cout<<text<<endl;
setBackgroundColor(BLACK);



}

int main(){
/*int num,v[2]{0},dado1,dado2,dado3;
srand(time(NULL));
dado1=num=1+rand()%6;
dado2=num=1+rand()%6;
dado3=num=1+rand()%6;
cout<<dado1<<endl;
cout<<dado2<<endl;
cout<<dado3<<endl;

/*for(int i=0;i<=2;i++){

v[i]=num=1+rand()%6;
cout<<num<<endl;

}

cout<<"--------------------------------"<<endl;

for(int x=0;x<=2;x++){
    cout<<v[x]<<endl;


}*/

     int mn=1 ,y=0 ;
     hidecursor();

    do
    {
        setBackgroundColor(BLACK);
    setColor(WHITE);
    FondoLetra("OPCION 1",30,5,y==0);
    FondoLetra("OPCION 2",30,6,y==1);
    FondoLetra("OPCION 3",30,7,y==2);
    FondoLetra(" SALIR ",30,8,y==3);




        int key = getkey();
//anykey();
       switch (key)
       {
        case 15://abajo
            locate(28,5+y);
        cout<<" "<<endl;
            y++;
            if(y>3){

                y=3;
            }
           break;

        case 14://arriba
            locate(28,5+y);
        cout<<" "<<endl;
            y--;
            if(y<0){
                y=0;
            }

            break;

        case 1://ENTER
            switch (y)
            {
            case 5 :

              cls();
              return 0;

                break;

            default:
                break;
            }


            break;

       default:
           break;
       }



        //cin>>mn;
        //up;14
        //down;15
        //left;16
        //right;17

    } while (mn != 0);



    return 0;
}
