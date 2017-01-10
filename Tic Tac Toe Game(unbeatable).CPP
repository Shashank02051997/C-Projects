//Tic Tac Toe Game
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<dos.h>
void main()
{	clrscr();
	textcolor(WHITE);
	textbackground(BLUE);
	char s[3][3];
	int i,j,r,c,v=0,p,q,e,z,n,m,f,w,b;
	for(i=0;i<3;i++)
	{ for(j=0;j<3;j++)
	  s[i][j]=' ';
	}
	while(v!=10)
	{ z=0;
	  w=0;
	  clrscr();
	  printf("\t\t   TIC TAC TOE GAME\n");
	  printf("\t\t   ~~~~~~~~~~~~~~~~~\n");
	  printf("Game start\n\n");
	  for(i=0;i<3;i++)
	  { for(j=0;j<3;j++)
	    { printf("_ %c |",s[i][j]);
	      if(s[i][j]==' ')
	      w=1;
	    }
	    printf("\n");
	  }
	  if(w==0)
	  { printf("\nTie");
	    getch();
	    exit(0);
	  }
	  printf("\nUser turn\n");
	  printf("\nEnter row=");
	  scanf("%d",&r);
	  printf("Enter column=");
	  scanf("%d",&c);
	  if(r>0&&r<4&&c>0&&c<4)
	  { if(s[r-1][c-1]==' ')
	    { s[r-1][c-1]='X';
	      clrscr();
	      printf("\t\t   TIC TAC TOE GAME\n");
	      printf("\t\t   ~~~~~~~~~~~~~~~~~\n");
	      printf("Game start\n\n");
	      for(i=0;i<3;i++)
	      { for(j=0;j<3;j++)
		printf("_ %c |",s[i][j]);
		printf("\n");
	      }
	      delay(900);
	      if(v==0)
	      { if(r==2&&c==2)
		{ printf("\n\nComputer turn\n\n");
		  for(b=20;b<=100;b+=20)
		  { printf("Loading...%d%\r",b);
		    sleep(1);
		  }
		  printf("\ndone");
		  delay(900);
		  s[0][2]='O';
		  v++;
		}
		else
		{ printf("\n\nComputer turn\n\n");
		  for(b=20;b<=100;b+=20)
		  { printf("Loading...%d%\r",b);
		    sleep(1);
		  }
		  printf("\ndone");
		  delay(900);
		  s[1][1]='O';
		  v++;
		}
	      }
	      if(v>1)
	      { for(i=0;i<3;i++)
		{ for(j=0;j<3;j++)
		  { if(s[i][j]==' ')
		    { f=0;
		      s[i][j]='O';
		      for(p=0;p<3;p++)
		      { if(s[p][0]=='O'&&s[p][1]=='O'&&s[p][2]=='O')
			{ printf("\n\nComputer turn\n\n");
			  for(b=20;b<=100;b+=20)
			  { printf("Loading...%d%\r",b);
			    sleep(1);
			  }
			  printf("\ndone");
			  delay(900);
			  s[i][j]='O';
			  f=1;
			  clrscr();
			  printf("\t\t   TIC TAC TOE GAME\n");
			  printf("\t\t   ~~~~~~~~~~~~~~~~~\n");
			  printf("Game start\n\n");
			  for(i=0;i<3;i++)
			  { for(j=0;j<3;j++)
			    printf("_ %c |",s[i][j]);
			    printf("\n");
			  }
			  printf("\nComputer Wins");
			  getch();
			  exit(0);
			}
		      }
		      for(q=0;q<3;q++)
		      { if(s[0][q]=='O'&&s[1][q]=='O'&&s[2][q]=='O')
			{ printf("\n\nComputer turn\n\n");
			  for(b=20;b<=100;b+=20)
			  { printf("Loading...%d%\r",b);
			    sleep(1);
			  }
			  printf("\ndone");
			  delay(900);
			  s[i][j]='O';
			  f=1;
			  clrscr();
			  printf("\t\t   TIC TAC TOE GAME\n");
			  printf("\t\t   ~~~~~~~~~~~~~~~~~\n");
			  printf("Game start\n\n");
			  for(i=0;i<3;i++)
			  { for(j=0;j<3;j++)
			    printf("_ %c |",s[i][j]);
			    printf("\n");
			  }
			  printf("\nComputer Wins");
			  getch();
			  exit(0);
			}
		      }
		      if(s[0][0]=='O'&&s[1][1]=='O'&&s[2][2]=='O')
		      { printf("\n\nComputer turn\n\n");
			for(b=20;b<=100;b+=20)
			{ printf("Loading...%d%\r",b);
			  sleep(1);
			}
			printf("\ndone");
			delay(900);
			s[i][j]='O';
			f=1;
			clrscr();
			printf("\t\t   TIC TAC TOE GAME\n");
			printf("\t\t   ~~~~~~~~~~~~~~~~~\n");
			printf("Game start\n\n");
			for(i=0;i<3;i++)
			{ for(j=0;j<3;j++)
			  printf("_ %c |",s[i][j]);
			  printf("\n");
			}
			printf("\nComputer Wins");
			getch();
			exit(0);
		      }
		      if(s[0][2]=='O'&&s[1][1]=='O'&&s[2][0]=='O')
		      { printf("\n\nComputer turn\n\n");
			for(b=20;b<=100;b+=20)
			{ printf("Loading...%d%\r",b);
			  sleep(1);
			}
			printf("\ndone");
			delay(900);
			s[i][j]='O';
			f=1;
			clrscr();
			printf("\t\t   TIC TAC TOE GAME\n");
			printf("\t\t   ~~~~~~~~~~~~~~~~~\n");
			printf("Game start\n\n");
			for(i=0;i<3;i++)
			{ for(j=0;j<3;j++)
			  printf("_ %c |",s[i][j]);
			  printf("\n");
			}
			printf("\nComputer Wins");
			getch();
			exit(0);
		      }
		      if(f!=1)
		      s[i][j]=' ';
		    }
		  }
		}
	      }
	      if(v>1)
	      { for(i=0;i<3;i++)
		{ for(j=0;j<3;j++)
		  { if(s[i][j]==' ')
		    { e=0;
		      s[i][j]='X';
		      for(p=0;p<3;p++)
		      { if(s[p][0]=='X'&&s[p][1]=='X'&&s[p][2]=='X')
			{ printf("\n\nComputer turn\n\n");
			  for(b=20;b<=100;b+=20)
			  { printf("Loading...%d%\r",b);
			    sleep(1);
			  }
			  printf("\ndone");
			  delay(900);
			  s[i][j]='O';
			  e=1;
			  z=1;
			  break;
			}
		      }
		      for(q=0;q<3;q++)
		      { if(s[0][q]=='X'&&s[1][q]=='X'&&s[2][q]=='X')
			{ printf("\n\nComputer turn\n\n");
			  for(b=20;b<=100;b+=20)
			  { printf("Loading...%d%\r",b);
			    sleep(1);
			  }
			  printf("\ndone");
			  delay(900);
			  s[i][j]='O';
			  z=1;
			  e=1;
			  break;
			}
		      }
		      if(s[0][0]=='X'&&s[1][1]=='X'&&s[2][2]=='X')
		      { printf("\n\nComputer turn\n\n");
			for(b=20;b<=100;b+=20)
			{ printf("Loading...%d%\r",b);
			  sleep(1);
			}
			printf("\ndone");
			delay(900);
			s[i][j]='O';
			z=1;
			e=1;
			break;
		      }
		      if(s[0][2]=='X'&&s[1][1]=='X'&&s[2][0]=='X')
		      { clrscr();
			printf("\n\nComputer turn\n\n");
			for(b=20;b<=100;b+=20)
			{ printf("Loading...%d%\r",b);
			  sleep(1);
			}
			printf("\ndone");
			delay(900);
			s[i][j]='O';
			e=1;
			z=1;
			break;
		      }
		      if(e!=1)
		      s[i][j]=' ';
		    }
		  }
		}
		if(z==0)
		{ for(n=0;n<3;n++)
		  { for(m=0;m<3;m++)
		    { if(s[n][m]==' ')
		      { printf("\n\nComputer turn\n\n");
			for(b=20;b<=100;b+=20)
			{ printf("Loading...%d%\r",b);
			  sleep(1);
			}
			printf("\ndone");
			delay(900);
			if(s[1][1]=='O'&&s[1][2]=='X'&&s[2][0]=='X'&&s[0][0]==' '&&s[0][1]==' '&&s[0][2]==' ')
			s[0][2]='O';
			else if(s[1][1]=='O'&&s[1][2]=='X'&&s[2][1]=='X'&&s[0][0]==' '&&s[0][1]==' '&&s[0][2]==' ')
			s[0][2]='O';
			else if(s[1][1]=='O'&&s[0][2]=='X'&&s[2][0]=='X'&&s[0][0]==' '&&s[0][1]==' '&&s[1][0]==' ')
			s[0][1]='O';
			else if(s[1][1]=='O'&&s[0][2]=='X'&&s[2][1]=='X'&&s[0][0]==' '&&s[0][1]==' '&&s[1][0]==' ')
			s[1][0]='O';
			else if(s[1][1]=='O'&&s[0][0]=='X'&&s[2][1]=='X'&&s[0][1]==' '&&s[0][2]==' '&&s[1][2]==' ')
			s[2][0]='O';
			else if(s[1][1]=='O'&&s[0][0]=='X'&&s[1][2]=='X'&&s[0][1]==' '&&s[0][2]==' '&&s[1][0]==' ')
			s[0][2]='O';
			else
			s[n][m]='O';
			n=3;
			m=3;
		      }
		    }
		  }
		}
	      }
	    }
	    else
	    { printf("Invalid choice\n");
	      getch();
	    }
	    v++;
	  }
	  else
	  { printf("Invalid choice\n");
	    getch();
	  }
	}
	getch();
}
