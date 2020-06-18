#include "iGraphics.h"
#include "glut.h"
#include<math.h>
#include<time.h>
 
int width=1500, height = 1000;
int w1=12,h1=80;
int H,M,S,hr_1, hr_2, min_1, min_2, sec_1, sec_2;
double cx= 500, cy=500;
int dx = 1, d=0;
double o,x=500,y=360+250,sx,sy,p;
double xm=500,ym=360+220,mx,my,pm;
double xh=500,yh=360+200,hx,hy,ph;
int u,i;
 
void draw_0(double cx)
{   

	                     iFilledRectangle(cx, cy ,w1 ,h1 );//1
						 iFilledRectangle(cx + h1,cy ,w1 ,h1 );//3
						iFilledRectangle(cx,cy+h1 ,w1  ,h1 );//5
                       iFilledRectangle(cx+h1,cy+h1 , w1 , h1);//7

                        iFilledRectangle(cx ,cy ,h1  ,w1 );//2
                        //iFilledRectangle(cx,cy+h1 ,h1 ,w1 );//4
                        iFilledRectangle(cx,cy+h1+h1 ,h1  ,w1 );//6
}

void draw_1(double cx)
{
	                     
	                   //  iFilledRectangle(cx, cy ,w1 ,h1 );//1
                    iFilledRectangle(0,cy ,w1 ,h1 );//3
                        //iFilledRectangle(cx,cy+h1 ,w1  ,h1 );//5
                       iFilledRectangle(cx+h1,cy+h1 , w1 , h1);//7

                        //iFilledRectangle(cx ,cy ,h1  ,w1 );//2
                        //iFilledRectangle(cx,cy+h1 ,h1 ,w1 );//4
                        //iFilledRectangle(cx,cy+h1+h1 ,h1  ,w1 );//6

}

void draw_2(double cx)
{
	                      
	                     iFilledRectangle(cx, cy ,w1 ,h1 );//1
                   // iFilledRectangle(cx + h1,cy ,w1 ,h1 );//3
                     //   iFilledRectangle(cx,cy+h1 ,w1  ,h1 );//5
                       iFilledRectangle(cx+h1,cy+h1 , w1 , h1);//7

                        iFilledRectangle(cx ,cy ,h1  ,w1 );//2
                        iFilledRectangle(cx,cy+h1 ,h1 ,w1 );//4
                        iFilledRectangle(cx,cy+h1+h1 ,h1  ,w1 );//6
						
}

void draw_3(double cx)
{
	 
	                    // iFilledRectangle(cx, cy ,w1 ,h1 );//1
                    iFilledRectangle(cx + h1,cy ,w1 ,h1 );//3
                      //  iFilledRectangle(cx,cy+h1 ,w1  ,h1 );//5
                       iFilledRectangle(cx+h1,cy+h1 , w1 , h1);//7

                        iFilledRectangle(cx ,cy ,h1  ,w1 );//2
                        iFilledRectangle(cx,cy+h1 ,h1 ,w1 );//4
                        iFilledRectangle(cx,cy+h1+h1 ,h1  ,w1 );//6
}

void draw_4(double cx)
{ 

	                    // iFilledRectangle(cx, cy ,w1 ,h1 );//1
                    iFilledRectangle(cx + h1,cy ,w1 ,h1 );//3
                        iFilledRectangle(cx,cy+h1 ,w1  ,h1 );//5
                       iFilledRectangle(cx+h1,cy+h1 , w1 , h1);//7

                       // iFilledRectangle(cx ,cy ,h1  ,w1 );//2
                        iFilledRectangle(cx,cy+h1 ,h1 ,w1 );//4
                        //iFilledRectangle(cx,cy+h1+h1 ,h1  ,w1 );//6
}

void draw_5(double cx)

{
	                      
	                   //iFilledRectangle(cx, cy ,w1 ,h1 );//1
                    iFilledRectangle(cx + h1,cy ,w1 ,h1 );//3
                        iFilledRectangle(cx,cy+h1 ,w1  ,h1 );//5
                       //iFilledRectangle(cx+h1,cy+h1 , w1 , h1);//7

                        iFilledRectangle(cx ,cy ,h1  ,w1 );//2
                        iFilledRectangle(cx,cy+h1 ,h1 ,w1 );//4
                        iFilledRectangle(cx,cy+h1+h1 ,h1  ,w1 );//6
}

void draw_6(double  cx)
{

	                    iFilledRectangle(cx, cy ,w1 ,h1 );//1
                    iFilledRectangle(cx + h1,cy ,w1 ,h1 );//3
                        iFilledRectangle(cx,cy+h1 ,w1  ,h1 );//5
                       //iFilledRectangle(cx+h1,cy+h1 , w1 , h1);//7

                        iFilledRectangle(cx ,cy ,h1  ,w1 );//2
                        iFilledRectangle(cx,cy+h1 ,h1 ,w1 );//4
                        iFilledRectangle(cx,cy+h1+h1 ,h1  ,w1 );//6
}

