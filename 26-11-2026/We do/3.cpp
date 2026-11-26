#include <iostream>
using namespace std;

class Announcement{
    public:
        void show(){
            cout<<"\nGeneral announcement";
        }
};

class SportsAnnouncement : public Announcement{
    public:
        void show(){
            cout<<"\nSports annoucement";
        }
};

int main(){
    int choice;
    cout<<"1. General announcement\n2. Sports announcement\n3. General through sports object\nEnter choice: ";
    cin>>choice;
    if(choice==1){
        Announcement obj;
        obj.show();
    }
    else if (choice ==2){
        SportsAnnouncement obj;
        obj.show();
    }
    else if (choice ==3){
        SportsAnnouncement obj;
        // obj.Announcement::show(); //works too
        Announcement obj2;
        obj2 = obj;
        obj2.show();
    }
}