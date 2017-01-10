//Calender 1990 to 2070
#include<stdio.h>
#include<conio.h>
#define G 5000
#define F for(k=1;k<=G;k++)\
	  { if(i==7*k-6)\
	    printf("Monday");\
	    if(i==7*k-5)\
	    printf("Tuesday");\
	    if(i==7*k-4)\
	    printf("Wednesday");\
	    if(i==7*k-3)\
	    printf("Thursday");\
	    if(i==7*k-2)\
	    printf("Friday");\
	    if(i==7*k-1)\
	    printf("Saturday");\
	    if(i==7*k)\
	    printf("Sunday");\
	  }
void main()
{   clrscr();
    int d,m,y,i,k,j,z,f=0,a,g=0;
    printf("Enter date=");
    scanf("%d",&d);
    printf("Enter month=");
    scanf("%d",&m);
    printf("Enter year=");
    scanf("%d",&y);
    for(j=0;j<=90;j++)
    { if(y==1990+j)
      { z=j*365;
	if(m==2&&d==29)
	g=1;
	if(m==1)
	a=0;
	if(m==2)
	a=31;
	if(m==3)
	a=59;
	if(m==4)
	a=89;
	if(m==5)
	a=120;
	if(m==6)
	a=151;
	if(m==7)
	a=181;
	if(m==8)
	a=212;
	if(m==9)
	a=242;
	if(m==10)
	a=273;
	if(m==11)
	a=303;
	if(m==12)
	a=334;
	i=d+z+a;
	if(i>=1&&i<=789)
	f=0;
	if(i>=790&&i<=2249)
	f=1;
	if(i>=2250&&i<=3709)
	f=2;
	if(i>=3710&&i<=5169)
	f=3;
	if(i>=5170&&i<=6629)
	f=4;
	if(i>=6630&&i<=8089)
	f=5;
	if(i>=8090&&i<=9549)
	f=6;
	if(i>=9550&&i<=11009)
	f=7;
	if(i>=11010&&i<=12469)
	f=8;
	if(i>=12470&&i<=13929)
	f=9;
	if(i>=13930&&i<=15389)
	f=10;
	if(i>=15390&&i<=16849)
	f=11;
	if(i>=16850&&i<=18309)
	f=12;
	if(i>=18310&&i<=19769)
	f=13;
	if(i>=19770&&i<=21229)
	f=14;
	if(i>=21230&&i<=22689)
	f=15;
	if(i>=22670&&i<=24149)
	f=16;
	if(i>=24150&&i<=25609)
	f=17;
	if(i>=25610&&i<=27069)
	f=18;
	if(i>=27070&&i<=28529)
	f=19;
	if(i>=28530&&i<=29989)
	f=20;
	if(i>=29990&&i<=31449)
	f=21;
	if(i>=31450&&i<=32909)
	f=22;
	if(i>=32910&&i<=34369)
	f=23;
	{ if(m==1)
	  { for(i=1+z+f;i<=31+z+f;i++)
	    { if(d+z+f==i)
	      {  F;
	      }
	    }
	  }
	  if(m==2)
	  { for(i=32+z+f;i<=59+z+f;i++)
	    { if(d+31+z+f-g==i)
	      { F;
	      }
	    }
	  }
	  if(m==3)
	  { for(i=60+z+f;i<=90+z+f;i++)
	    { if(d+59+z+f==i)
	      { F;
	      }
	    }
	  }
	  if(m==4)
	  { for(i=91+z+f;i<=120+z+f;i++)
	    { if(d+90+z+f==i)
	      { F;
	      }
	    }
	  }
	  if(m==5)
	  { for(i=121+z+f;i<=151+z+f;i++)
	    { if(d+120+z+f==i)
	      { F;
	      }
	    }
	  }
	  if(m==6)
	  { for(i=152+z+f;i<=181+z+f;i++)
	    { if(d+151+z+f==i)
	      { F;
	      }
	    }
	  }
	  if(m==7)
	  { for(i=182+z+f;i<=212+z+f;i++)
	    { if(d+181+z+f==i)
	      { F;
	      }
	    }
	  }
	  if(m==8)
	  { for(i=213+z+f;i<=243+z+f;i++)
	    { if(d+212+z+f==i)
	      { F;
	      }
	    }
	  }
	  if(m==9)
	  { for(i=244+z+f;i<=273+z+f;i++)
	    { if(d+243+z+f==i)
	      { F;
	      }
	    }
	  }
	  if(m==10)
	  { for(i=274+z+f;i<=304+z+f;i++)
	    { if(d+273+z+f==i)
	      { F;
	      }
	    }
	  }
	  if(m==11)
	  { for(i=305+z+f;i<=334+z+f;i++)
	    { if(d+304+z+f==i)
	      { F;
	      }
	    }
	  }
	  if(m==12)
	  { for(i=335+z+f;i<=365+z+f;i++)
	    { if(d+334+z+f==i)
	      { F;
	      }
	    }
	  }
	}
      }
    }
    getch();
}