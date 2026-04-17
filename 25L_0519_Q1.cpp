# include <iostream>
# include <cstring>
using namespace std;

// base class 
class Trainer   {
    protected:
        string name;
        int age;
    public:
        // setters
        void setName(string);
        void setAge(int age);

        // helper
        void showInfo();
};

void Trainer :: setName(string name)  {
    this-> name = name;
    return;
}

void Trainer :: setAge(int age) {
    this->age = age;
    return;
}

void Trainer :: showInfo()  {
    cout << "Trainer Name: " << name << " | Trainer Age: " << age << endl;
    return;
}