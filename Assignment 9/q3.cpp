#include <iostream>
using namespace std;

int sequenceofzeroandone(int arr[], int n)
{
    int countzero = 0, countone = 0, seqcount = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            countzero++;
        }

        else
        {
            countone++;
        }

        if (countone == countzero)
        {
            seqcount = i + 1;
        }
    }
    return seqcount;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    cout << "Enter the Elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = sequenceofzeroandone(arr, n);
    cout << ans;

    return 0;
}