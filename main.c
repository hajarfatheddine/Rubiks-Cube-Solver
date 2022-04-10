#include <stdio.h>
#include <stdlib.h>

   char w[9]={'r','w','y','g','w','w','w','w','w'};
   char b[9]={'o','b','b','y','o','o','r','b','b'};
   char g[9]={'y','o','g','r','b','y','b','g','g'};
   char r[9]={'g','y','y','o','r','g','b','r','r'};
   char y[9]={'r','y','y','b','g','b','o','o','y'};
   char o[9]={'o','g','w','w','w','r','g','r','o'};

void rotate_clock(char choice,char side)
{  char a,d,c,x,t,z;
  if (choice=='w')
  {
    a= w[7];
    d=w[6];

    for(int i=7;i>1;i--)
    {
        w[i]=w[i-2];
    }
    w[1]=a;
    w[0]=d;

    x=o[0];
    t=o[7];
    z=o[6];

     o[0]=g[0];
     o[7]=g[7];
     o[6]=g[6];

     g[0]=r[0];
     g[7]=r[7];
     g[6]=r[6];

     r[0]=b[0];
     r[7]=b[7];
     r[6]=b[6];

     b[0]=x;
     b[7]=t;
     b[6]=z;

  }
  //-------------------------
  else if(choice=='r')
  {
    a=r[7];
    d=r[6];


    for(int i=7;i>1;i--)
    {
        r[i]=r[i-2];
    }
    r[1]=a;
    r[0]=d;
  if( side=='f')
    {
    x=g[2];
    t=g[1];
    z=g[0];

     g[2]=y[0];
     g[1]=y[7];
     g[0]=y[6];

     y[6]=b[4];
     y[7]=b[5];
     y[0]=b[6];

     b[6]=w[4];
     b[5]=w[3];
     b[4]=w[2];

     w[2]=z;
     w[3]=t;
     w[4]=x;

    }
    else if (side=='r')
    {

    x= y[0];
    t=y[1];
    z=y[2];

    y[0]=b[4];
    y[1]=b[5];
    y[2]=b[6];

    b[4]=w[0];
    b[5]=w[1];
    b[6]=w[2];

    w[0]=g[0];
    w[1]=g[1];
    w[2]=g[2];



    g[0]=x;
    g[1]=t;
    g[2]=z;
    }
  }
  //-----------------------------------
  else if(choice=='y')
  {
    a=y[7];
    d=y[6];


    for(int i=7;i>1;i--)
    {
        y[i]=y[i-2];
    }
    y[1]=a;
    y[0]=d;

    x=r[4];
    t=r[3];
    z=r[2];

     r[4]=g[4];
     r[3]=g[3];
     r[2]=g[2];

     g[4]=o[4];
     g[3]=o[3];
     g[2]=o[2];

     o[4]=b[4];
     o[3]=b[3];
     o[2]=b[2];

     b[4]=x;
     b[3]=t;
     b[2]=z;

  }
  //-------------------------------------
  else if(choice=='o')
  {
    a=o[7];
    d=o[6];


    for(int i=7;i>1;i--)
    {
        o[i]=o[i-2];
    }
    o[1]=a;
    o[0]=d;

    x=y[2];
    t=y[1];
    z=y[0];

     if(side=='r')
    {

    x=g[4];
    t=g[5];
    z=g[6];

     g[4]=w[0];
     g[5]=w[1];
     g[6]=w[2];

     w[0]=b[0];
     w[1]=b[1];
     w[2]=b[2];

     b[0]=y[0];
     b[1]=y[1];
     b[2]=y[2];

     y[0]=x;
     y[1]=t;
     y[2]=z;

    }
    else if (side=='f')
    {

    x=g[4];
    t=g[5];
    z=g[6];

     g[4]=w[2];
     g[5]=w[3];
     g[6]=w[4];

     w[2]=b[0];
     w[3]=b[1];
     w[4]=b[2];

     b[0]=y[6];
     b[1]=y[7];
     b[2]=y[0];

     y[6]=x;
     y[7]=t;
     y[0]=z;
    }
  }
  //-------------------------------------
  else if(choice=='g')
  {
    a=g[7];
    d=g[6];


    for(int i=7;i>1;i--)
    {
        g[i]=g[i-2];
    }
    g[1]=a;
    g[0]=d;

     if(side=='r')
    {

    x=r[4];
    t=r[5];
    z=r[6];

     r[4]=w[0];
     r[5]=w[1];
     r[6]=w[2];

     w[0]=o[0];
     w[1]=o[1];
     w[2]=o[2];

     o[0]=y[0];
     o[1]=y[1];
     o[2]=y[2];

     y[0]=x;
     y[1]=t;
     y[2]=z;
    }
    else if (side=='f')
    {

    x=r[4];
    t=r[5];
    z=r[6];

     r[4]=w[2];
     r[5]=w[3];
     r[6]=w[4];

     w[2]=o[0];
     w[3]=o[1];
     w[4]=o[2];

     o[0]=y[6];
     o[1]=y[7];
     o[2]=y[0];

     y[6]=x;
     y[7]=t;
     y[0]=z;
    }
  }
  //-------------------------------------------
  else if(choice=='b')
  {
    a=b[7];
    d=b[6];


    for(int i=7;i>1;i--)
    {
        b[i]=b[i-2];
    }
    b[1]=a;
    b[0]=d;

    if(side=='r')
    {

    x=r[0];
    t=r[1];
    z=r[2];

     r[0]=y[0];
     r[1]=y[1];
     r[2]=y[2];

     y[0]=o[4];
     y[1]=o[5];
     y[2]=o[6];

     o[6]=w[2];
     o[5]=w[1];
     o[4]=w[0];

     w[0]=x;
     w[1]=t;
     w[2]=z;

    }
    else if (side=='f')
    {

    x=r[0];
    t=r[1];
    z=r[2];

     r[0]=y[6];
     r[1]=y[7];
     r[2]=y[0];

     y[6]=o[4];
     y[7]=o[5];
     y[0]=o[6];

     o[4]=w[2];
     o[5]=w[3];
     o[6]=w[4];

     w[2]=x;
     w[3]=t;
     w[4]=z;
    }
}
}
   //--------------------------
    void plus()
    {
        char front;
        char right;
        if(r[3]=='w')
            front='r';
       else if(b[3]=='w')
            front='b';
       else if(g[3]=='w')
            front='g';
       else if(o[3]=='w')
            front='o';

            printf("front est : %c \n",front);

    for(int i=0;i<3;i++)
    { rotate_clock(front,'f');}

        if(front=='r')
            right='b';
       else if(front=='b')
            right='o';
       else if(front=='o')
            right='g';
       else if(front=='g')
            right='r';

            printf("right est : %c \n", right);

    for(int i=0;i<3;i++)
    { rotate_clock(right,'r');}

     for(int i=0;i<3;i++)
    { rotate_clock('y','f');}

     rotate_clock(right,'r');

     for(int i=0;i<2;i++)
    { rotate_clock(front,'f');}

    }

    void main()
{
    int i;
   for(i=0;i<9;i++)
    {printf("w[%d]=%c",i,w[i]);
    printf("\n");}

    printf("\n aprés .... \n");
     plus();

     for(i=0;i<9;i++)
  {printf("w[%d]=%c",i,w[i]);
   printf("\n");}

}

