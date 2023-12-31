#include<iostream>
using namespace std;

int main()
{
    int arr[] = {2,7,11,15};
    int target = 9;
    int i,j;
    for ( i = 0; i < 4; i++)
    {
        for ( j = 1; j < 4; j++)
        {
            if (arr[i]+arr[j]==target)
            {
                break;
            }
            
        }
    }
    cout<<i<<" "<<j;
    return 0;
    
}




#include<iostream>
using namespace std;

int main()
{
    int arr[] = {2, 7, 11, 15};
    int target = 9;
    int i, j;
    int n = 4; // size of the array

    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                break;
            }
        }
        if (j < n)
        {
            // If the target is found, break out of the outer loop as well
            break;
        }
    }

    cout << i << " " << j;
    return 0;
}
