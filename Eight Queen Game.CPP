//Eight Queen Game
#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
class A
{	int i,j,a[10][10],n,p,q,r,c,e;
	public:
	A()
	{ n=1;
	  e=0;
	}
	void B()
	{ for(i=0;i<10;i++)
	  { for(j=0;j<10;j++)
	    a[i][j]=0;
	  }
	}
	void D()
	{ e=0;
	  clrscr();
	  cout<<"\t\tEIGHT QUEEN\n";
	  cout<<"\t\t~~~~~~~~~~~~\n\n\n";
	  for(i=0;i<9;i++)
	  { for(j=0;j<9;j++)
	    { if(a[i][j]==0)
	      cout<<"|_"<<" _";
	      else
	      { cout<<"|_"<<a[i][j]<<"_";
		e++;
	      }
	    }
	    cout<<endl;
	  }
	  if(e==8)
	  { cout<<"\n\nYOU WIN THE GAME";
	    getch();
	    exit(0);
	  }
	  C();
	}
	void C()
	{ cout<<"\n";
	  cout<<"Enter row=";
	  cin>>r;
	  cout<<"Enter column=";
	  cin>>c;
	  if(r>9||c>9)
	  { cout<<"Wrong Input";
	    getch();
	    C();
	  }
	  if(r<1||c<1)
	  { cout<<"Wrong Input";
	    getch();
	    C();
	  }
	  r=r-1;
	  c=c-1;
	  for(i=0;i<9;i++)
	  { if(a[r][i]==n)
	    { cout<<"Wrong Input,There is a element in a row";
	      getch();
	      C();
	    }
	  }
	  for(i=0;i<9;i++)
	  { if(a[i][c]==n)
	    { cout<<"Wrong Input,There is a element in a column";
	      getch();
	      C();
	    }
	  }
	  p=r;
	  q=c;
	  if(p>q)
	  { p=p-q;
	    q=0;
	  }
	  else if(q>p)
	  { q=q-p;
	    p=0;
	  }
	  else
	  { p=0;
	    q=0;
	  }
	  for(i=0;i<9;i++)
	  { if(a[p][q]==n)
	    { cout<<"Wrong Input,There is element in a right diagonal";
	      getch();
	      C();
	    }
	    if(p<9&&q<9)
	    { p++;
	      q++;
	    }
	  }
	  p=r;
	  q=c;
	  for(i=0;i<9;i++)
	  { if(a[p][q]==n)
	    { cout<<"Wrong Input,There is element in a left diagonal";
	      getch();
	      C();
	    }
	    if(p>0&&q<9)
	    { p--;
	      q++;
	    }
	  }
	  p=r;
	  q=c;
	  for(i=0;i<9;i++)
	  { if(a[p][q]==n)
	    { cout<<"Wrong Input,There is element in a left diagonal";
	      getch();
	      C();
	    }
	    if(p<9&&q>0)
	    { p++;
	      q--;
	    }
	  }
	  a[r][c]=n;
	  D();
	}
	void E()
	{ int w=0,x;
	  clrscr();
	  cout<<"\t\tEIGHT QUEEN\n";
	  cout<<"\t\t~~~~~~~~~~~~\n\n\n";
	  cout<<"1.New Game"<<endl;
	  cout<<"2.Instructions"<<endl;
	  cout<<"3.Exit\n\n";
	  while(w==0)
	  { cout<<"Enter Choice:";
	    cin>>x;
	    switch(x)
	    { case 1: w=1;
		      clrscr();
		      B();
		      D();
		      break;
	      case 2: w=1;
		      clrscr();
		      cout<<"\t\tINSTRUCTIOMS\n\n";
		      cout<<"1.The aim of the puzzle is to enter a digit from 1 to 9.\n";
		      cout<<"2.In each cell of a 9X9 grid made up of 3X3 subgrids.\n";
		      cout<<"3.In each row,column,and subgrid must contain only one instance of each digit.\n";
		      cout<<"4.For seeing the solution of given Sudoku puzzle press number '10' in row         and press Enter button.\n";
		      cout<<"\nPress enter button to start Sudoku puzzle";
		      getch();
		      B();
		      D();
		      clrscr();
		      break;
	      case 3: exit(0);
	     default: cout<<"Wrong Input"<<endl;
		      break;
	    }
	  }
	}

};
void main()
{       textbackground(BLUE);
	clrscr();
	A obj;
	obj.E();
	getch();
}