#include <iostream>
#include <iomanip>
using namespace std;

class WaterTank{
    private:
        int capacity, water_level;
        double percentage;
        void calculatePercentage(){
            percentage = (water_level * 100.00)  / capacity;
        }
    public:
        void setLevel(int c, int w){
            capacity = c;
            water_level = w;
        }
        void displayPercentage(){
            calculatePercentage();
            cout << fixed << setprecision(2);
            cout<<"Fill "<<percentage<<"%";
            if(percentage<25.00){
                cout<<"\nRefill required";
            }
        }
};

int main(){
    WaterTank watertank;
    int a, b;
    cout<<"Enter the tank capacity in litres: ";
    cin>>a;
    cout<<"\nEnter the current water level in litres: ";
    cin>>b;
    watertank.setLevel(a,b);
    watertank.displayPercentage();
}