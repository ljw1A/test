#include <bits/stdc++.h>
using namespace std;
class son{
  protected:
    int a;
    public:
    son(int x){
        a=x;
    }
    void show(){
        cout<<a<<endl;
    }
};

class father : public son{
    int b;
    public:
    father(int x,int y):son(x),b(y){}
    void show(){
        cout<<a<<" "<<b<<endl;
    }
};


int main() {
    father f(1,2);
    f.show();



    return 0;
}