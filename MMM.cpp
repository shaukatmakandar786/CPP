#include<iostream>
using namespace std;

void mean(int[],int);
void median(int[],int);
void mode(int[],int);
int main(int argc, char const *argv[])
{
    
    int nsize;
    cout<<"how many elemets you want to enter in array\n";
    cin>>nsize;

    int *a=new int[nsize];
    cout<<"enter "<<nsize<<" elements"<<endl;
    for(int i=0;i<nsize;i++)
    {
        cin>>*(a+i);
    }
    // mean(a,nsize);
    // median(a,nsize);
    mode(a,nsize);
    
    return 0;
}
void mean(int *a,int n)
{
    int sum=0;float meanvalue;
    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];        
    }
    meanvalue=sum/n;
    cout<<"mean value is "<<meanvalue<<endl;
}
void median(int *a,int n)
{
    int mid=0;
    float medianvalue=0;

    if(n%2==0)
    {
        int m=(n/2)-1;
        for(int i=0;i<n;i++)
        {
            if(m==i||m+1==i)
            {
                mid=mid+a[i];
            }
        }
        mid=mid/2;
        cout<<"median valus is "<<mid<<endl;
    }
    else{
        int m=(n/2);
        for(int i=0;i<n;i++)
        {
            if(m==i)
            {
                mid=a[i];
            }
        }
        cout<<"median valus is "<<mid<<endl;
    }

}

void mode(int *a,int n)
{
    int current_count,max_count=0,k=0;
    int mod[10];

    for(int i=0;i<=n-2;i++)
    {
        current_count=0;
        for(int j=1+i;j<=n-1;j++)
        {
            if(a[i]==a[j])
            {
                current_count++;
            }
    
        }
        if(current_count>max_count)
        {
            
            max_count=current_count;
            mod[k]=a[i];
        }
        else if(current_count==max_count)
        {
            k++;
            mod[k]=a[i];
        }
    }
    if(max_count==0)
    {
        cout<<"there is no mode\n";
    }
    else
    {
        cout<<"mode value:\n";
        for(int i=0;i<=k;i++)
        {
            cout<<mod[i]<<" ";
        }
    }
}
