#include<stdio.h>                            //Header Files
#include<conio.h>
#include<graphics.h>
void Area();                                   //Function Decleration
void SI();
void Gross();
void Prime();
void Leap();
void main()
{
 clrscr();                                  //to clear previous output
 int n;
 int i, gdriver=DETECT,gm;
 initgraph(&gdriver,&gm,"C://TC//BGI");                    // Define path of the program 
 setcolor(RED);
 setbkcolor(MAGENTA); 
 rectangle(150,250,450,300);                       // rectangle property (int left,int top, int right, int down );
 for(i=1;i<=100;i=i+5)
 {
   circle(150+i,200,50);                           // circle property(x,y,radius);
 }
  printf("Hello ! I am Robot Here :-");
  printf("Please select \n1.Area of circle and Rectangle.\n2.Find Simple Interest.\n3.Gross Salary\n4.To Find Prime NO.\n5.Find Leap Year\n");
  scanf("%d",&n);                
  cleardevice();                         //to clear page
 switch(n)                               //conditional Statement
 {
 case 1:
 {
  Area();
  break;
 }
 case 2:
 {
  SI();
  break;
 }
 case 3:
 {
  Gross();
  break;
 }
 case 4:
 {
  Prime();
  break;
 }
 case 5:
 {
  Leap();
  break;
 }
 default:
 {
  printf("\n ThankYou");
  break;
 }
 }
 getch();
}
void Area()                                                                      // Function definition
{
 int r,l,b,a2,j;
 float a1;
 printf("Select what operation you want to perform \n1.Circle \n2.Rectangle\n");
 scanf("%d",&j);
 if(j==1)
 {
 printf("Enter radius:");
 scanf("%d",&r);
 a1=22/7*r*r;
 printf("Area of Cirlce:-%f",a1);
 }
 else
 {
 printf("Enter length and width:");
 scanf("%d\n%d",&l,&b);
 a2=l*b;
 printf("Area of Rectangle:- %d",a2);
 }
}
void SI()                                                  // Function definition
{
  float p,t;
  float r,s;
  printf("Enter Principle Amount:-");
  scanf("%f",&p);
  printf("Enter Time and Rate of interest:-");
  scanf("%f\n%f",&t,&r);
  s=(p*r*t)/100;
  printf("Simple Interest=%f",s);
}
void Gross()                                          // Function definition
{
 float HRA,DA,BS,TA,GS;
 printf("Enter Basic Salary:-");
 scanf("%f",&BS);
 if(BS<1000)
 {
  HRA=(5*BS)/100;
  DA=(20*BS)/100;
  TA=(25*BS)/100;
  GS=HRA+DA+TA+BS;
  printf("Gross Salary=%f",GS);
 }
 else
 {
  HRA=500;
  DA=(30*BS)/100;
  TA=(30*BS)/100;
  GS=HRA+DA+TA+BS;
  printf("Gross Salary=%f",GS);
 }
}
void Prime()                                 // Function definition
{
 int n,i;
 printf("Enter Range of Prime No. ");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
  if(i%2!=0)
  {
    printf("%d\t",i);
  }
 }
}
void Leap()                        // Function definition
{
 int n;
 printf("Enter Year:-");
 scanf("%d",&n);
 if(n%4==0)
 {
  printf("Yes this is a Leap Year : %d",n);
 }
 else
 {
  printf("Not a Leap Year");
 }
}
