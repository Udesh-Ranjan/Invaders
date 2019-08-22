/*
			       þ INVADERS þ
				ßßßßßßßßßß
			     þ  ARCADE GAME þ

*/

#include<iostream.h>
#include<graphics.h>
#include<stdlib.h>
#include<time.h>
#include<process.h>
#include<DOS.h>
#include<conio.h>
#include<stdio.h>


#define j 219

int X=40,Y=13;
unsigned long long r_time=0,score=0,fire_time=0;
int fire_x,fire_y;
int fire_x2,fire_y2;
int fire_x3,fire_y3;
int S_Line=0;
////////Level 1 Evils/////////////
int evil_x=1,evil_y=1,evil_x2=5,evil_y2=1,evil_x3=9,evil_y3=1,evil_x4=13,evil_y4=1;
int evil_x5=3,evil_y5=2,evil_x6=7,evil_y6=2,evil_x7=11,evil_y7=2;
int set=1,set2=1,set3=1,set4=1,set5=1,set6=1,set7=1;
int damage_evil1=0,damage_evil2=0,damage_evil3=0,damage_evil4=0,damage_evil5=0,damage_evil6=0,damage_evil7=0;
int life_evil1=1,life_evil2=1,life_evil3=1,life_evil4=1,life_evil5=1,life_evil6=1,life_evil7=1;
////////Level 2 Evils//////////////

int evil_x8=1,evil_y8=1,evil_x9=5,evil_y9=1,evil_x10=9,evil_y10=1,evil_x11=13,evil_y11=1,evil_x12=17,evil_y12=1,evil_x13=21,evil_y13=1;
int evil_x14=7,evil_y14=2,evil_x15=11,evil_y15=2,evil_x16=15,evil_y16=2;
int evil_x17=3,evil_y17=3,evil_x18=19,evil_y18=3;
int evil_x19=11,evil_y19=4;
int set8=1,set9=1,set10=1,set11=1,set12=1,set13=1,set14=1,set15=1,set16=1,set17=1,set18=1,set19=1;
int damage_evil8=0,damage_evil9=0,damage_evil10=0,damage_evil11=0,damage_evil12=0,damage_evil13=0,damage_evil14=0,damage_evil15=0,damage_evil16=0,damage_evil17=0,damage_evil18=0,damage_evil19=0;
int life_evil8=1,life_evil9=1,life_evil10=1,life_evil11=1,life_evil12=1,life_evil13=1,life_evil14,life_evil15,life_evil16=1,life_evil17=1,life_evil18=1,life_evil19=1;
////////Level 3 Evils//////////////////////////

int evil_x20=1+37,evil_y20=1,evil_x21=5+37,evil_y21=1,evil_x22=9+37,evil_y22=1,evil_x23=13+37,evil_y23=1,evil_x24=17+37,evil_y24=1,evil_x25=21+37,evil_y25=1;
int evil_x26=7+37,evil_y26=2,evil_x27=11+37,evil_y27=2,evil_x28=15+37,evil_y28=2;
int evil_x29=9+37,evil_y29=3,evil_x30=13+37,evil_y30=3;
int evil_x31=11+37,evil_y31=4;
int set20=1,set21=1,set22=1,set23=1,set24=1,set25=1,set26=1,set27=1,set28=1,set29=1,set30=1,set31=1;
int damage_evil20=0,damage_evil21=0,damage_evil22=0,damage_evil23=0,damage_evil24=0,damage_evil25=0,damage_evil26=0,damage_evil27=0,damage_evil28=0,damage_evil29=0,damage_evil30=0,damage_evil31=0;
int life_evil20=1,life_evil21=1,life_evil22=1,life_evil23=1,life_evil24=1,life_evil25=1,life_evil26,life_evil27,life_evil28=1,life_evil29=1,life_evil30=1,life_evil31=1;

///////////////////////////////////
void Junk(void);
void Line();
void fire();
void fire2();
void fire3();
void evil();
void evil2();
void evil3();
void evil4();
void evil5();
void evil6();
void evil7();

void evil8();
void evil9();
void evil10();
void evil11();
void evil12();
void evil13();
void evil14();
void evil15();
void evil16();
void evil17();
void evil18();
void evil19();

void evil20();
void evil21();
void evil22();
void evil23();
void evil24();
void evil25();
void evil26();
void evil27();
void evil28();
void evil29();
void evil30();
void evil31();

void check_level1();
void check_level2();
void check_level3();

