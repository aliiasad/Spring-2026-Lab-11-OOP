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

// derived class on level 2
class GymTrainer : public Trainer {
    protected:
        string gymName;
        string specialtyType;
    public:
        // setters
        void setGym(string);
        void setType(string);

        // helper
        void showInfo();
};

void GymTrainer :: setGym(string gymName)   {
    this->gymName = gymName;
    return;
}

void GymTrainer :: setType(string specialtyType)    {
    this->specialtyType = specialtyType;
    return;
}

void GymTrainer :: showInfo() {
    Trainer :: showInfo(); // call parent's showInfo, method overriding
    cout << "Gym: " << gymName << endl;
    cout << "Type: " << specialtyType << endl;
    return;
}

class GymLeader : public GymTrainer {
    protected:
        string badgeReward;
    public:
        // setter
        void setBadge(string);

        // helper
        void showInfo();
};

void GymLeader :: setBadge(string badgeReward)  {
    this->badgeReward = badgeReward;
    return;
}

void GymLeader :: showInfo() {
    GymTrainer :: showInfo(); // calls GymTrainer which calls Trainer
    cout << "Badge Reward: " << badgeReward << endl;
    return;
}

// indp class for multiple inheritance
class Professor {
    protected:
        string field;
    public:
        // setter
        void setField(string);

        // helper
        void showProfessorInfo();
};

void Professor :: setField(string field) { 
    this->field = field;
    return;
}

void Professor :: showProfessorInfo() {
    cout << "Field: " << field << endl;
    return;
}

// multiple inheritance ---> (base trainer) & (indp profesor) = ProfessiorTrainer
class ProfessorTrainer : public Trainer , public Professor {
    private:
    public:
};