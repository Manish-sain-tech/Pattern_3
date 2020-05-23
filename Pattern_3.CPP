#include<conio.h>
#include<iostream.h>
void main()
{
int n,i,l,j,k=-1;
cout<<"enter:";
cin>>n;
for(i=0;i<n;i++)
{
cout<<endl;
k=k+2;
l=k;
for(j=0;j<n;j++)
{
if(l>=10)
{
l=l%10;
cout<<l;
}
else
{
cout<<l;
}
l=l+2;
}
}
getch();
}