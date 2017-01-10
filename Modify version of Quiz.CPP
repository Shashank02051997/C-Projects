//Modify version of Quiz
#include<iostream.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
class A
{	int i,j,i1,j1,a[4],b[10],e,e1,r,r1,n,p;
	char ch,c,v;
	public:
	A()
	{ c='a';
	  i=0;
	  i1=0;
	  e=0;
	  e1=0;
	  n=0;
	  p=0;
	}
	void B()
	{ i=0;
	  while(i<4)
	  { e=0;
	    r=rand()%4;
	    for(j=0;j<i;j++)
	    { if(a[j]==r)
	      { i--;
		e=1;
	      }
	    }
	    if(e==0)
	    a[i]=r;
	    i++;
	  }
	}
	void C()
	{ cout<<"\n\nEnter choice: ";
	  cin>>ch;
	  if(ch=='a')
	  { if(a[0]==0)
	    { cout<<"Correct input";
	      p++;
	    }
	    else
	    { cout<<"Wrong input";
	      n++;
	    }
	  }
	  else if(ch=='b')
	  { if(a[1]==0)
	    { cout<<"Correct input";
	      p++;
	    }
	    else
	    { cout<<"Wrong input";
	      n++;
	    }
	  }
	  else if(ch=='c')
	  { if(a[2]==0)
	    { cout<<"Correct input";
	      p++;
	    }
	    else
	    { cout<<"Wrong input";
	      n++;
	    }
	  }
	  else if(ch=='d')
	  { if(a[3]==0)
	    { cout<<"Correct input";
	      p++;
	    }
	    else
	    { cout<<"Wrong input";
	      n++;
	    }
	  }
	  else
	  { cout<<"Wrong input";
	    n++;
	  }
	  getch();
	  c='a';
	}
	void D()
	{ while(i1<10)
	  { e1=0;
	    r1=rand()%10;
	    for(j1=0;j1<i1;j1++)
	    { if(b[j1]==r1)
	      { i1--;
		e1=1;
	      }
	    }
	    if(e1==0)
	    b[i1]=r1;
	    i1++;
	  }
	  for(i1=0;i1<10;i1++)
	  { if(b[i1]==0)
	    { clrscr();
	      F();
	      cout<<"Q. How many days in a week?\n";
	      B();
	      for(i=0;i<4;i++)
	      { if(a[i]==0)
		cout<<c<<") 7  ";
		if(a[i]==1)
		cout<<c<<") 5  ";
		if(a[i]==2)
		cout<<c<<") 6  ";
		if(a[i]==3)
		cout<<c<<") 8  ";
		c++;
	      }
	      C();
	    }
	    else if(b[i1]==1)
	    { clrscr();
	      F();
	      cout<<"Q. How many days in a year?\n";
	      B();
	      for(i=0;i<4;i++)
	      { if(a[i]==0)
		cout<<c<<") 365  ";
		if(a[i]==1)
		cout<<c<<") 355  ";
		if(a[i]==2)
		cout<<c<<") 366  ";
		if(a[i]==3)
		cout<<c<<") 367  ";
		c++;
	      }
	      C();
	    }
	    else if(b[i1]==2)
	    { clrscr();
	      F();
	      cout<<"Q. How many days in a January?\n";
	      B();
	      for(i=0;i<4;i++)
	      { if(a[i]==0)
		cout<<c<<") 31  ";
		if(a[i]==1)
		cout<<c<<") 32  ";
		if(a[i]==2)
		cout<<c<<") 30  ";
		if(a[i]==3)
		cout<<c<<") 29  ";
		c++;
	      }
	      C();
	    }
	    else if(b[i1]==3)
	    { clrscr();
	      F();
	      cout<<"Q. How many days in a Febuary?\n";
	      B();
	      for(i=0;i<4;i++)
	      { if(a[i]==0)
		cout<<c<<") 28  ";
		if(a[i]==1)
		cout<<c<<") 29  ";
		if(a[i]==2)
		cout<<c<<") 30  ";
		if(a[i]==3)
		cout<<c<<") 31  ";
		c++;
	      }
	      C();
	    }
	    else if(b[i1]==4)
	    { clrscr();
	      F();
	      cout<<"Q. How many days in a March?\n";
	      B();
	      for(i=0;i<4;i++)
	      { if(a[i]==0)
		cout<<c<<") 31  ";
		if(a[i]==1)
		cout<<c<<") 30  ";
		if(a[i]==2)
		cout<<c<<") 29  ";
		if(a[i]==3)
		cout<<c<<") 32  ";
		c++;
	      }
	      C();
	    }
	    else if(b[i1]==5)
	    { clrscr();
	      F();
	      cout<<"Q. How many days in a April?\n";
	      B();
	      for(i=0;i<4;i++)
	      { if(a[i]==0)
		cout<<c<<") 30  ";
		if(a[i]==1)
		cout<<c<<") 31  ";
		if(a[i]==2)
		cout<<c<<") 29  ";
		if(a[i]==3)
		cout<<c<<") 28  ";
		c++;
	      }
	      C();
	    }
	    else if(b[i1]==6)
	    { clrscr();
	      F();
	      cout<<"Q. How many days in a May?\n";
	      B();
	      for(i=0;i<4;i++)
	      { if(a[i]==0)
		cout<<c<<") 31  ";
		if(a[i]==1)
		cout<<c<<") 28  ";
		if(a[i]==2)
		cout<<c<<") 30  ";
		if(a[i]==3)
		cout<<c<<") 32  ";
		c++;
	      }
	      C();
	    }
	    else if(b[i1]==7)
	    { clrscr();
	      F();
	      cout<<"Q. How many days in a June?\n";
	      B();
	      for(i=0;i<4;i++)
	      { if(a[i]==0)
		cout<<c<<") 30  ";
		if(a[i]==1)
		cout<<c<<") 31  ";
		if(a[i]==2)
		cout<<c<<") 28  ";
		if(a[i]==3)
		cout<<c<<") 32  ";
		c++;
	      }
	      C();
	    }
	    else if(b[i1]==8)
	    { clrscr();
	      F();
	      cout<<"Q. How many days in a July?\n";
	      B();
	      for(i=0;i<4;i++)
	      { if(a[i]==0)
		cout<<c<<") 31  ";
		if(a[i]==1)
		cout<<c<<") 30  ";
		if(a[i]==2)
		cout<<c<<") 29  ";
		if(a[i]==3)
		cout<<c<<") 28  ";
		c++;
	      }
	      C();
	    }
	    else if(b[i1]==9)
	    { clrscr();
	      F();
	      cout<<"Q. How many days in a August?\n";
	      B();
	      for(i=0;i<4;i++)
	      { if(a[i]==0)
		cout<<c<<") 31  ";
		if(a[i]==1)
		cout<<c<<") 30  ";
		if(a[i]==2)
		cout<<c<<") 29  ";
		if(a[i]==3)
		cout<<c<<") 32  ";
		c++;
	      }
	      C();
	    }
	  }
	  clrscr();
	  cout<<"SCORE\n";
	  cout<<"Correct Answer = "<<p<<endl;
	  cout<<"Wrong Answer = "<<n<<endl;
	  getch();
	  cout<<"THANK YOU FOR PLAYING QUIZ\n";
	  cout<<"MADE BY- SHASHANK";
	}
	void E()
	{ cout<<"\t\t\tQUIZ\n\n";
	  cout<<"For start a Quiz Press s and For Qiut a Quiz Press q: ";
	  cin>>v;
	  switch(v)
	  { case 's': D();
		      break;
	    case 'q': cout<<"Quiz Quit";
		      getch();
		      exit(0);
		      break;
	    default : cout<<"Wrong input";
		      getch();
		      clrscr();
		      E();
		      break;
	  }
	}
	void F()
	{ cout<<"\t\t\tQUIZ\n\n";
	  cout<<"For start a Quiz Press s and For Qiut a Quiz Press q: s\n";
	  cout<<"Quiz Starts\n\n";
	}
};
void main()
{	time_t t;
	time(&t);
	srand((unsigned int) t);
	clrscr();
	A obj;
	obj.E();
	getch();
}
