//Calender
#include<stdio.h>
#include<conio.h>
void main()
{	clrscr();
	int m,y,i,j,k,l,y1=0,p,q,r,f,s=0;
	printf("Enter Month=");
	scanf("%d",&m);
	printf("Enter Year=");
	scanf("%d",&y);
	for(l=1990;l<y;l++)
	y1++;
	if(y%4==0)
	s=1;
	if(m==1)
	{ printf("\n\n\t\t January  %d\n",y);
	  q=1+365*y1;
	  r=32+365*y1;
	}
	if(m==2)
	{ printf("\n\n\t\t Febuary  %d\n",y);
	  q=32+365*y1;
	  r=60+365*y1;
	}
	if(m==3)
	{ printf("\n\n\t\t March  %d\n",y);
	  q=60+365*y1;
	  r=91+365*y1;
	}
	if(m==4)
	{ printf("\n\n\t\t April  %d\n",y);
	  q=91+365*y1;
	  r=121+365*y1;
	}
	if(m==5)
	{ printf("\n\n\t\t May  %d\n",y);
	  q=121+365*y1;
	  r=152+365*y1;
	}
	if(m==6)
	{ printf("\n\n\t\t June  %d\n",y);
	  q=152+365*y1;
	  r=182+365*y1;
	}
	if(m==7)
	{ printf("\n\n\t\t July  %d\n",y);
	  q=182+365*y1;
	  r=213+365*y1;
	}
	if(m==8)
	{ printf("\n\n\t\t August  %d\n",y);
	  q=213+365*y1;
	  r=244+365*y1;
	}
	if(m==9)
	{ printf("\n\n\t\t September  %d\n",y);
	  q=244+365*y1;
	  r=274+365*y1;
	}
	if(m==10)
	{ printf("\n\n\t\t October  %d\n",y);
	  q=274+365*y1;
	  r=305+365*y1;
	}
	if(m==11)
	{ printf("\n\n\t\t November  %d\n",y);
	  q=305+365*y1;
	  r=335+365*y1;
	}
	if(m==12)
	{ printf("\n\n\t\t December  %d\n",y);
	  q=335+365*y1;
	  r=366+365*y1;
	}
	if(q>=1&&q<=789)
	f=0;
	if(q>=790&&q<=2249)
	f=1;
	if(q>=2250&&q<=3709)
	f=2;
	if(q>=3710&&q<=5169)
	f=3;
	if(q>=5170&&q<=6629)
	f=4;
	if(q>=6630&&q<=8089)
	f=5;
	if(q>=8090&&q<=9549)
	f=6;
	if(q>=9550&&q<=11009)
	f=7;
	if(q>=11010&&q<=12469)
	f=8;
	if(q>=12470&&q<=13929)
	f=9;
	if(q>=13930&&q<=15389)
	f=10;
	if(q>=15390&&q<=16849)
	f=11;
	if(q>=16850&&q<=18309)
	f=12;
	if(q>=18310&&q<=19769)
	f=13;
	if(q>=19770&&q<=21229)
	f=14;
	if(q>=21230&&q<=22689)
	f=15;
	if(q>=22670&&q<=24149)
	f=16;
	if(q>=24150&&q<=25609)
	f=17;
	if(q>=25610&&q<=27069)
	f=18;
	if(q>=27070&&q<=28529)
	f=19;
	if(q>=28530&&q<=29989)
	f=20;
	if(q>=29990&&q<=31449)
	f=21;
	if(q>=31450&&q<=32909)
	f=22;
	if(q>=32910&&q<=34369)
	f=23;
	q=q+f;
	r=r+f;
	if(q%7-1==0)
	p=q;
	if(q%7-2==0)
	p=q-1;
	if(q%7-3==0)
	p=q-2;
	if(q%7-4==0)
	p=q-3;
	if(q%7-5==0)
	p=q-4;
	if(q%7-6==0)
	p=q-5;
	if(q%7==0)
	p=q-6;
	printf("\nMon     Tue     Wed     Thru    Fri     Sat     Sun\n");
	for(i=1;i<=6;i++)
	{ for(j=1;j<=7;j++)
	  { if(m==1)
	    { if(0<p&&p<q)
	      printf(" \t");
	      if(q<=p&&p<r)
	      printf("%d\t",p-q+1);
	    }
	    if(m==2)
	    { if(0<p&&p<q)
	      printf(" \t");
	      if(q<=p&&p<r+s)
	      printf("%d\t",p-q+1);
	    }
	    if(m==3)
	    { if(0<p&&p<q)
	      printf(" \t");
	      if(q<=p&&p<r)
	      printf("%d\t",p-q+1);
	    }
	    if(m==4)
	    { if(0<p&&p<q)
	      printf(" \t");
	      if(q<=p&&p<r)
	      printf("%d\t",p-q+1);
	    }
	    if(m==5)
	    { if(0<p&&p<q)
	      printf(" \t");
	      if(q<=p&&p<r)
	      printf("%d\t",p-q+1);
	    }
	    if(m==6)
	    { if(0<p&&p<q)
	      printf(" \t");
	      if(q<=p&&p<r)
	      printf("%d\t",p-q+1);
	    }
	    if(m==7)
	    { if(0<p&&p<q)
	      printf(" \t");
	      if(q<=p&&p<r)
	      printf("%d\t",p-q+1);
	    }
	    if(m==8)
	    { if(0<p&&p<q)
	      printf(" \t");
	      if(q<=p&&p<r)
	      printf("%d\t",p-q+1);
	    }
	    if(m==9)
	    { if(0<p&&p<q)
	      printf(" \t");
	      if(q<=p&&p<r)
	      printf("%d\t",p-q+1);
	    }
	    if(m==10)
	    { if(0<p&&p<q)
	      printf(" \t");
	      if(q<=p&&p<r)
	      printf("%d\t",p-q+1);
	    }
	    if(m==11)
	    { if(0<p&&p<q)
	      printf(" \t");
	      if(q<=p&&p<r)
	      printf("%d\t",p-q+1);
	    }
	    if(m==12)
	    { if(0<p&&p<q)
	      printf(" \t");
	      if(q<=p&&p<r)
	      printf("%d\t",p-q+1);
	    }
	    p++;
	  }
	  printf("\n");
	}
	getch();
}