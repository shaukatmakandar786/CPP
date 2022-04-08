#include<iostream>

using namespace std;

void quick_sort(int[],int,int);
int main()
{

    int nsize;
    cout<<"how many no you want to enter\n";
    cin>>nsize;
    int *a= new int[nsize];

    cout<<"enter "<<nsize<<" numbers\n";
    for(int i=0;i<nsize;i++)
    {
        cin>>a[i];
    }
    cout<<"display numbers before sorting\n";
    for(int i=0;i<nsize;i++)
    {
        cout<<a[i]<<endl;
    }
    quick_sort(a,0,nsize-1);
    cout<<"display numbers after sorting\n";
    for(int i=0;i<nsize;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}
void quick_sort(int a[],int f,int l)
{
    int i,j,p,t;
    if(f<l)
    {
        p=a[f];
        i=f+1;
        j=l;

        while (i<=j)
        {
            while (p>a[i])
            {
                i++;
            }
            while (p<a[j])
            {
                j--;
            }
            if(i<=j)
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
            
        }
        a[f]=a[j];
        a[j]=p;
        quick_sort(a,f,j-1);
        quick_sort(a,j+1,l);

    }

}
