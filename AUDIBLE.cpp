#include <iostream>
using namespace std;

void range(){
    int x;
    cin>>x;
    if(x>=67 && x<=45000){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}

void test(){
    int t;
    cin>>t;
    while(t--){
        range();
    }
}

int main() {
    test();
	return 0;
}