//////////MaIN//////////////
int main()
{

    _setcursortype(_NOCURSOR);
   char ch='o';
   clrscr();
   gotoxy(75,1);
   cout<<score;
   srand(time(0));
   Line();
    gotoxy(36,13);
textcolor(10);
gotoxy(34,11);
cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219);
gotoxy(37,13);
textcolor(14);
cprintf("LEVEL 1");
gotoxy(34,15);
textcolor(10);
cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219);
getch();
textcolor(0);
   //////////1////////////
   while(life_evil1||life_evil2||life_evil3||life_evil4||life_evil5||life_evil6||life_evil7)
   {
   ch='o';
   clrscr();
   Line();
   gotoxy(75,1);
   cout<<score;
    if(kbhit())
    {
     //clrscr();
     ch=getch();
     if(ch=='a' && X>=3)
     X--;
     if(ch=='d' && X<=67)
     X++;
     if(ch=='w' && Y>=5)
     Y--;
     if(ch=='s' && Y<=22)
     Y++;
     if(ch=='f')
     fire();
     if(ch=='x')
     exit(0);

     evil();
     evil2();
     evil3();
     evil4();
     evil5();
     evil6();
     evil7();


     Junk();
     Line();
     clrscr();
     Line();
    }
     Line();
     evil();
     evil2();
     evil3();
     evil4();
     evil5();
     evil6();
     evil7();
     Line();
     Junk();
     delay(10);
     r_time++;
   }

   ///////////2/////////////
   delay(1000);
   clrscr();
   textcolor(0);
   char avoid[30];
   gotoxy(36,13);
textcolor(14);
gotoxy(34,11);
cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219);
gotoxy(37,13);
textcolor(3);
cprintf("LEVEL"); textcolor(11);   cprintf(" 2");
textcolor(14);
gotoxy(34,15);
cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219);

textcolor(0);

cscanf("%s",avoid);
   clrscr();
   textcolor(3);
   r_time=0;
   ch='o';
   clrscr();
   gotoxy(75,1);
   cout<<score;
   srand(time(0));
   Line();

   while(life_evil8||life_evil9||life_evil10||life_evil11||life_evil12||life_evil13||life_evil14||life_evil15||life_evil16||life_evil17||life_evil18||life_evil19)
   {
   ch='o';
   clrscr();
   Line();
   gotoxy(75,1);
   cout<<score;
     if(kbhit())
     {
     ch=getch();
     if(ch=='a' && X>=3)
     X--;
     if(ch=='d' && X<=67)
     X++;
     if(ch=='w' && Y>=7)
     Y--;
     if(ch=='s' && Y<=22)
     Y++;
     if(ch=='f')
     fire2();
     if(ch=='x')
     exit(0);

      evil8();
      evil9();
      evil10();
      evil11();
      evil12();
      evil13();
      evil14();
      evil15();
      evil16();
      evil17();
      evil18();
      evil19();
	   Junk();
     Line();
     clrscr();
     Line();
     }
     Line();
      evil8();
      evil9();
      evil10();
      evil11();
      evil12();
      evil13();
      evil14();
      evil15();
      evil16();
      evil17();
      evil18();
      evil19();

      Line();
     Junk();
     delay(10);
     r_time++;
   }
     //////////////////////////

     delay(1000);
   clrscr();
   textcolor(0);
textcolor(4);
gotoxy(34,11);
cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219);
gotoxy(37,13);
textcolor(3);
cprintf("LEVEL"); textcolor(11); cprintf(" 3");
gotoxy(34,15);
textcolor(4);
cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219);

textcolor(0);
   cscanf("%s",avoid);
   clrscr();
   textcolor(3);
   r_time=0;
   ch='o';
   clrscr();
   gotoxy(75,1);
   cout<<score;
   srand(time(0));
   Line();
   while(life_evil20||life_evil21||life_evil22||life_evil23||life_evil24||life_evil25||life_evil26||life_evil27||life_evil28||life_evil29||life_evil30||life_evil31)
   {
   ch='o';
   clrscr();
   Line();
   gotoxy(75,1);
   cout<<score;
     if(kbhit())
     {
     ch=getch();
     if(ch=='a' && X>=3)
     X--;
     if(ch=='d' && X<=67)
     X++;
     if(ch=='w' && Y>=7)
     Y--;
     if(ch=='s' && Y<=22)
     Y++;
     if(ch=='f')
     fire3();
     if(ch=='x')
     exit(0);

      evil20();
      evil21();
      evil22();
      evil23();
      evil24();
      evil25();
      evil26();
      evil27();
      evil28();
      evil29();
      evil30();
      evil31();
	   Junk();
     Line();
     clrscr();
     Line();
     }
     Line();

      evil20();
      evil21();
      evil22();
      evil23();
      evil24();
      evil25();
      evil26();
      evil27();
      evil28();
      evil29();
      evil30();
      evil31();
      Line();
     Junk();
     delay(10);
     r_time++;
   }

   delay(1000);
