#include <iostream>
#include <string>
using namespace std;

class ToolBooth{
public:
    ToolBooth(){
        total_cars=0;
        total_amount=0;
    }
    void Pay(){
        total_cars=total_cars+1;
        total_amount=total_amount+150.50;

    }
    void noPay(){
        total_cars=total_cars+1;
    }

    void disp()
    {
      cout<<"amount of fare obtained"<<endl;
      cout<<total_amount<<endl;
      cout<<"number of passing cars"<<endl;
      cout<<total_cars<<endl;
        }
private:

    double total_amount;
    int total_cars;

      };
    int main()
      {
      ToolBooth car1;
      char info;
      cout<<"What info is required"<<endl;
      cout<<"p for paying cars"<<endl;
      cout<<"n for non paying cars"<<endl;
      cout<<"q for display the collected information"<<endl;
      cout<<"t to quit"<<endl;
      while(true){
        std::cin>>info;
        if(info=='p'){
          car1.Pay();
        }
        else if(info=='n'){
          car1.noPay();
        }
        else if(info=='q'){
          car1.disp();
          }
        else if(info=='t'){
            break;
          }
      }
      return 0;
    }
