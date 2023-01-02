#include <iostream>
using namespace std;
template< class t1,class t2>
class series{
    t1 data1;
    t2 data2;
    public:
      series(t1 a, t2 b){
        data1=a;
        data2=b;
      }
      void display(){
        cout<<"the vlaue of data1 is: "<<data1<<endl;
        cout<<"the vlaue of data2 is: "<<data2<<endl;
      }
};
int main() {
    series< int, float> o1(3,3.54);
    o1.display();
     series< char, double> o2('D',3.54995);
    o2.display();
     series< string, int> o3("Devesh",1);
    o3.display();
    return 0;
}