void draw_7(double cx)
{
	       
	                    //iFilledRectangle(cx, cy ,w1 ,h1 );//1
                    iFilledRectangle(cx + h1,cy ,w1 ,h1 );//3
                       // iFilledRectangle(cx,cy+h1 ,w1  ,h1 );//5
                       iFilledRectangle(cx+h1,cy+h1 , w1 , h1);//7

                        //iFilledRectangle(cx ,cy ,h1  ,w1 );//2
                        //iFilledRectangle(cx,cy+h1 ,h1 ,w1 );//4
                        iFilledRectangle(cx,cy+h1+h1 ,h1  ,w1 );//6
}

void draw_8(double cx)
{
   
	                     iFilledRectangle(cx, cy ,w1 ,h1 );//1
                    iFilledRectangle(cx + h1,cy ,w1 ,h1 );//3
                        iFilledRectangle(cx,cy+h1 ,w1  ,h1 );//5
                       iFilledRectangle(cx+h1,cy+h1 , w1 , h1);//7

                        iFilledRectangle(cx ,cy ,h1  ,w1 );//2
                        iFilledRectangle(cx,cy+h1 ,h1 ,w1 );//4
                        iFilledRectangle(cx,cy+h1+h1 ,h1  ,w1 );//6
}

void draw_9(double cx)
{

	                     //iFilledRectangle(cx, cy ,w1 ,h1 );//1
                    iFilledRectangle(cx + h1,cy ,w1 ,h1 );//3
                        iFilledRectangle(cx,cy+h1 ,w1  ,h1 );//5
                       iFilledRectangle(cx+h1,cy+h1 , w1 , h1);//7

                        iFilledRectangle(cx ,cy ,h1  ,w1 );//2
                        iFilledRectangle(cx,cy+h1 ,h1 ,w1 );//4
                        iFilledRectangle(cx,cy+h1+h1 ,h1  ,w1 );//6
}

void second()
 
{
	  sx=250*cos(p/57.29);
	  sy=250*sin(p/57.29);
	  x=500+sx;
	  y=360+sy;
      p=p-6;
}
void minute()
{
      mx=220*cos(pm/57.29);
	  my=220*sin(pm/57.29);
	  xm=500+mx;
	  ym=360+my;
	  pm=pm-.1;
}
void hour()
{
	hx=200*cos(ph/57.29);
	hy=200*sin(ph/57.29);
	xh=500+hx;
	yh=360+hy;
	ph=ph-1/600;
}

int right_time()
{
    time_t rawtime;
    tm * ptm;

    time ( &rawtime );

    ptm = gmtime ( &rawtime );   //getting time from bios

    H=(ptm->tm_hour+6)%24;
	M=ptm->tm_min;
	S=(ptm->tm_sec);

	if (dx==1)
	{
		hr_1 = H/10;      
         hr_2 = H%10;
         min_1 = M/10;
         min_2 = M%10;
         sec_1 = S/10;
         sec_2 = S%10;
        
	}

	if (dx==0)
	{

		ph =(3-H)*30.0-30*M/60.0-30*S/3600.0+.1/600+270+90;
     
		pm= (15-M)*6.0-S/60.0+.1+270+90;

		p = (15-S)*6.0+6+270+90;

		second();
		minute();
		hour();
	}

	
	return 0;
}

