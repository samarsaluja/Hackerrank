#include<iostream>

    using namespace std;

    int main()

        {
                int hh,mm,ss; char t,w;

            cin>>hh>>w>>mm>>w>>ss>>t;
        if(t=='P')

            {
            if(hh<12){hh+=12;}
        }
        if(t=='A'){
        if(hh==12)
            {hh=0;}
        }
        if(hh<10){cout<<"0";cout<<hh;}
        if(hh>10){cout<<hh;}
        cout<<":";
        if(mm<10){cout<<"0";cout<<mm;}
        if(mm>10){cout<<mm;}
        cout<<":";
        if(ss<10){cout<<"0";cout<<ss;}
        if(ss>10){cout<<ss;}
    }
