#include <bits/stdc++.h>

using namespace std;

int getTotalX(vector < int > a, vector < int > b){
    // Complete this function
    int max,min;
    int count=0;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    if(a[0]<b[0]){min=a[0];}
    else{min=b[0];}
    if(a[a.size()-1]>b[b.size()-1]){max=a[a.size()-1];}
        else{max=b[b.size()-1];}
    int base,base1,c=0;
    int k[100000];
                for(int i=min;i<=max;i++){
                   for(int p=0;p<a.size();p++){
                       if(i%a[p]==0){base++;}
                   }
                    if(base==a.size()){k[c]=i;
                                      c++;
                                      }
                    base=0;}
        for(int i=0;i<c;i++){
                for(int p=0;p<b.size();p++){
                    if(b[p]%k[i]==0){
                            base1++;
                    }
                }
            if(base1==b.size()){count++;}
            base1=0;
        }
    return count;

}

int main() {
    int n;
    int m;
    cin >> n >> m;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    vector<int> b(m);
    for(int b_i = 0; b_i < m; b_i++){
       cin >> b[b_i];
    }
    int total = getTotalX(a, b);
    cout << total << endl;
    return 0;
}
