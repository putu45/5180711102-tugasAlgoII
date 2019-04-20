#include<iostream>
using namespace std;

int data[10];
int n;

void tukar(int a, int b)
{
int t;
t=data[b];
data[b]=data[a];
data[a]=t;
}

 main()
{
int pos,i,j;

cout<<"-------------------------------------------------"<<endl;
cout<<"SELECTION SORT DESCENDING"<<endl;
cout<<"-------------------------------------------------"<<endl;
cout<<"INPUTKAN BANYAK DATA = ";
cin>>n;
cout<<"-------------------------------------------------"<<endl;

for(int i=0;i<n;i++)
{
cout<<"INPUTKAN DATA KE-"<<(i+1)<<" = " ;
cin>>data[i];
}
cout<<"-------------------------------------------------"<<endl;
cout<<"DATA YANG DIINPUTKAN :"<<endl;
for(i=0;i<n;i++)
{
cout<<data[i]<<" ";
}
cout<<endl<<"-------------------------------------------------"<<endl;

for(i=0;i<n-1;i++)
{
pos=i;
for(j=i+1;j<n;j++)
{
if(data[j]>data[pos])pos=j;
}
if(pos!=i) tukar(pos,i);
}

cout<<"DATA YANG TELAH DIURUTKAN SECARA DESCENDING : "<<endl;
for(int i=0;i<n;i++)
{
cout<<data[i]<<" ";
}
cout<<endl;

cout<<"-------------------------------------------------"<<endl;
cout<<"SELECTION SORT SELESAI !"<<endl;
cout<<"-------------------------------------------------"<<endl;

}

