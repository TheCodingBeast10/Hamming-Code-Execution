#include <iostream>
using namespace std;
int main()
{
 int a0, a1, a2, a3, b0, b1, b2, b3, r0, r1, r2, s0, s1, s2, q0,q1, q2, l;
 cout << "Enter the value of a0, a1, a2 and a3 (bits) respectively: " << endl;
 cin>>a0>>a1>>a2>>a3;
 b0= a0;
 b1=a1;
 b2=a2;
 b3=a3;
 r0=(a0+a1+a2)%2;
 r1=(a1+a2+a3)%2;
 r2=(a0+a1+a3)%2;
 q0=r0;
 q1=r1;
 q2=r2;
 s0=(b0+b1+b2+q0)%2;
 s1=(b1+b2+b3+q1)%2;
 s2=(b1+b3+b0+q2)%2;
 cout<<"\nr0: "<<q0<<"\tr1: "<<q1<<"\tr2: "<<q2<<endl;
 cout<<"s0: "<<s0<<"\ts1: "<<s1<<"\ts2: "<<s2<<endl;
 if(s0==0 && s1==0 && s2==0)
 cout<<"No Error\n";
 cout<<"\nEnter the location: ";
 cin>>l;
 if(l==1)
 {
 if(b3==1)
 b3=0;
 else
 b3=1;
 }
 if(l==2)
 {
 if(b2==1)
 b2=0;
 else
 b2=1;
 }
 if(l==3)
 {
 if(b1==1)
 b1=0;
 else
 b1=1;
 }
 if(l==4)
 {
 if(b0==1)
 b0=0;
 else
 b0=1;
 }
 if(l==5)
 {
 if(q0==1)
 q0=0;
 else
 q0=1;
 }
 if(l==6)
 {
 if(q1==1)
 q1=0;
 else
 q1=1;
 }
 if(l==7)
 {
 if(q2==1)
 q2=0;
 else
 q2=1;
 }
 s0=(b0+b1+b2+q0)%2;
 s1=(b1+b2+b3+q1)%2;
 s2=(b1+b3+b0+q2)%2;
 cout<<"After fliping bits: \n\n";
 cout<<"s0: "<<s0<<"\ts1: "<<s1<<"\ts2: "<<s2<<endl;
 if(s0==0 && s1==0 && s2==1)
 {
 cout<<"Error at q0.";
 if(q2==1)
 q2=0;
 else
 q2=1;
 }
 else if(s0==0 && s1==1 && s2==0)
 {
 cout<<"Error at q1.";
 if(q1==1)
 q1=0;
 else
 q1=1;
 }
 else if(s0==0 && s1==1 && s2==1)
 {
 cout<<"Error at b2.";
 if(b2==1)
 b2=0;
 else
 b2=1;
 }
 if(s0==1 && s1==0 && s2==0)
 {
 cout<<"Error at q2.";
 if(q0==1)
 q0=0;
 else
 q0=1;
 }
 else if(s0==1 && s1==0 && s2==1)
 {
 cout<<"Error at b0.";
 if(b0==1)
 b0=0;
 else
 b0=1;
 }
 else if(s0==1 && s1==1 && s2==0)
 {
 cout<<"Error at b3.";
 if(b3==1)
 b3=0;
 else
 b3=1;
 }
 else if(s0==1 && s1==1 && s2==1)
 {
 cout<<"\Error at b1.";
 if(b1==1)
 b1=0;
 else
 b1=1;
 }
 cout<<endl<<"\nAFTER REMOVING ERROR:";
 cout<<"\na0,a1,a2,a3= "<<b0<<b1<<b2<<b3;
 cout<<"\nr0,r1,r2= "<<q0<<q1<<q2;
 return 0;
}

