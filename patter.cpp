#include"iostream"
using namespace std;

void patterpint(int n, int k)
 {
     for(int i=0;i<n;i++){
         for (int j = 0; j < n; j++)
         {
             if (((i+j) % k) ==1)
             {
                 cout<<"*\t";
             }
             else{
                 cout<<"O\t";
             }
         
         }
     cout<<endl;
     }
 }
 int main()
{
    int n=5;
    int k=2;
    
    patterpint(n,k);
    return 0;
}