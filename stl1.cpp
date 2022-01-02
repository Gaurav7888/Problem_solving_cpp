#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{

    int test;
    cin>>test;
    int n,m;
    

    while(test)
    {       
        cin>>n>>m;
        vector<int> A(n,0);
        vector<int> B(m,0);
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        for(int j=0;j<m;j++){
            cin>>B[j];
        }

        sort(A.begin(),A.end());
        for(int i=0;i<m;i++){
            if(binary_search(A.begin(),A.end(),B[i])){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }

        


        test--;
    }

    



    return 0;
}