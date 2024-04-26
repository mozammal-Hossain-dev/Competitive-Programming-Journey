#include<iostream>
#include<vector>
using namespace std;


int fromTo(int start, int end)
{
    if(end-start+1 == 0)
      return 0;
    int givenAns;
    cout <<"? "<< end - start + 1 << " ";
    for(int i=start; i<=end; i++)
    cout<<i+1 << " ";

    cout<<endl<<flush;

    cin>>givenAns;

    return givenAns;
}



void solution()
{
    int n;
    cin >> n;
    vector<int>v(n,0),preSum(n,0),Sum(n,0);

    for(int i=0; i<n; i++)
    cin >> v[i];

    for(int i=1; i<n; i++)
    preSum[i] = v[i-1] + preSum[i-1];

    Sum[0] = v[0];

    for(int i=1; i<n; i++)
    Sum[i] = v[i] + Sum[i-1];

    int ans = 0;

    int start = 0, end = n-1, mid = n/2;

    int givenAns,correctLeftSum,correctRightSum, leftSum, rightSum;
       
       

        while(start < end)
        {
            mid = (end+start)/2;
            int leftSum = fromTo(start,mid);
            //int rightSum = fromTo(mid+1,end);
            correctLeftSum = Sum[mid] - preSum[start];
           // correctRightSum = Sum[end] - preSum[mid+1];

            //cout << "correctLeftAns " << correctLeftAns << "\tgivenAns " << leftAns << endl;
            //cout<<"\tcorrectRightAns " << correctRightAns << "\tgivenAns " << rightAns << endl;

            if(correctLeftSum != leftSum)
            {
                end = mid;
            }
            else
            {
                start = mid+1;
            }
           // cout << "start " << start << "\t" << "end " << end << endl;
        }

        cout << "! " << start+1 << endl<<flush;

}

int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        solution();
    }
}