#include <bits/stdc++.h>
using namespace std;

class demo {
    int val;
    public:
    void getInput(){
        cin>>val;
    }
    void printInput(){
        cout<<val<<endl;
    }
    
    demo operator+(demo bb){
        demo cc;
        cc.val = val + bb.val;
        return cc;
    }
    
};

int main() {
    
    demo aa, bb, cc;
    aa.getInput();
    bb.getInput();
    cc = aa + bb; // is can invoke out constructor and aa is work as a reffernce and we pass bb as a params 
    
    aa.printInput();
    bb.printInput();
    cc.printInput();
    
    return 0;
}
