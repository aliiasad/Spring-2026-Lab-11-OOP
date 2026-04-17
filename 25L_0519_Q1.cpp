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
class ProfessorTrainer : public Trainer, public Professor {
    private:
        string researchArea;
    public:
        // setter
        void setResearch(string);

        // helper
        void showInfo();
};

void ProfessorTrainer :: setResearch(string researchArea)  {
    this->researchArea = researchArea;
    return;
}

void ProfessorTrainer :: showInfo() {
    Trainer :: showInfo();
    showProfessorInfo();
    cout << "Research Area: " << researchArea << endl;
    return;
}

// base class for hierarchy
class Pokemon {
    protected:
        string name;
        int level;
    public:
        void setPokemon(string, int);

        void showInfo() {
            cout << "Pokemon: " << name << " | Level: " << level << endl;
    }
};

void Pokemon :: setPokemon(string name, int level) {
    this->name = name;
    this->level = level;
    return;
}

void Pokemon :: showInfo() {
    cout << "Pokemon: " << name << " | Level: " << level << endl;
    return;
}

// derived #1: fire
class FirePokemon : public Pokemon {
    private:
        int flamePower;
    public:
        // setter
        void setFlamePower(int);

        // helper
        void showInfo();
};

void FirePokemon :: setFlamePower(int flamePower) {
    this->flamePower = flamePower;
    return;
}

void FirePokemon :: showInfo() {
    Pokemon :: showInfo();
    cout << "Type: Fire | Flame Power: " << flamePower << endl;
    return;
}

// derived #2: water
class WaterPokemon : public Pokemon {
    private:
        int waterPressure;
    public:
        // setter
        void setWaterPressure(int);

        // helper
        void showInfo();
};

void WaterPokemon :: setWaterPressure(int waterPressure) { 
    this->waterPressure = waterPressure; 
    return;
}

void WaterPokemon :: showInfo() {
    Pokemon :: showInfo();
    cout << "Type: Water | Water Pressure: " << waterPressure << endl;
    return;
}

// derived #3: electrical
class ElectricPokemon : public Pokemon {
    private:
        int voltage;
    public:
        void setVoltage(int);
            void showInfo() {
            Pokemon::showInfo();
            cout << "Type: Electric | Voltage: " << voltage << endl;
        }
};

void ElectricPokemon :: setVoltage(int voltage) { 
    this->voltage = voltage;
    return;
}

void ElectricPokemon :: showInfo() {
    Pokemon :: showInfo();
    cout << "Type: Electric | Voltage: " << voltage << endl;
    return;
}

// derived #4: grass
class GrassPokemon : public Pokemon {
    int growthRate;
public:
    // setter
    void setGrowthRate(int);

    // helper
    void showInfo();
};

void GrassPokemon :: setGrowthRate(int growthRate) { 
    this->growthRate = growthRate; 
    return;
}

void GrassPokemon :: showInfo() {
    Pokemon :: showInfo();
    cout << "Type: Grass | Growth Rate: " << growthRate << endl;
    return;
}