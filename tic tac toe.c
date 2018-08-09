#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

int main()
 {
    //node *root=NULL;
   int n,q,i,flag,op,l,op1,j,k,pos,winner;
   struct node *res;
   char a[3][3]={'1','2','3','4','5','6','7','8','9'};
   int b[3][3]={0,0,0,0,0,0,0,0,0};
   char z[10],var,x[10];
   char r[10];char s[10];

   printf("\n enter 1 to play game");
   printf("\n enter 2 to exit");
   scanf("%d",&n);
   switch(n)
   {
    case 1:
    	//clrscr();
     n=1;
     for(i=0;i<3;i++)
     {
      for(j=0;j<3;j++)
      {
       printf(" %c",a[i][j]);
      }
      printf("\n");
     }
     for(k=0;k<9;k++)
     {
      if(n%2==0)
      {
       var='o';
      }
      else
      {
       var='x';
      }
       printf("\n enter the position");
       scanf("%d",&pos);
       switch(pos)
       {
	    case 1:
	     if(b[0][0]==0)
	     {
	      a[0][0]=var;
	      b[0][0]=1;
	     }
	    break;
	    case 2:
	     if(b[0][1]==0)
	     {
	      a[0][1]=var;
	      b[0][1]=1;
	     }
	    break;
	    case 3:
	     if(b[0][2]==0)
	     {
	      a[0][2]=var;
	      b[0][2]=1;
	     }
	    break;
	    case 4:
	     if(b[1][0]==0)
	     {
	      a[1][0]=var;
	      b[1][0]=1;
	     }
	    break;
	    case 5:
	     if(b[1][1]==0)
	     {
	      a[1][1]=var;
	      b[1][1]=1;
	     }
	    break;
	    case 6:
	     if(b[1][2]==0)
	     {
	      a[1][2]=var;
	      b[1][2]=1;
	     }
	    break;
	    case 7:
	     if(b[2][0]==0)
	     {
	      a[2][0]=var;
	      b[2][0]=1;
	     }
	    break;
	    case 8:
	     if(b[2][1]==0)
	     {
	      a[2][1]=var;
	      b[2][1]=1;
	     }
	    break;
	    case 9:
	     if(b[2][2]==0)
	     {
	      a[2][2]=var;
	      b[2][2]=1;
	     }
	    break;
	    default:
	     printf("\n invalid entry");
       }
       //clrscr();
       for(i=0;i<3;i++)
       {
	     for(j=0;j<3;j++)
	      {
	        printf(" %c",a[i][j]);
	      }
	     printf("\n");
       }
       if((((a[0][0]==a[1][1]) && (a[0][0]=='x')) && ((a[1][1]==a[2][2]) && (a[1][1]=='x'))) || (((a[0][2]==a[1][1]) && (a[0][2]=='x')) && ((a[1][1]==a[2][0]) && (a[2][0]=='x'))))
       {
        winner=1;
        break;
	   }
       else if((((a[0][0]==a[1][1]) && (a[0][0]=='o')) && ((a[1][1]==a[2][2]) && (a[1][1]=='o'))) || (((a[0][2]==a[1][1]) && (a[0][2]=='o')) && ((a[1][1]==a[2][0]) && (a[2][0]=='o'))))
       {
	    winner=2;
        break;
	   }
       else
       {
        flag=1;
        for(l=0;l<3;l++)
         {
	      if((((a[l][0]==a[l][1]) && (a[l][0]=='x')) && ((a[l][1]==a[l][2]) && (a[l][2]=='x'))) || (((a[0][l]==a[1][l]) && (a[0][l]=='x')) && ((a[1][l]==a[2][l]) && (a[1][l]=='x'))))
	       {
		     winner=1;
	         flag=0;
	         break;
		   }
	      else if((((a[l][0]==a[l][1]) && (a[l][0]=='o')) && ((a[l][1]==a[l][2]) && (a[l][2]=='o'))) || (((a[0][l]==a[1][l]) && (a[0][l]=='o')) && ((a[1][l]==a[2][l]) && (a[1][l]=='o'))))
	       {
		    winner=2;
	        flag=0;
	        break;
		   }
	      else
	       winner=0;
         }
        if(flag==0)
        break;
      }
      n++;
     }

    if(winner==0)
    printf("\n its a draw");
    else
    printf("\n winner is %d",winner);
    break;

    case 2:
    	 exit(0);
    }
    getch();
    return 0;
}













