// find missing numbers in sorted array

#include<iostream>
#include<string.h>
using namespace std;


int main(int argc, char const *argv[])
{
        int missingArray[]={1,2,4,5,6,8};

        int n=sizeof(missingArray)/sizeof(missingArray[0]);

        int i=0,k=1;
        while (i<n)
        {
            if(missingArray[i]==k)
            {
                i++;
                k++;
            }
            else 
            {
               cout<<"The value of "<<k<<" is missing. \n";
               k++;
            }
            
            
        }     
    return 0;
}

// The value of 3 is missing. 
// The value of 7 is missing.
