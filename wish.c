#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
    int gd = DETECT,gm;
    intitgaraph(&gd,&gm,"c:\\turbo:3\\bgi");
    char z[50];
    int count;
    printf("Print no.  of secounds left:");
    scanf("%d",&count);
    printf("Print no. of Secounds left:");
    scanf("%d",&count);
    settextstyle(7,HDRIZ_DIR,5);
    for(int i=count;i>0;i--)
    {
        sprintf(z,"Start in %d secound",i);
        outtextxy(10,210,z);
        delay(1000);
        cleardevice();
    }
    settextstyle(3,HORIZ_DIR,4);
    setcolour(WHITE));
    outtextxy(30,200,"Made BY:-kpBhiaya....");
    
    delay(500);
    setcolour(GREEN);
    outtextxy(30,300,"Made BY:-kpBhiaya....");

    delay(500);
    setcolour(RED);
    outtextxy(30,100,"Made BY:-kpBhiaya....");

    delay(500);
    int j =0,a=391,b=440,d=523,e=587,f=659,g=659,h=783;
    printf("\n HLW Frds:!!\nI AM kpk \n Welcome To My programming knowledge");

    sound(a);
    delay(250);

    sound(j);
    delay(250);

    sound(a);
    delay(250);

    sound(b);
    delay(250);

    sound(a);
    delay(250);

    sound(d);
    delay(250);

    sound(c);
    delay(500);

    sound(j);
    delay(300);

     sound(a);
    delay(250);

    sound(j);
    delay(20);

    sound(a);
    delay(250);

    sound(b);
    delay(250);
   
     sound(e);
    delay(250);

    sound(d);
    delay(500);

    sound(a);
    delay(250);

    sound(a);
    delay(250);

    sound(h);
    delay(250);

    sound(f);
    delay(250);

    sound(d);
    delay(250);

    sound(c);
    delay(250);

    sound(b);
    delay(400);

    sound(g);
    delay(250);

    sound(g);
    delay(250);

    sound(f);
    delay(250);

    sound((d);
    delay(250);

    sound(e);
    delay(250);

    sound(d);
    delay(600);
//2
     sound(a);
    delay(250);

    sound(j);
    delay(20);

    sound(a);
    delay(250);

    sound(b);
    delay(250);

    sound(a);
    delay(250);

    sound(d);
    delay(250);

    sound(c);
    delay(500);

    sound(j);
    delay(200);


     sound(a);
    delay(250);

    sound(j);
    delay(20);

    sound(a);
    delay(250);

    sound(b);
    delay(250);

    sound(a);
    delay(250);

    sound(e);
    delay(250);

    sound(d);
    delay(500);


    sound(a);
    delay(250);

    sound(a);
    delay(250);

    sound(h);
    delay(250);

    sound(f);
    delay(250);

    sound(d);
    delay(250);

    sound(c);
    delay(250);

    sound(b);
    delay(400);


     sound(g);
    delay(250);

    sound(g);
    delay(20);

    sound(f);
    delay(250);

    sound(d);
    delay(250);

    sound(e);
    delay(250);

    sound(d);
    delay(250);

    nonsound();
}
