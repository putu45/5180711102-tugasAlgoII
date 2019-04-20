#include <iostream>
using namespace std;
int mod(int a, int b)
{        if (b==0) 
			
			return(a);
			
        else  if (a<b) return(mod(b,a));
          
		  else return(mod(a-b, b));
}
int main()
{        int a,b;
          cout<<"masukkan angka pertama : ";
          cin>>a;
          cout<<"masukkan angka kedua : ";
          cin>>b;
          cout<<"sisa hasil baginya : "<<mod(a,b)<<endl;
          return 0;      }
