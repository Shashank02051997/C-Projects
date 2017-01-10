//Guess the correct Number
#include<iostream.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
#include<dos.h>
#include<stdio.h>
class A
{	int n,r,c,i;
	char ch,s[25];
	public:
	A()
	{ c=8;
	  ch='y';
	}
	void B()
	{ int w=0,x;
	  clrscr();
	  cout<<"\t\t\tGuess the correct Number\n";
	  cout<<"\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~\n\n\n";
	  cout<<"----------------\n";
	  cout<<"  Main Menu  \n";
	  cout<<"----------------\n\n";
	  cout<<"1.New Game\n"<<endl;
	  cout<<"2.Rule\n"<<endl;
	  cout<<"3.Exit\n\n";
	  while(w==0)
	  { cout<<"Enter Choice(1-3):";
	    cin>>x;
	    switch(x)
	    { case 1: w=1;
		      clrscr();
		      C();
		      D();
		      break;
	      case 2: w=1;
		      clrscr();
		      cout<<"\n\n---------------------"<<"\n General Description"<<"\n---------------------";
		      cout<<"\n\n1.The Computer picks a random number from 0 to 99.\n  You must try to guess the number.";
		      cout<<"\n\n2.The Computer ask you to enter your guess.You have 8\n  chances to guess the number.";
		      cout<<"\n\n3.The computer checks the number,if your guess is\n  less than computer's numer than it will show a message\n  that your guess is low and ask for higher number.";
		      cout<<"\n\n4.If your guess is higher than the computer's number\n  than computer will show a message that your guess is high and\n  ask for lower number.";
		      cout<<"\n\n5.If your guess is equal to the computer's number,than\n  computer will print a message congratulating you\n  and will ask you to play the game again or exit.";
		      cout<<"\n\n6.If you are unable to guess the number than the computer\n  will a sorry message and ask you to play the game again or exit.\n";
		      cout<<"\n\n  Press enter button to start the game";
		      getch();
		      clrscr();
		      C();
		      D();
		      break;
	      case 3: exit(0);
	     default: cout<<"\nWrong Input\n"<<endl;
		      break;
	    }
	  }
	}
	void C()
	{ r=rand()%100;
	  cout<<"\nEnter your Name: ";
	  gets(s);
	  cout<<"\n";
	  for(i=20;i<=100;i+=20)
	  { cout<<"Loading....."<<i<<"%"<<"\r";
	    sleep(1);
	  }
	  cout<<"\n\n";
	  cout<<"Hi "<<s<<"........!!!"<<endl;
	  cout<<"\nEnter your Guess:";
	  cin>>n;
	  if(r==n)
	  { cout<<"\nYou Guess the correct Number\n";
	    delay(5000);
	    clrscr();
	    cout<<"\n\nCongrulation you win the game\n\n";
	    cout<<"THANK YOU FOR PLAYING THE GAME\n\n";
	    cout<<"MADE BY- SHASHANK ";
	    delay(8000);
	    exit(0);
	  }
	  else if(r>n)
	  { cout<<"\nIt is Low......!!\n"<<endl;
	    delay(1000);
	    c--;
	    cout<<"You have "<<c<<" chances left\n"<<endl;
	  }
	  else
	  { cout<<"\nIt is High......!!\n"<<endl;
	    delay(1000);
	    c--;
	    cout<<"You have "<<c<<" chances left\n"<<endl;
	  }
	}
	void D()
	{ if(c==0)
	  { cout<<"\tSorry "<<s<<" Bad Luck.....!!! Try Next Time\n\n";
	    while(ch=='Y'||ch=='y')
	    { cout<<"Do You want to continue(y/n): ";
	      fflush(stdin);
	      cin>>ch;
	      if(ch=='y'||ch=='Y')
	      { clrscr();
		c=8;
		D();
	      }
	    }
	    exit(0);
	  }
	  cout<<"\nEnter your Guess again:";
	  cin>>n;
	  if(r==n)
	  { cout<<"\nYou Guess the correct Number\n";
	    delay(5000);
	    clrscr();
	    cout<<"\n\nCongrulation you win the game\n\n";
	    cout<<"THANK YOU FOR PLAYING THE GAME\n\n";
	    cout<<"MADE BY- SHASHANK ";
	    delay(8000);
	    exit(0);
	  }
	  else if(r>n)
	  { cout<<"\nIt is Low......!!\n"<<endl;
	    delay(1000);
	    c--;
	    cout<<"You have "<<c<<" chances left\n"<<endl;
	  }
	  else
	  { cout<<"\nIt is High......!!\n"<<endl;
	    delay(1000);
	    c--;
	    cout<<"You have "<<c<<" chances left\n"<<endl;
	  }
	  D();
	}
};
void main()
{	time_t t;
	textbackground(WHITE);
	textcolor(BLUE);
	clrscr();
	time(&t);
	srand((unsigned int)t);
	A obj;
	obj.B();
	getch();
}
