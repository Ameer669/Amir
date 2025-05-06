#include <iostream>
#include <string>

using namespace std;

class employee {
    protected:
        string name;
        int number;
    public:
        employee(string n =" ", int no = 0){
            name = n;
            number = no;
        }
        void getdata(){
            cout<<"Enter The name: "<<name;
            cin>>name;
            cout<<"Enter The number: "<<number;
            cin>>number;
        }
        void showdata(){
            cout<<"\n--Name: "<<name<<"\nNumber: "<<number<<endl;
        }
};

class manager : public employee{
    private:
        string title;
        double dues;
    public:
        manager(string n = " ", int no = 0, string ti= " ", double du = 0.0) : employee(n,no){
            title = ti;
            dues = du;
        }
        void getdata(){
            employee::getdata();
            cout<<"Enter The title: "<<title;
            cin>>title;
            cout<<"Enter The dues: "<<dues;
            cin>>dues;
        }
        void showdata(){
            employee::showdata();
            cout<<"title: "<<title<<"\ndues: "<<dues<<endl;
        }
};
class scientist : public employee{
    private:
        int pubs;
    public:
        scientist(string n = " ", int no = 0, int pu = 0) : employee(n,no){
            pubs = pu;
        }
        void getdata(){
            employee::getdata();
            cout<<"Enter The pubs: "<<pubs;
            cin>>pubs;
        }
        void showdata(){
            employee::showdata();
            cout<<"publications: "<<pubs<<endl;
        }
};

int main(){
    manager man;
    man.showdata();
    manager man2("Amir", 123, "King", 500.0);
    man2.showdata();
    return 0;
}