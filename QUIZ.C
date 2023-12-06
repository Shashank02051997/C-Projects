//Quiz
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
void main()
{	char ch,d;
	int b[3000],a,i,c=-1,e,k=0,p=0,n=0;
	time_t t;
	clrscr();
	time(&t);
	srand((unsigned int) t);
	printf("\t\t\t\tQUIZ\n");
	printf("For start a Quiz Press s and For Quit a Quiz Press q: ");
	scanf("%s",&ch);
	switch(ch)
	{ case 's': for(i=0;;i++)
		    { e=0;
		      a=rand()%10;
		      b[i]=a;
		      c++;
		      for(i=0;i<c;i++)
		      { if(a==b[i])
			{ e=1;
			}
		      }
		      if(e==1)
		      { printf("");
			k--;
		      }
		      if(e==0)
		      { if(a==0)
			{ clrscr();
			  printf("\t\t\t\tQUIZ\n");
			  printf("For start a Quiz Press s and For Qiut a Quiz Press q: s\n");
			  printf("Quiz start\n");
			  printf("Q. How many days in a week?\n");
			  printf("(a) 7");
			  printf("\t(b) 5");
			  printf("\t(c) 4");
			  printf("\t(d) 8\n");
			  printf("Enter your choice: ");
			  scanf("%s",&d);
			  if(d=='a')
			  { printf("Correct Answer");
			    p++;
			  }
			  else
			  { printf("Wrong Answer\n");
			    printf("Correct Answer is (a)");
			    n++;
			  }
			  getch();
			}
			if(a==1)
			{ clrscr();
			  printf("\t\t\t\tQUIZ\n");
			  printf("For start a Quiz Press s and For Qiut a Quiz Press q: s\n");
			  printf("Quiz start\n");
			  printf("Q. How many days in a year?\n");
			  printf("(a) 355");
			  printf("\t(b) 365");
			  printf("\t(c) 364");
			  printf("\t(d) 367\n");
			  printf("Enter your choice: ");
			  scanf("%s",&d);
			  if(d=='b')
			  { printf("Correct Answer");
			    p++;
			  }
			  else
			  { printf("Wrong Answer\n");
			    printf("Correct Answer is (b)");
			    n++;
			  }
			  getch();
			}
			if(a==2)
			{ clrscr();
			  printf("\t\t\t\tQUIZ\n");
			  printf("For start a Quiz Press s and For Qiut a Quiz Press q: s\n");
			  printf("Quiz start\n");
			  printf("Q. How many days in a january?\n");
			  printf("(a) 32");
			  printf("\t(b) 28");
			  printf("\t(c) 30");
			  printf("\t(d) 31\n");
			  printf("Enter your choice: ");
			  scanf("%s",&d);
			  if(d=='d')
			  { printf("Correct Answer");
			    p++;
			  }
			  else
			  { printf("Wrong Answer\n");
			    printf("Correct Answer is (d)");
			    n++;
			  }
			  getch();
			}
			if(a==3)
			{  clrscr();
			  printf("\t\t\t\tQUIZ\n");
			  printf("For start a Quiz Press s and For Qiut a Quiz Press q: s\n");
			  printf("Quiz start\n");
			  printf("Q. How many days in a febuary?\n");
			  printf("(a) 32");
			  printf("\t(b) 28");
			  printf("\t(c) 30");
			  printf("\t(d) 31\n");
			  printf("Enter your choice: ");
			  scanf("%s",&d);
			  if(d=='b')
			  { printf("Correct Answer");
			    p++;
			  }
			  else
			  { printf("Wrong Answer\n");
			    printf("Correct Answer is (b)");
			    n++;
			  }
			  getch();
			}
			if(a==4)
			{  clrscr();
			  printf("\t\t\t\tQUIZ\n");
			  printf("For start a Quiz Press s and For Qiut a Quiz Press q: s\n");
			  printf("Quiz start\n");
			  printf("Q. How many days in a march?\n");
			  printf("(a) 32");
			  printf("\t(b) 28");
			  printf("\t(c) 31");
			  printf("\t(d) 30\n");
			  printf("Enter your choice: ");
			  scanf("%s",&d);
			  if(d=='c')
			  { printf("Correct Answer");
			    p++;
			  }
			  else
			  { printf("Wrong Answer\n");
			    printf("Correct Answer is (c)");
			    n++;
			  }
			  getch();
			}
			if(a==5)
			{  clrscr();
			  printf("\t\t\t\tQUIZ\n");
			  printf("For start a Quiz Press s and For Qiut a Quiz Press q: s\n");
			  printf("Quiz start\n");
			  printf("Q. How many days in a april?\n");
			  printf("(a) 32");
			  printf("\t(b) 28");
			  printf("\t(c) 30");
			  printf("\t(d) 31\n");
			  printf("Enter your choice: ");
			  scanf("%s",&d);
			  if(d=='c')
			  { printf("Correct Answer");
			    p++;
			  }
			  else
			  { printf("Wrong Answer\n");
			    printf("Correct Answer is (c)");
			    n++;
			  }
			  getch();
			}
			if(a==6)
			{  clrscr();
			  printf("\t\t\t\tQUIZ\n");
			  printf("For start a Quiz Press s and For Qiut a Quiz Press q: s\n");
			  printf("Quiz start\n");
			  printf("Q. How many days in a may?\n");
			  printf("(a) 31");
			  printf("\t(b) 30");
			  printf("\t(c) 28");
			  printf("\t(d) 29\n");
			  printf("Enter your choice: ");
			  scanf("%s",&d);
			  if(d=='a')
			  { printf("Correct Answer");
			    p++;
			  }
			  else
			  { printf("Wrong Answer\n");
			    printf("Correct Answer is (a)");
			    n++;
			  }
			  getch();
			}
			if(a==7)
			{  clrscr();
			  printf("\t\t\t\tQUIZ\n");
			  printf("For start a Quiz Press s and For Qiut a Quiz Press q: s\n");
			  printf("Quiz start\n");
			  printf("Q. How many days in a june?\n");
			  printf("(a) 32");
			  printf("\t(b) 30");
			  printf("\t(c) 31");
			  printf("\t(d) 29\n");
			  printf("Enter your choice: ");
			  scanf("%s",&d);
			  if(d=='b')
			  { printf("Correct Answer");
			    p++;
			  }
			  else
			  { printf("Wrong Answer\n");
			    printf("Correct Answer is (b)");
			    n++;
			  }
			  getch();
			}
			if(a==8)
			{  clrscr();
			  printf("\t\t\t\tQUIZ\n");
			  printf("For start a Quiz Press s and For Qiut a Quiz Press q: s\n");
			  printf("Quiz start\n");
			  printf("Q. How many days in a july?\n");
			  printf("(a) 32");
			  printf("\t(b) 28");
			  printf("\t(c) 30");
			  printf("\t(d) 31\n");
			  printf("Enter your choice: ");
			  scanf("%s",&d);
			  if(d=='d')
			  { printf("Correct Answer");
			    p++;
			  }
			  else
			  { printf("Wrong Answer\n");
			    printf("Correct Answer is (d)");
			    n++;
			  }
			  getch();
			}
			if(a==9)
			{  clrscr();
			  printf("\t\t\t\tQUIZ\n");
			  printf("For start a Quiz Press s and For Qiut a Quiz Press q: s\n");
			  printf("Quiz start\n");
			  printf("Q. How many days in a august?\n");
			  printf("(a) 32");
			  printf("\t(b) 28");
			  printf("\t(c) 30");
			  printf("\t(d) 31\n");
			  printf("Enter your choice: ");
			  scanf("%s",&d);
			  if(d=='d')
			  { printf("Correct Answer");
			    p++;
			  }
			  else
			  { printf("Wrong Answer\n");
			    printf("Correct Answer is (d)");
			    n++;
			  }
			  getch();
			}
		       }
		       k++;
		       if(k==10)
		       break;
		      }
		      clrscr();
		      printf("SCORE\n");
		      printf("Correct Answer = %d\n",p);
		      printf("Wrong Answer = %d\n",n);
		      getch();
		      printf("THANK YOU FOR PLAYING QUIZ\n");
		      printf("MADE BY- SHASHANK");
		      break;
	  case 'q': printf("Quiz quit");
		    break;
	  default: printf("Wrong choice");
		   break;
	}
	getch();
}
