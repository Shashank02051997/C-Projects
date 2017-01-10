//Sudoku
#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<dos.h>
#include<time.h>
class A
{	int i,j,k,l,a[9][9],b[9][9],m[10],r1,r2,r3,t,e,e1,r,c,n,x,p,q;
	public:
	A()
	{ k=0;
	  while(k<9)
	  { e=0;
	    r3=rand()%10;
	    for(l=0;l<k;l++)
	    { if(m[l]==r3||r3==0)
	      { k--;
		e=1;
	      }
	    }
	    if(e==0)
	    m[k]=r3;
	    k++;
	  }
	  a[0][0]=a[1][6]=a[2][3]=a[3][1]=a[4][7]=a[5][4]=a[6][2]=a[7][8]=a[8][5]=m[8];
	  a[0][1]=a[1][7]=a[2][4]=a[3][0]=a[4][6]=a[5][3]=a[6][5]=a[7][2]=a[8][8]=m[7];
	  a[0][2]=a[1][8]=a[2][5]=a[3][3]=a[4][0]=a[5][6]=a[6][1]=a[7][7]=a[8][4]=m[6];
	  a[0][3]=a[1][0]=a[2][6]=a[3][2]=a[4][8]=a[5][5]=a[6][4]=a[7][1]=a[8][7]=m[5];
	  a[0][4]=a[1][1]=a[2][7]=a[3][5]=a[4][2]=a[5][8]=a[6][0]=a[7][6]=a[8][3]=m[4];
	  a[0][5]=a[1][2]=a[2][8]=a[3][4]=a[4][1]=a[5][7]=a[6][3]=a[7][0]=a[8][6]=m[3];
	  a[0][6]=a[1][3]=a[2][0]=a[3][8]=a[4][5]=a[5][2]=a[6][7]=a[7][4]=a[8][1]=m[2];
	  a[0][7]=a[1][4]=a[2][1]=a[3][6]=a[4][3]=a[5][0]=a[6][8]=a[7][5]=a[8][2]=m[1];
	  a[0][8]=a[1][5]=a[2][2]=a[3][7]=a[4][4]=a[5][1]=a[6][6]=a[7][3]=a[8][0]=m[0];
	}
	void B()
	{ for(i=0;i<5;i++)
	  { e=0;
	    r1=rand()%9;
	    cout<<"";
	    if(r1==2||r1==5||r1==8)
	    { e=1;
	      i--;
	    }
	    else
	    r2=r1+1;
	    if(e==0)
	    { for(j=0;j<9;j++)
	      { t=a[r1][j];
		a[r1][j]=a[r2][j];
		a[r2][j]=t;
	      }
	    }
	  }
	}
	void C()
	{ for(i=0;i<5;i++)
	  { e=0;
	    r1=rand()%9;
	    cout<<"";
	    if(r1==2||r1==5||r1==8)
	    { e=1;
	      i--;
	    }
	    else
	    r2=r1+1;
	    if(e==0)
	    { for(j=0;j<9;j++)
	      { t=a[j][r1];
		a[j][r1]=a[j][r2];
		a[j][r2]=t;
	      }
	    }
	  }
	}
	void D()
	{ for(j=0;j<9;j++)
	  { for(i=0;i<9;i++)
	    b[i][j]=a[j][i];
	  }
	  for(j=0;j<9;j++)
	  { for(i=0;i<9;i++)
	    a[i][j]=b[i][j];
	  }
	}
	void E()
	{ for(i=0;i<9;i++)
	  { for(j=0;j<9;j++)
	    cout<<"|_"<<b[i][j]<<"_";
	    cout<<endl;
	  }
	  cout<<"\n\n";
	}
	void F()
	{ clrscr();
	  cout<<"\t\t\t Sudoku"<<endl;
	  cout<<"\t\t\t~~~~~~~~"<<endl;
	  cout<<"\n\n";
	  cout<<"1.VERY EASY"<<endl;
	  cout<<"2.EASY"<<endl;
	  cout<<"3.MEDIUM"<<endl;
	  cout<<"4.HARD\n\n";
	  cout<<"Enter Choice:";
	  cin>>p;
	  if(p==1)
	  q=11;
	  else if(p==2)
	  q=21;
	  else if(p==3)
	  q=31;
	  else if(p==4)
	  q=40;
	  else
	  { cout<<"Wrong Input";
	    getch();
	    F();
	  }
	  for(i=0;i<q;i++)
	  { r1=rand()%9;
	    r2=rand()%9;
	    a[r1][r2]=0;
	  }
	}
	void G()
	{ for(i=0;i<9;i++)
	  { for(j=0;j<9;j++)
	    { if(a[i][j]==0)
	      cout<<"|_"<<" _";
	      else
	      cout<<"|_"<<a[i][j]<<"_";
	    }
	    cout<<endl;
	  }
	}
	void H()
	{ e1=0;
	  for(i=0;i<9;i++)
	  { for(j=0;j<9;j++)
	    { if(a[i][j]==0)
	       e1=1;
	    }
	  }
	  if(e1==0)
	  { delay(1000);
	    cout<<"YOU WIN THE GAME";
	    exit(0);
	  }
	  cout<<"\t\t\t Sudoku"<<endl;
	  cout<<"\t\t\t~~~~~~~~"<<endl;
	  cout<<"\n";
	  G();
	  cout<<"\n\n";
	  cout<<"Enter row=";
	  cin>>r;
	  if(r==10)
	  { clrscr();
	    cout<<"\t\t\t Sudoku"<<endl;
	    cout<<"\t\t\t~~~~~~~~"<<endl;
	    cout<<"\n";
	    cout<<"Solution for given Sudoku\n\n";
	    E();
	    getch();
	    exit(0);
	  }
	  cout<<"Enter column=";
	  cin>>c;
	  if(a[r-1][c-1]==0)
	  { cout<<"Enter corresponding number=";
	    cin>>n;
	    if(n==b[r-1][c-1])
	    { a[r-1][c-1]=n;
	      clrscr();
	      H();
	    }
	    else
	    { cout<<"Wrong Input";
	      getch();
	      clrscr();
	      H();
	    }
	  }
	  else
	  { cout<<"Wrong Input";
	    getch();
	    clrscr();
	    H();
	  }
	}
	void I()
	{ int w=0;
	  cout<<"\t\t\t Sudoku"<<endl;
	  cout<<"\t\t\t~~~~~~~~"<<endl;
	  cout<<"\n";
	  cout<<"1.New Game"<<endl;
	  cout<<"2.Instructions"<<endl;
	  cout<<"3.Exit\n\n";
	  while(w==0)
	  { cout<<"Enter Choice:";
	    cin>>x;
	    switch(x)
	    { case 1: w=1;
		      F();
		      clrscr();
		      H();
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
		      F();
		      clrscr();
		      H();
		      break;
	      case 3: exit(0);
	     default: cout<<"Wrong Input"<<endl;
		      break;
	    }
	  }
	}
};
void main()
{       time_t t;
	time(&t);
	srand((unsigned int)t);
	textbackground(BLUE);
	clrscr();
	A obj;
	obj.B();
	obj.C();
	obj.D();
	obj.I();
	getch();
}