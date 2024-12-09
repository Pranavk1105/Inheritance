#include <iostream>
using namespace std;
class vehicle {
    public:
    vehicle(){
        cout<<"This is Vehicle"<<endl;
    }
};

class Car : public vehicle{

};

int main() {
    Car obj;
    return 0;
}