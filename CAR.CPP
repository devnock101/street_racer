#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<process.h>
#include<stdlib.h>

struct player
{
 int level;
 int life;
 int score;
	};
void new_game();
void race(player any1);
void mycar(int x7, int y7)
 {rectangle(x7+1,y7,x7+49,y7+100);
  setfillstyle(XHATCH_FILL,11);
  floodfill((x7+20),(y7+12),15);
  floodfill((x7+20),(y7+87),15);
  rectangle(x7+1,y7+25,x7+49,y7+75);
  setfillstyle(SOLID_FILL,4);
  floodfill((x7+20),(y7+50),15);
  setcolor( 15 );
  settextstyle( 2, 0 , 4 );
  outtextxy((x7+8),(y7+40),"STREET");
  outtextxy((x7+9),(y7+55),"RACER");
  }

void makecar(int x8, int y8)
 {
  rectangle(x8+1,y8,x8+49,y8+100);
  /*setfillstyle(SOLID_FILL,15);
  floodfill((x8+20),(y8+12),15);*/
  rectangle(x8+1,y8+25,x8+49,y8+75);
 /* setfillstyle(SOLID_FILL,15);
  floodfill((x8+20),(y8+50),15);
  floodfill((x8+20),(y8+87),15);*/
  };

void clear(int x9,int y9)
 { setcolor(DARKGRAY);
 rectangle(x9+1,y9,x9+49,y9+100);
 setfillstyle(SOLID_FILL,8);
 floodfill((x9+25),(y9+50),8);
 setcolor(15);
 };

void logo ()
{
    for ( int i = 1;i < 250;i++ )
    {
	int p;
	setcolor( 7 );
	setfillstyle( SOLID_FILL, RED );
	settextstyle( 3, 0 , 5 );
	outtextxy( 173, 100, "STREET RACER" );
	setcolor( 4 );
	bar3d( 50, 300, 550, 320, 10, 40 );
	setcolor( 15 );
	settextstyle( 2, 0 , 5 );
	outtextxy( 290, 380, "LOADING..." );
	setfillstyle( SOLID_FILL, 2 );
	bar( 190, 400, 190 + i, 420 );
	rectangle( 190, 400, 440, 420 );
	}
    delay( 1000 );
    cleardevice();
    return ;
}

void next(player bca)
{
      cleardevice();
      setcolor( 15 );
      settextstyle( 3, 0 , 5 );
      outtextxy(260,230, "NEXT LEVEL");
      delay(1200);
      cleardevice();
      getch();
      race(bca);
}

void over()
{
      cleardevice();
      setcolor( 15 );
      settextstyle( 3, 0 , 5 );
      outtextxy(260,230, "GAME OVER");
      delay(1200);
      getch();
      exit(0);
}

void won()
{
      cleardevice();
      setcolor( 4 );
      settextstyle( 3, 0 , 5 );
      outtextxy(220,230, "YOU HAVE WON");
      delay(400);
      cleardevice();
      setcolor( 14 );
      settextstyle( 3, 0 , 5 );
      outtextxy(220,230, "YOU HAVE WON");
      delay(400);
      cleardevice();
      setcolor( 10 );
      settextstyle( 3, 0 , 5 );
      outtextxy(220,230, "YOU HAVE WON");
      delay(400);
      getch();
      exit(0);
}


void crash(player abc)
{
      cleardevice();
      setcolor( 4 );
      settextstyle( 3, 0 , 5 );
      outtextxy(220,230, "CRASH");
      delay(400);
      cleardevice();
      setcolor( 14 );
      settextstyle( 3, 0 , 5 );
      outtextxy(220,230, "CRASH");
      delay(400);
      cleardevice();
      setcolor( 10 );
      settextstyle( 3, 0 , 5 );
      outtextxy(220,230, "CRASH");
      delay(400);
      cleardevice();
      getch();
      race(abc);
}

void about()
{
      cleardevice();
      setcolor( 14 );
      settextstyle( 1, 0, 4 );
      outtextxy( 260, 30, "ABOUT" );
      setfillstyle( 1, 2 );
      bar( 170, 80, 430, 82 );
      settextstyle( 2, 0, 5 );
      setcolor( 15 );
      outtextxy( 40, 130, "I have completed my work as a part of my computer science project work." );
      outtextxy( 40, 155, "I have tried to reduce maximum problems in this program. Eventhough it may " );
      outtextxy( 40, 180, "consist several technical and logical problems." );
      outtextxy( 40, 230, "Press any key to return to menu...." );
      setcolor( 15 );
      settextstyle( 2, 0, 6 );
      outtextxy( 380 , 280 , "- ABHISHEK GUPTA" );
      getch();
      return ;
}

void help()
{
    cleardevice();
    settextstyle( 1, 0, 4 );
    setcolor( 14 );
    outtextxy( 260,30, "HELP" );
    setfillstyle( 1, 2 );
    bar( 170, 80, 430, 82 );
    gotoxy( 3, 6 );
    cout << "\n\n\n\n\n\n\t\tSTREET RACER is a simple game in which you have to \n\n\t\tlead a car by avoiding other car on the road.\n\n\n\t\t\tCONTROLS :\n\n\t\t->LEFT\t--\tLeftside movement\n\n\t\t->RIGHT\t--\tRightside movement\n\n\t\t->Esc\t--\tExit to Menu at any time\n\n\n\n\t\tPress any key to proceed............\n";
    getch();
    return ;
}

void pause(player cont1);

