#include <iostream>
using namespace std;

struct Array
{
    // int *A;
    int A[20];
    int size;
    int length;
};

void Display(struct Array *arr)
{
    int i = 0;
    for (; i < arr->length; i++)
    {
        cout << arr->A[i] << "  ";
    }
}

int Get(struct Array *arr, int index)
{
    if (index >= 0 && index < arr->length)
        return arr->A[index];
    return -1;
}

// Replace
int Set(struct Array *arr, int x, int index)
{
    if (index >= 0 && index < arr->length)
        return arr->A[index] = x;
    return -1;
}

int Max(struct Array *arr)
{
    int max = arr->A[0];
    for (int i = 1; i < arr->length; i++)
    {
        if (max < arr->A[i])
            max=arr->A[i];
    }
    return max;
}

int Min(struct Array *arr)
{
    int min=arr->A[0];
    for(int i=1;i<arr->length;i++)
    {
        if(min>arr->A[i])
            min=arr->A[i];
    }
    return min;
}

int Sum(struct Array *arr)
{
    int sum=0;
    for(int i=0;i<arr->length;i++)
        sum+=arr->A[i];
    return sum;
}

int RecurrsiveSum(struct Array *arr, int n)
{
    if(n<0)
        return 0;
    return RecurrsiveSum(arr, n-1)+arr->A[n];
}

double Avg(struct Array *arr)
{
    double sum=0;
    for(int i=0;i<arr->length;i++)
        sum+=arr->A[i];
    return sum/(arr->length);
}

int main()
{
    struct Array arr = {{8, 3, 23, 34, 5, 32, 54, 1, 23, 43}, 20, 10};
    /*
    struct Array arr;
    cout<<"Enter the size of array : ";
    cin>>arr.size;
    arr.A=new int[arr.size];
    cout<<"Enter the number element you want to enter in array : ";
    cin>>arr.length;
    int i=0;
    for(int i=0;i<arr.length;i++)
    cin>>arr.A[i];
    */

    Display(&arr);
    cout << endl;
    cout << "Get fun " << Get(&arr, 3) << endl;
    cout << "Set/Replace fun " << Set(&arr, 100, 5) << endl;
    cout<<"Max fun "<<Max(&arr)<<endl;
    cout<<"Min fun "<<Min(&arr)<<endl;
    cout<<"Sum fun "<<Sum(&arr)<<endl;
    cout<<"Avg fun "<<Avg(&arr)<<endl;
    cout<<"Recurrsive sum fun "<<RecurrsiveSum(&arr,arr.length)<<endl;
    Display(&arr);

    return 0;
}