#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    int k;
    cin >> n >> k;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    int i,j,count=0;
    for(i=0;i<n;i++)
    {for(j=0;j<n;j++)
        {
        if(i<j)
            {if((a[i]+a[j])%k==0)
            {count++;}
            }
    }
    }

    cout<<count;
    return 0;
}