int gd=DETECT,gm,loop;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
settextstyle(0,0,5);
setcolor(14);
outtextxy(getmaxx()/2-160,getmaxy()/2-20,"YOU  WIN");
sound(200);
delay(1000);
nosound();
closegraph();
 exit(0);
 return 0;
}
void Junk()
{

   gotoxy(X,Y);

   textcolor(7);

   cprintf("%c",30);


   gotoxy(X,Y+1);

   //textcolor(15);
   cprintf("%c",219);

   textcolor(RED);
   gotoxy(X-1,Y+2);
   cprintf("%c %c",254,254);

}

void fire()
{  ////////////////////
   fire_time=0;
   ////////////////////
   fire_x=X;
   fire_y=Y-1;
   textcolor(14);
   while(fire_y)
   {
    gotoxy(fire_x,fire_y);
    textcolor(15);
    cprintf(".");
    fire_y--;

    check_level1();

    sound(30);
    fire_time++;
    delay(1);
    nosound();

   }
   textcolor(15);
}
//////////////////
void fire2()
{  ////////////////////
   fire_time=0;
   ////////////////////
   fire_x2=X;
   fire_y2=Y-1;
   textcolor(14);
   while(fire_y2)
   {
    gotoxy(fire_x2,fire_y2);

    cprintf(".");
    fire_y2--;
    check_level2();
    sound(30);
    fire_time++;
    delay(1);
    nosound();

   }
   textcolor(15);
}

