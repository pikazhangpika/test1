#include<iostream.h>
#include<stdlib.h>
#define AMOUNT 1000
 
int main()
{
    long int arr[AMOUNT];
    long int arrCopy[AMOUNT];
    long int max[AMOUNT];
    int i,j;
    int n;
    int start,rear;     //������Ŀ�ʼ������
    int mount=AMOUNT;
    for(i=0;i<mount;i++)
    {
    try
    {
            n=rand()%2;
            if(n==0)
        {
        arr[i]=rand();
        arrCopy[i]=arr[i];
        max[i]=arr[i];
        }
        else
        {
        arr[i]=-rand();
        arrCopy[i]=arr[i];
        max[i]=arr[i];
        }
    }
    catch(long int e)
    {
        cout<<"Long Inter=ger Exception!"<<endl;
    }
    }
    cout<<"Array :"<<endl;
    for(i=0;i<mount;i++)
    {
        cout<<arr[i]<<"  ";
    if((i+1)%10==0)
    {
        cout<<endl;
    }
    }
    for(j=0;j<mount-1;j++)
    {
        for(i=j+1;i<mount;i++)
        {
            try
        {  
        arr[j]=arr[j]+arr[i];
        if(max[j]<arr[j])
        {
            max[j]=arr[j];
            rear=i+1;
        }
            }
        catch(long int e)
        {
        cout<<"Long Inter=ger Exception!"<<endl;
        }
        }
    }
    for(i=0;i<mount;i++)
    {
        if(max[0]<max[i])
    {
            max[0]=max[i];
        start=i+1;
    }  
    }
    cout<<endl;
    cout<<"�ӵ�"<<start<<"����"<<arrCopy[start-1]<<"��ʼ"<<endl;
    cout<<"����"<<rear<<"����"<<arrCopy[rear-1]<<"����"<<endl;
    cout<<"������͵����ֵΪ: "<<max[0]<<endl;
    return 0;
}