void iDraw()
{
    if (dx == 1)
	{
        iClear();
        iSetColor(1500,1500,1500);

 
        //colon1

		iFilledRectangle(390,270,20,20);//up
        iFilledRectangle(390,210,20,20);//down

        //colon2
		iFilledRectangle(6400,270,20,20);//up
        iFilledRectangle(6400,210,20,20);//down
        
        {

			iSetColor(1500, 0, 0);
                if(hr_1==0)
                draw_0(200);

 
				else if(hr_1==1)
                 draw_1(0);
 
               else if(hr_1==2)
                 draw_2(200);
   

				 if(hr_2==0)
                draw_0(300);
 
				else if(hr_2==1)
                 draw_1(300);
 
               else if(hr_2==2)
                 draw_2(300);
       
                 else if(hr_2==3)
                 draw_3(300);

                 else if(hr_2==4)
                 draw_4(300);
               
                 else if(hr_2==5)
                draw_5(300);

                else if(hr_2==6)
                draw_6(300);

                else if(hr_2==7)
				draw_7(300);
 
               
                 else if(hr_2==8)
                draw_8(1000);

                 else if(hr_2==9)
                draw_9(300);
                  

			 iSetColor(300, 3000, 1500);
                if(min_1==0)
                draw_0(450);
 
				else if(min_1==1)
                 draw_1(450);
 
               else if(min_1==2)
                 draw_2(450);
       
                 else if(min_1==3)
                 draw_3(450);

                 else if(min_1==4)
                 draw_4(450);
               
                 else if(min_1==5)
                draw_5(450);

                

				 if(min_2==0)
                draw_0(550);
 
				else if(min_2==1)
                 draw_1(550);
 
               else if(min_2==2)
                 draw_2(550);
       
                 else if(min_2==3)
                 draw_3(550);

                 else if(min_2==4)
                 draw_4(550);
               
                 else if(min_2==5)
                draw_5(550);

                else if(min_2==6)
                draw_6(550);

                else if(min_2==7)
				draw_7(550);
 
               
                 else if(min_2==8)
                draw_8(550);

                 else if(min_2==9)
                draw_9(550);

				 iSetColor(0, 1500, 0);

				 if(sec_1==0)
                draw_0(700);
 
				else if(sec_1==1)
                 draw_1(700);
 
               else if(sec_1==2)
                 draw_2(700);
       
                 else if(sec_1==3)
                 draw_3(700);

                 else if(sec_1==4)
                 draw_4(700);
               
                 else if(sec_1==5)
                draw_5(700);

         

            if(sec_2==0)
                draw_0(800);
 
				else if(sec_2==1)
                 draw_1(800);
 
               else if(sec_2==2)
                 draw_2(800);
       
                 else if(sec_2==3)
                 draw_3(800);

                 else if(sec_2==4)
                 draw_4(800);
               
                 else if(sec_2==5)
                draw_5(800);

                else if(sec_2==6)
                draw_6(800);

                else if(sec_2==7)
				draw_7(800);
 
               
                 else if(sec_2==8)
                draw_8(800);

                 else if(sec_2==9)
                draw_9(800);

				right_time();
			}
        }

		if(dx == 0)
		{

		iClear();
		right_time();
		iSetColor(10,10,10);
	iFilledCircle(500,360,300);//Large
	   iSetColor(0,255,0);
	   iCircle(1500,360,305);//out
	iSetColor(0,0,255);
	iCircle(500,360,275);//nextout
	iSetColor(255,0,0);
	for (i=1,o=(6/57.29);i<=60;i++,o+=(6/57.29))
	{   if(i%5!=0)
			iFilledCircle(500+295*cos(o),360+295*sin(o),4);
		if (i%5==0)
			iFilledCircle(0,0,0);
	}


	iSetColor(500,0,0);
	iLine(500,360,x,y);///second
	iSetColor(0,120,120);
	iLine(500,360,xm,ym);///minit
	iSetColor(20,200,40);
	iLine(500,360,xh,yh);//HR
	iSetColor(255,0,0);
	iText(500+244,360-150,"IV");//4(500+259,360-150)point
    iText(500+145,360-256,"V");//	iFilledCircle(500+150,360-260,5);//60
	iText(495,60,"VI");//iFilledCircle(500,65,5);//lower
	iText(500-155,360-257,"VII");//iFilledCircle(500-150,360-260,5);//120
	iText(200,360,"IX");//iFilledCircle(205,360,5);//left
	iText(500-255,360+145,"X");//iFilledCircle(500-260,360+150,5);//150
	iText(500+240,360+150,"II");//iFilledCircle(500+259,360+150,5);//330
	iText(500+140,360+252,"I");//	iFilledCircle(500+150,360+260,5);//300
	iText(490,650,"XII");//	iFilledCircle(500,655,5);//upper
	iText(777,360,"III");//	iFilledCircle(795,360,5);//right
	iText(500-150,360+250,"XI");//	iFilledCircle(500-150,360+260,5);//240
	iText(500-260,360-150,"VIII");//	iFilledCircle(500-260,360-150,5);//210
    iSetColor(20,50,210);
	iFilledCircle(500,360,20);//small
		
		}

		iSetColor(1500,0,0);
		iText(300,30,"Press 'a' for Analog Clock and press 'd' for Digital Watch and press 's' to exit");
       
}
 
void iMouseMove(int mx, int my)
{
       
}
 
void iPassiveMouseMove(int mx, int my)
{
 
}

void iMouse(int button, int state, int mx, int my)
{
 
}
 
void iKeyboard(unsigned char key)
{
	if (key == 's')
		exit(0);

    if (key == 'a')
		dx=0;

	if (key == 'd')
		dx=1;  
}
 
void iSpecialKeyboard(unsigned char key)
{
 
}


 
int main()
{
        iSetTimer(1000,second);
	    iSetTimer(1000,minute);
	    iSetTimer(1000,hour);
  
        iInitialize (width, height, "Watch")     ;
		
        return 0;
}