//////////////////
void fire3()
{  ////////////////////
   fire_time=0;
   ////////////////////
   fire_x3=X;
   fire_y3=Y-1;
   textcolor(14);
   while(fire_y3)
   {
    gotoxy(fire_x3,fire_y3);

    cprintf(".");
    fire_y3--;
    check_level3();
    sound(30);
    fire_time++;
    delay(1);
    nosound();

   }
   textcolor(15);
}
///////////////////
void Line()
{
 for(S_Line=1;S_Line<26;S_Line++)
{
  textcolor(8);
  gotoxy(70,S_Line);
  cprintf("%c",177);

}



}
//////evil1///////////
void evil()
{
if(damage_evil1<100)
{
if(evil_x==50)
set=0;
if(evil_x==1)
set=1;
if(r_time%100==0)
if(set)
evil_x++;
else
evil_x--;
textcolor(14);
gotoxy(evil_x,evil_y);
cprintf("%c",248);   //248,157,248
cprintf("%c",157);
cprintf("%c",248);
}
}
////////evil2/////////////
void evil2()
{
 if(damage_evil2<100)
 {
 if(evil_x2==54)
 set2=0;
 if(evil_x2==5)
 set2=1;
 if(r_time%100==0)
 if(set2)
 evil_x2++;
 else
 evil_x2--;
 gotoxy(evil_x2,evil_y2);

 textcolor(14);
 cprintf("%c",248);  //248,157,248
 cprintf("%c",157);
 cprintf("%c",248);

 }
}
//////////evil3///////////////
void evil3()
{
 if(damage_evil3<100)
 {
 if(evil_x3==58)
 set3=0;
 if(evil_x3==9)
 set3=1;
 if(r_time%100==0)
 if(set3)
 evil_x3++;
 else
 evil_x3--;
 gotoxy(evil_x3,evil_y3);
  textcolor(14);
 cprintf("%c",248);  //248,157,248
 cprintf("%c",157);
 cprintf("%c",248);
 }
}
///////////evil4///////////////
void evil4()
{
 if(damage_evil4<100)
 {
 if(evil_x4==62)
 set4=0;
 if(evil_x4==13)
 set4=1;
 if(r_time%100==0)
 if(set4)
  evil_x4++;
  else
  evil_x4--;
  gotoxy(evil_x4,evil_y4);
 textcolor(14);
 cprintf("%c",248);  //248,157,248
 cprintf("%c",157);
 cprintf("%c",248);
  }
}
/////////////evil5///////////////
void evil5()
{
 if(damage_evil5<100)
 {
  if(evil_x5==3)
 set5=1;
 if(evil_x5==52)
 set5=0;
 if(r_time%100==0)
 if(set5)
  evil_x5++;
  else
  evil_x5--;
  gotoxy(evil_x5,evil_y5);

    textcolor(14);
 cprintf("%c",248);  //248,157,248
 cprintf("%c",157);
 cprintf("%c",248);
 }
}
/////////////evil6/////////////////
void evil6()
{
 if(damage_evil6<100)
 {
  if(evil_x6==56)
 set6=0;
 if(evil_x6==7)
 set6=1;
 if(r_time%100==0)
 if(set6)
  evil_x6++;
  else
  evil_x6--;
  gotoxy(evil_x6,evil_y6);

  textcolor(8);
 cprintf("%c",248);  //248,157,248
 cprintf("%c",157);
 cprintf("%c",248);
 }
}
/////////////evil7//////////////////////
void evil7()
{
 if(damage_evil7<100)
 {
  if(evil_x7==60)
 set7=0;
 if(evil_x7==11)
 set7=1;
 if(r_time%100==0)
 if(set7)
  evil_x7++;
  else
  evil_x7--;
  gotoxy(evil_x7,evil_y7);
 textcolor(14);
 cprintf("%c",248);  //248,157,248
 cprintf("%c",157);
 cprintf("%c",248);
 }
}
///////////Evil 8//////////////
void evil8()
{
if(damage_evil8<100)
{
if(evil_x8==45)
set8=0;
if(evil_x8==1)
set8=1;
if(r_time%90==0)
if(set8)
evil_x8++;
else
evil_x8--;
gotoxy(evil_x8,evil_y8); //167,157,167
textcolor(15);
cprintf("%c",167);
textcolor(7);
cprintf("%c",157);
textcolor(15);
cprintf("%c",167);
}
}
////////////Evil 9////////////
void evil9()
{
if(damage_evil9<100)
{
if(evil_x9==49)
set9=0;
if(evil_x9==5)
set9=1;
if(r_time%90==0)
if(set9)
evil_x9++;
else
evil_x9--;

gotoxy(evil_x9,evil_y9);  //167,157,167
//printf("%c%c%c",167,157,167);
textcolor(15);
cprintf("%c",167);
textcolor(7);
cprintf("%c",157);
textcolor(15);
cprintf("%c",167);
}
}
////////////Evil 10////////////
void evil10()
{
if(damage_evil10<100)
{
if(evil_x10==53)
set10=0;
if(evil_x10==9)
set10=1;
if(r_time%90==0)
if(set10)
evil_x10++;
else
evil_x10--;
gotoxy(evil_x10,evil_y10);
//printf("%c%c%c",167,157,167);  //i67,157,167
textcolor(15);
cprintf("%c",167);
textcolor(7);
cprintf("%c",157);
textcolor(15);
cprintf("%c",167);
}
}
////////////Evil 11//////////////////
void evil11()
{
if(damage_evil11<100)
{
if(evil_x11==57)
set11=0;
if(evil_x11==13)
set11=1;
if(r_time%90==0)
if(set11)
evil_x11++;
else
evil_x11--;
gotoxy(evil_x11,evil_y11);
//printf("%c%c%c",167,157,167);
textcolor(15);
cprintf("%c",167);
textcolor(7);
cprintf("%c",157);
textcolor(15);
cprintf("%c",167);
}
}
/////////////Evil 12//////////////////
void evil12()
{
if(damage_evil12<100)
{
if(evil_x12==61)
set12=0;
if(evil_x12==17)
set12=1;
if(r_time%90==0)
if(set12)
evil_x12++;
else
evil_x12--;
gotoxy(evil_x12,evil_y12);
//printf("%c%c%c",167,157,167);
textcolor(15);
cprintf("%c",167);
textcolor(7);
cprintf("%c",157);
textcolor(15);
cprintf("%c",167);
}
}
///////////Evil 13///////////////////
void evil13()
{
if(damage_evil13<100)
{
if(evil_x13==65)
set13=0;
if(evil_x13==21)
set13=1;
if(r_time%90==0)
if(set13)
evil_x13++;
else
evil_x13--;
gotoxy(evil_x13,evil_y13);  //167,157,167
textcolor(15);
cprintf("%c",167);
textcolor(7);
cprintf("%c",157);
textcolor(15);
cprintf("%c",167);

}
}
//////////Evil 14////////////////////
void evil14()
{
if(damage_evil14<100)
{
if(evil_x14==51)
set14=0;
if(evil_x14==7)
set14=1;
if(r_time%90==0)
if(set14)
evil_x14++;
else
evil_x14--;
gotoxy(evil_x14,evil_y14);
//printf("%c%c%c",248,157,248);
textcolor(4);
cprintf("%c",248);
cprintf("%c",157);
cprintf("%c",248);
}
}
//////////Evil 15////////////////////
void evil15()
{
if(damage_evil15<100)
{
if(evil_x15==55)
set15=0;
if(evil_x15==11)
set15=1;
if(r_time%90==0)
if(set15)
evil_x15++;
else
evil_x15--;
gotoxy(evil_x15,evil_y15);
//printf("%c%c%c",248,157,248);
textcolor(4);
cprintf("%c",248);
cprintf("%c",157);
cprintf("%c",248);
}
}
///////////////////////////////
void evil16()
{
if(damage_evil16<100)
{
if(evil_x16==59)
set16=0;
if(evil_x16==15)
set16=1;
if(r_time%90==0)
if(set16)
evil_x16++;
else
evil_x16--;
gotoxy(evil_x16,evil_y16);
//printf("%c%c%c",248,157,248);
textcolor(4);
cprintf("%c",248);
cprintf("%c",157);
cprintf("%c",248);
}
}
//////////////////////////////
void evil17()
{
if(damage_evil17<100)
{
if(evil_x17==47)
set17=0;
if(evil_x17==3)
set17=1;
if(r_time%90==0)
if(set17)
evil_x17++;
else
evil_x17--;
gotoxy(evil_x17,evil_y17);
//printf("%c%c%c",167,157,167);
textcolor(4);
cprintf("%c",167);
cprintf("%c",157);
cprintf("%c",167);
}
}
////////////////////////////////
void evil18()
{
if(damage_evil18<100)
{
if(evil_x18==63)
set18=0;
if(evil_x18==19)
set18=1;
if(r_time%90==0)
if(set18)
evil_x18++;
else
evil_x18--;
gotoxy(evil_x18,evil_y18);
//printf("%c%c%c",167,157,167);
textcolor(4);
cprintf("%c",167);
cprintf("%c",157);
cprintf("%c",167);
}
}
////////////////////////////////
void evil19()
{
if(damage_evil19<1000)
{
if(evil_x19==11)
set19=1;
if(evil_x19==55)
set19=0;
if(r_time%90==0)
if(set19)
evil_x19++;
else
evil_x19--;
gotoxy(evil_x19,evil_y19);
//printf("%c%c%c",248,157,248);   //248,257,248
textcolor(10);
cprintf("%c",248);
textcolor(2);
cprintf("%c",257);
textcolor(10);
cprintf("%c",248);
textcolor(15);
}
}
////////////////////////////////
//_________________________________
///////////Evil 20//////////////
void evil20()
{
if(damage_evil20<100)
{
if(evil_x20==45)
set20=0;
if(evil_x20==1)
set20=1;
if(r_time%90==0)
if(set20)
evil_x20++;
else
evil_x20--;
gotoxy(evil_x20,evil_y20); //167,157,167
textcolor(2);
cprintf("%c",167);
textcolor(2);
cprintf("%c",4);
textcolor(2);
cprintf("%c",167);
}
}
////////////Evil 21////////////
void evil21()
{
if(damage_evil21<100)
{
if(evil_x21==49)
set21=0;
if(evil_x21==5)
set21=1;
if(r_time%90==0)
if(set21)
evil_x21++;
else
evil_x21--;

gotoxy(evil_x21,evil_y21);  //167,157,167
//printf("%c%c%c",167,157,167);
textcolor(15);
cprintf("%c",167);
textcolor(7);
cprintf("%c",157);
textcolor(15);
cprintf("%c",167);
}
}
////////////Evil 22////////////
void evil22()
{
if(damage_evil22<100)
{
if(evil_x22==53)
set22=0;
if(evil_x22==9)
set22=1;
if(r_time%90==0)
if(set22)
evil_x22++;
else
evil_x22--;
gotoxy(evil_x22,evil_y22);
//printf("%c%c%c",167,157,167);  //i67,157,167
textcolor(15);
cprintf("%c",167);
textcolor(7);
cprintf("%c",157);
textcolor(15);
cprintf("%c",167);
}
}
////////////Evil 23//////////////////
void evil23()
{
if(damage_evil23<100)
{
if(evil_x23==57)
set23=0;
if(evil_x23==13)
set23=1;
if(r_time%90==0)
if(set23)
evil_x23++;
else
evil_x23--;
gotoxy(evil_x23,evil_y23);
//printf("%c%c%c",167,157,167);
textcolor(15);
cprintf("%c",167);
textcolor(7);
cprintf("%c",157);
textcolor(15);
cprintf("%c",167);
}
}
/////////////Evil 24//////////////////
void evil24()
{
if(damage_evil24<100)
{
if(evil_x24==61)
set24=0;
if(evil_x24==17)
set24=1;
if(r_time%90==0)
if(set24)
evil_x24++;
else
evil_x24--;
gotoxy(evil_x24,evil_y24);
//printf("%c%c%c",167,157,167);
textcolor(15);
cprintf("%c",167);
textcolor(7);
cprintf("%c",157);
textcolor(15);
cprintf("%c",167);
}
}
///////////Evil 25///////////////////
void evil25()
{
if(damage_evil25<100)
{
if(evil_x25==65)
set25=0;
if(evil_x25==21)
set25=1;
if(r_time%90==0)
if(set25)
evil_x25++;
else
evil_x25--;
gotoxy(evil_x25,evil_y25);  //167,157,167
textcolor(2);
cprintf("%c",167);
textcolor(2);
cprintf("%c",4);
textcolor(2);
cprintf("%c",167);

}
}
//////////Evil 26////////////////////
void evil26()
{
if(damage_evil26<100)
{
if(evil_x26==51)
set26=0;
if(evil_x26==7)
set26=1;
if(r_time%90==0)
if(set26)
evil_x26++;
else
evil_x26--;
gotoxy(evil_x26,evil_y26);
//printf("%c%c%c",248,157,248);
textcolor(4);
cprintf("%c",248);
cprintf("%c",157);
cprintf("%c",248);
}
}
//////////Evil 27////////////////////
void evil27()
{
if(damage_evil27<100)
{
if(evil_x27==55)
set27=0;
if(evil_x27==11)
set27=1;
if(r_time%90==0)
if(set27)
evil_x27++;
else
evil_x27--;
gotoxy(evil_x27,evil_y27);
//printf("%c%c%c",248,157,248);
textcolor(4);
cprintf("%c",248);
cprintf("%c",157);
cprintf("%c",248);
}
}
/////////Evil 28////////////////
void evil28()
{
if(damage_evil28<100)
{
if(evil_x28==59)
set28=0;
if(evil_x28==15)
set28=1;

if(r_time%90==0)
if(set28)
evil_x28++;
else
evil_x28--;
gotoxy(evil_x28,evil_y28);
//printf("%c%c%c",248,157,248);
textcolor(4);
cprintf("%c",248);
cprintf("%c",157);
cprintf("%c",248);
}
}
//////////////////////////////
void evil29()
{
if(damage_evil29<100)
{
if(evil_x29==47)
set29=0;
if(evil_x29==3)
set29=1;
if(r_time%90==0)
if(set29)
evil_x29++;
else
evil_x29--;
gotoxy(evil_x29,evil_y29);
//printf("%c%c%c",167,157,167);
textcolor(4);
cprintf("%c",167);
cprintf("%c",5);
cprintf("%c",167);
}
}
////////////////////////////////
void evil30()
{
if(damage_evil30<100)
{
if(evil_x30==63)
set30=0;
if(evil_x30==19)
set30=1;

if(r_time%90==0)
if(set30)
evil_x30++;
else
evil_x30--;
gotoxy(evil_x30,evil_y30);
//printf("%c%c%c",167,157,167);
textcolor(4);
cprintf("%c",167);
cprintf("%c",5);
cprintf("%c",167);
}
}
////////////////////////////////
void evil31()
{
if(damage_evil31<1000)
{
if(evil_x31==11)
set31=1;
if(evil_x31==55)
set31=0;
if(r_time%90==0)
if(set31)
evil_x31++;
else
evil_x31--;
gotoxy(evil_x31,evil_y31);
//printf("%c%c%c",248,157,248);   //248,257,248
textcolor(10);
cprintf("%c",248);
textcolor(2);
cprintf("%c",257);
textcolor(10);
cprintf("%c",248);
textcolor(15);
}
}
///////////Check...///////////////
void check_level1()
{

if((evil_x==fire_x) || ((evil_x+1)==fire_x) || ((evil_x+2)==fire_x ) )
{
   damage_evil1++;
   if(damage_evil1==100)
   {
   sound(200);
   delay(50);
   nosound();
   life_evil1=0;
   evil_y=0;
   evil_x=-10;
   }
   score++;
}
if((evil_x2==fire_x) || ((evil_x2+1)==fire_x) || ((evil_x2+2)==fire_x ) )
{
   damage_evil2++;
      if(damage_evil2==100)
   {
   sound(200);
   delay(50);
   nosound();
   life_evil2=0;
   evil_y2=0;
   evil_x2=-10;
   }
   score++;
}

if((evil_x3==fire_x) || ((evil_x3+1)==fire_x) || ((evil_x3+2)==fire_x ) )
{
   damage_evil3++;
      if(damage_evil3==100)
   {
   sound(200);
   delay(50);
   nosound();
   life_evil3=0;
   evil_y3=0;
   evil_x3=-10;
   }
   score++;
}

if((evil_x4==fire_x) || ((evil_x4+1)==fire_x) || ((evil_x4+2)==fire_x ) )
{
   damage_evil4++;
      if(damage_evil4==100)
   {
   sound(200);
   delay(50);
   nosound();
   life_evil4=0;
   evil_y4=0;
   evil_x4=-10;
   }
   score++;
}

if((evil_x5==fire_x) || ((evil_x5+1)==fire_x) || ((evil_x5+2)==fire_x ) )
{
   damage_evil5++;
      if(damage_evil5==100)
   {
   sound(200);
   delay(50);
   nosound();
   life_evil5=0;
   evil_y5=0;
   evil_x5=-10;
   }
   score++;
}

if((evil_x6==fire_x) || ((evil_x6+1)==fire_x) || ((evil_x6+2)==fire_x ) )
{
   damage_evil6++;
      if(damage_evil6==100)
   {
   sound(200);
   delay(50);
   nosound();
   life_evil6=0;
   evil_y6=0;
   evil_x6=-10;
   }
   score++;
}

if((evil_x7==fire_x) || ((evil_x7+1)==fire_x) || ((evil_x7+2)==fire_x ) )
{  damage_evil7++;
   if(damage_evil7==100)
   {
   sound(200);
   delay(50);
   nosound();
   life_evil7=0;
   evil_y7=0;
   evil_x7=-10;
   }
   score++;
}

}  //void evil()
//////////////////////

