#include <iostream>
using namespace std;

class Asset{
    protected: 
        string AssetId;
    public:
        void setAssetId(string s){
            AssetId = s;
        }
};

class Cylinder : public Asset{
    private:
        int capacity;
    public:
        void setCapacity(int c){
            capacity = c;
        }
        void display(){
            cout<<"Asset "<<this->AssetId<<" | Capacity "<<this->capacity<<" L";
        }
};

int main(){
    Cylinder c;
    string s1, s2;
    cout<<"Enter the asset ID: ";
    cin>>s1;
    cout<<"Enter the capacity in litres: ";
    cin>>s2;
    c.setAssetId(s1);
    c.setCapacity(stoi(s2));

    cout<<endl;;
    c.display();
}