void race(player any)
  {
   int x=300,life=any.life,score=any.score,y=350,ch,bk;
  for(int m=1;m<25;m++)
	setcolor(RED);
	rectangle(249,0,401,getmaxy());
		setfillstyle(SOLID_FILL,8);
			floodfill(325,getmaxy()/2,RED);
  for(int level=any.level;(level<=3)&&(life>0);level++)
  {
	     if(level!=1)
	     {next(any);}
	     if(level==1)
		bk=14;
	     else if(level==2)
		bk=2;
	     else if(level==3)
		bk=12;
	      setfillstyle(INTERLEAVE_FILL,bk);
		floodfill(125,getmaxy()/2,RED);
		floodfill(450,getmaxy()/2,RED);
	      setcolor(11);

  for(int i=0;(i<8)&&(life>0);i++)
   {
	if((level==3)&&(i==8))
	{won();}
  setcolor(RED);
  rectangle(420,160,600,210);
  setfillstyle(SOLID_FILL,0);
  floodfill(510,185,RED);
  gotoxy(55,12);
  cout<<"    Level = "<<level;
  rectangle(420,250,600,300);
  floodfill(510,275,RED);
  gotoxy(55,18);
  cout<<"    Lives = "<<life;
  rectangle(420,350,600,400);
  floodfill(510,375,RED);
  gotoxy(55,24);
  cout<<"    Score = "<<score;
  int accident=0;
  int y1=0,x1=250+((rand()%3)*50);
  int y2=0,x2=250+((rand()%3)*50);
  score += 10;
  while(y1<getmaxy()-1)
	{
		clear(x1,y1);
		clear(x2,y2);
		y1++;
		y2++;
		makecar(x1,y1);
		makecar(x2,y2);
		mycar(x,y);
		delay(5-level);
		if(kbhit())
		{   	mycar(x,y);
			ch=getch();
			switch(ch) {
			case 27:pause(any);
				break;
			case 75:clear(x,y);
				if(x>250)
				x-=50;
				mycar(x,y);
				break;
			case 77:clear(x,y);
				if(x<350)
				x+=50;
				mycar(x,y);
				break;
			}
		}
	if((x==x1)||(x==x2))
	   if( y==(y1+100) ||  y==(y2+100) )
	     {accident=1;break;}
	else if(ch==75)
	   if((y<=(y1+100))||(y<=(y2+100)))
	      if( (x==x1) ||  (x==x2) )
	       {accident=1;break;}
	else if(ch==77)
	   if((y<=(y1+100)) || (y<=(y2+100)))
	      if( (x==x1) ||  (x==x2) )
	     {accident=1;break;}
	     any.level++;
	     any.life=life;
	     any.score=score;
	    }
	  if(accident==1)
	  {
	     life =life-1;any.life-=1;
	     score -= 10;any.score-=10;
	    if(life==0)
	    {
	     over();
	     break;
	     }
	    crash(any);
	  }
       }
  }
 getch();
}


void menu()
{
    int s = 1, t = 0, a, p = 140;
    do
    {
	do
	{
	    cleardevice();
	    setcolor( YELLOW );
	    settextstyle( 1, 0, 4 );
	    outtextxy( 190, 30, "STREET RACER" );
	    setfillstyle( 1, 2 );
	    bar( 170, 80, 430, 82 );
	    settextstyle( 1, 0, 1 );
	    setcolor( 10 );
	    outtextxy( 250, 137, "NEW GAME" );
	    outtextxy( 250, 167, "HELP" );
	    outtextxy( 250, 197, "ABOUT" );
	    outtextxy( 250, 227, "EXIT" );
	    setcolor( RED );
	    rectangle( 230, p, 380, p + 20 );
	    a = getch();
	    switch ( a )
	    {
	    case 72: if ( p > 140 )
		{
		    p -= 30;
		    s--;
		}
		break;
	    case 80: if ( p < 230 )
		{
		    p += 30;
		    s++;
		};
		break;
	    case 13: a = 1;
		break;
	    default: break;
	    }
	}
	while ( a != 1 );
	switch ( s )
	{
	case 1: help();
		new_game();
		break;
	case 2: help();
		 break;
	case 3: about();
		break;
	case 4: exit( 0 );
		 break;
	}
    }
    while ( t == 0 );
    getch();
}

void pause(player cont)
{
    int s = 1, t = 0, a, p = 140;
    do
    {
	do
	{
	    cleardevice();
	    setcolor( 14 );
	    settextstyle( 1, 0, 4 );
	    outtextxy( 226, 30, "PAUSE" );
	    setfillstyle( 1, 2 );
	    bar( 140, 80, 400, 82 );
	    settextstyle( 1, 0, 1 );
	    setcolor( 10 );
	    outtextxy( 220, 137, "CONTINUE" );
	    outtextxy( 220, 167, "NEW GAME" );
	    outtextxy( 220, 197, "HELP" );
	    outtextxy( 220, 227, "ABOUT" );
	    outtextxy( 220, 257, "EXIT" );
	    setcolor( 4 );
	    rectangle( 200, p, 350, p + 20 );
	    a = getch();
	    switch ( a )
	    {
	    case 72: if ( p > 140 )
		{
		    p -= 30;
		    s--;
		}
		break;
	    case 80: if ( p < 260 )
		{
		    p += 30;
		    s++;
		};
		break;
	    case 13: a = 1;
		break;
	    default: break;
	    }
	}
	while ( a != 1 );
	switch ( s )
	{
	case 1: race(cont);
		 break;
	case 2: new_game();
		 break;
	case 3: help();
		 break;
	case 4: about();
		 break;
	case 5: exit( 0 );
		 break;
	}
    }
    while ( t == 0 );
    getch();
}

void new_game()
{ player new1;
  new1.level=1;
  new1.life=3;
  new1.score=0;
  race(new1);
  }

void main()
 {
  int driver,mode;
  driver = DETECT;
  initgraph(&driver,&mode,"\\tc\\bgi");
    logo();
    menu();
   //new_game();
   }