void check_level2()
{

if((evil_x8==fire_x2) || ((evil_x8+1)==fire_x2) || ((evil_x8+2)==fire_x2 ) )
{
   damage_evil8++;
   if(damage_evil8==100)
   {
   sound(200);
   delay(40);
   nosound();
   life_evil8=0;
   evil_y8=0;
   evil_x8=-10;
   }
   score++;
}

if((evil_x9==fire_x2) || ((evil_x9+1)==fire_x2) || ((evil_x9+2)==fire_x2 ) )
{
   damage_evil9++;
   if(damage_evil9==100)
   {
   sound(200);
   delay(40);
   nosound();
   life_evil9=0;
   evil_y9=0;
   evil_x9=-10;
   }
   score++;
}

if((evil_x10==fire_x2) || ((evil_x10+1)==fire_x2) || ((evil_x10+2)==fire_x2 ) )
{
   damage_evil10++;
   if(damage_evil10==100)
   {
   sound(200);
   delay(40);
   nosound();
   life_evil10=0;
   evil_y10=0;
   evil_x10=-10;
   }
   score++;
}
if((evil_x11==fire_x2) || ((evil_x11+1)==fire_x2) || ((evil_x11+2)==fire_x2 ) )
{
   damage_evil11++;
   if(damage_evil11==100)
   {
   sound(200);
   delay(40);
   nosound();
   life_evil11=0;
   evil_y11=0;
   evil_x11=-10;
   }
   score++;
}
if((evil_x12==fire_x2) || ((evil_x12+1)==fire_x2) || ((evil_x12+2)==fire_x2 ) )
{
   damage_evil12++;
   if(damage_evil12==100)
   {
   sound(200);
   delay(40);
   nosound();
   life_evil12=0;
   evil_y12=0;
   evil_x12=-10;
   }
   score++;
}

if((evil_x13==fire_x2) || ((evil_x13+1)==fire_x2) || ((evil_x13+2)==fire_x2 ) )
{
   damage_evil13++;
   if(damage_evil13==100)
   {
   sound(200);
   delay(40);
   nosound();
   life_evil13=0;
   evil_y13=0;
   evil_x13=-10;
   }
   score++;
}

if((evil_x14==fire_x2) || ((evil_x14+1)==fire_x2) || ((evil_x14+2)==fire_x2 ) )
{
   damage_evil14++;
   if(damage_evil14==100)
   {
   sound(200);
   delay(40);
   nosound();
   life_evil14=0;
   evil_y14=0;
   evil_x14=-10;
   }
   score++;
}

if((evil_x15==fire_x2) || ((evil_x15+1)==fire_x2) || ((evil_x15+2)==fire_x2 ) )
{
   damage_evil15++;
   if(damage_evil15==100)
   {
   sound(200);
   delay(40);
   nosound();
   life_evil15=0;
   evil_y15=0;
   evil_x15=-10;
   }
   score++;
}

if((evil_x16==fire_x2) || ((evil_x16+1)==fire_x2) || ((evil_x16+2)==fire_x2 ) )
{
   damage_evil16++;
   if(damage_evil16==100)
   {
   sound(200);
   delay(40);
   nosound();
   life_evil16=0;
   evil_y16=0;
   evil_x16=-10;
   }
   score++;
}


if((evil_x17==fire_x2) || ((evil_x17+1)==fire_x2) || ((evil_x17+2)==fire_x2 ) )
{
   damage_evil17++;
   if(damage_evil17==100)
   {
   sound(200);
   delay(40);
   nosound();
   life_evil17=0;
   evil_y17=0;
   evil_x17=-10;
   }
   score++;
}


if((evil_x18==fire_x2) || ((evil_x18+1)==fire_x2) || ((evil_x18+2)==fire_x2 ) )
{
   damage_evil18++;
   if(damage_evil18==100)
   {
   sound(200);
   delay(40);
   nosound();
   life_evil18=0;
   evil_y18=0;
   evil_x18=-10;
   }
   score++;
}


if((evil_x19==fire_x2) || ((evil_x19+1)==fire_x2) || ((evil_x19+2)==fire_x2 ) )
{
   damage_evil19++;
   if(damage_evil19==1000)
   {
   sound(200);
   delay(40);
   nosound();
   life_evil19=0;
   evil_y19=0;
   evil_x19=-10;
   }
   score++;
}
}
///////////////////////
void check_level3()
{

if((evil_x20==fire_x3) || ((evil_x20+1)==fire_x3) || ((evil_x20+2)==fire_x3 ) )
{
   damage_evil20++;
   if(damage_evil20==100)
   {
   sound(200);
   delay(40);
   nosound();
   life_evil20=0;
   evil_y20=0;
   evil_x20=-10;
   }
   score++;
}

if((evil_x21==fire_x3) || ((evil_x21+1)==fire_x3) || ((evil_x21+2)==fire_x3 ) )
{
   damage_evil21++;
   if(damage_evil21==100)
   {
   sound(200);
   delay(40);
   nosound();
   life_evil21=0;
   evil_y21=0;
   evil_x21=-10;
   }
   score++;
}

if((evil_x22==fire_x3) || ((evil_x22+1)==fire_x3) || ((evil_x22+2)==fire_x3 ) )
{
   damage_evil22++;
   if(damage_evil22==100)
   {
   sound(200);
   delay(40);
   nosound();
   life_evil22=0;
   evil_y22=0;
   evil_x22=-10;
   }
   score++;
}
if((evil_x23==fire_x3) || ((evil_x23+1)==fire_x3) || ((evil_x23+2)==fire_x3 ) )
{
   damage_evil23++;
   if(damage_evil23==100)
   {
   sound(200);
   delay(40);
   nosound();
   life_evil23=0;
   evil_y23=0;
   evil_x23=-10;
   }
   score++;
}
if((evil_x24==fire_x3) || ((evil_x24+1)==fire_x3) || ((evil_x24+2)==fire_x3 ) )
{
   damage_evil24++;
   if(damage_evil24==100)
   {
   sound(200);
   delay(40);
   nosound();
   life_evil24=0;
   evil_y24=0;
   evil_x24=-10;
   }
   score++;
}

if((evil_x25==fire_x3) || ((evil_x25+1)==fire_x3) || ((evil_x25+2)==fire_x3 ) )
{
   damage_evil25++;
   if(damage_evil25==100)
   {
   sound(200);
   delay(40);
   nosound();
   life_evil25=0;
   evil_y25=0;
   evil_x25=-10;
   }
   score++;
}

if((evil_x26==fire_x3) || ((evil_x26+1)==fire_x3) || ((evil_x26+2)==fire_x3 ) )
{
   damage_evil26++;
   if(damage_evil26==100)
   {
   sound(200);
   delay(40);
   nosound();
   life_evil26=0;
   evil_y26=0;
   evil_x26=-10;
   }
   score++;
}

if((evil_x27==fire_x3) || ((evil_x27+1)==fire_x3) || ((evil_x27+2)==fire_x3 ) )
{
   damage_evil27++;
   if(damage_evil27==100)
   {
   sound(200);
   delay(40);
   nosound();
   life_evil27=0;
   evil_y27=0;
   evil_x27=-10;
   }
   score++;
}

if((evil_x28==fire_x3) || ((evil_x28+1)==fire_x3) || ((evil_x28+2)==fire_x3 ) )
{
   damage_evil28++;
   if(damage_evil28==100)
   {
   sound(200);
   delay(40);
   nosound();
   life_evil28=0;
   evil_y28=0;
   evil_x28=-10;
   }
   score++;
}


if((evil_x29==fire_x3) || ((evil_x29+1)==fire_x3) || ((evil_x29+2)==fire_x3 ) )
{
   damage_evil29++;
   if(damage_evil29==100)
   {
   sound(200);
   delay(40);
   nosound();
   life_evil29=0;
   evil_y29=0;
   evil_x29=-10;
   }
   score++;
}


if((evil_x30==fire_x3) || ((evil_x30+1)==fire_x3) || ((evil_x30+2)==fire_x3 ) )
{
   damage_evil30++;
   if(damage_evil30==100)
   {
   sound(200);
   delay(40);
   nosound();
   life_evil30=0;
   evil_y30=0;
   evil_x30=-10;
   }
   score++;
}


if((evil_x31==fire_x3) || ((evil_x31+1)==fire_x3) || ((evil_x31+2)==fire_x3 ) )
{
   damage_evil31++;
   if(damage_evil31==1000)
   {
   sound(200);
   delay(40);
   nosound();
   life_evil31=0;
   evil_y31=0;
   evil_x31=-10;
   }
   score++;
}

}