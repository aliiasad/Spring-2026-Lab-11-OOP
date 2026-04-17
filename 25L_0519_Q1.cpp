//Asad Ali
//25L-0519

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

        // destructor
        ~Trainer();
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

Trainer :: ~Trainer() {
    cout << "Trainer " << name << " destroyed" << endl << endl;
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

        // dstructor
        ~GymTrainer();
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

GymTrainer :: ~GymTrainer() {
    cout << "GymTrainer " << name << " destroyed" << endl << endl;
}

class GymLeader : public GymTrainer {
    protected:
        string badgeReward;
    public:
        // setter
        void setBadge(string);

        // helper
        void showInfo();

        // destructor
        ~GymLeader();
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

GymLeader :: ~GymLeader() {
    cout << "GymLeader " << name << " destroyed" << endl << endl;
}

// indp class for multiple inheritance
class Professor {
    protected:
        string field;
        string profName;
    public:
        // setter
        void setField(string);
        void setProfName(string);

        // helper
        void showProfessorInfo();

        // destructor
        ~Professor();
};

void Professor :: setProfName(string profName) {
    this->profName = profName;
    return;
}

void Professor :: setField(string field) { 
    this->field = field;
    return;
}

void Professor :: showProfessorInfo() {
    cout << "Field: " << field << endl;
    return;
}

Professor :: ~Professor() {
    cout << "Professor " << profName << " destroyed" << endl << endl;
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

        // destructor
         ~ProfessorTrainer();
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

ProfessorTrainer :: ~ProfessorTrainer() {
    cout << "ProfessorTrainer " << name << " destroyed" << endl << endl;
}

// base class for hierarchy
class Pokemon {
    protected:
        string name;
        int level;
    public:
        // setter
        void setPokemon(string, int);

        // helper
        void showInfo();

        // destructor
        ~Pokemon();
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

Pokemon ::  ~Pokemon() {
    cout << "Pokemon " << name << " destroyed" << endl << endl;
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

        // destructor
        ~FirePokemon();
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

FirePokemon :: ~FirePokemon() {
    cout << "FirePokemon " << name << " destroyed" << endl << endl;
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

        // destructor
        ~WaterPokemon();
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

WaterPokemon :: ~WaterPokemon() {
    cout << "WaterPokemon " << name << " destroyed" << endl << endl;
}

// derived #3: electrical
class ElectricPokemon : public Pokemon {
    private:
        int voltage;
    public:
        // setter
        void setVoltage(int);
         
        // helper
        void showInfo();

        // destructor
        ~ElectricPokemon();
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

ElectricPokemon :: ~ElectricPokemon() {
    cout << "ElectricPokemon " << name << " destroyed" << endl << endl;
}

// derived #4: grass
class GrassPokemon : public Pokemon {
    int growthRate;
public:
    // setter
    void setGrowthRate(int);

    // helper
    void showInfo();

    // destructor
    ~GrassPokemon();
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

GrassPokemon :: ~GrassPokemon() {
    cout << "GrassPokemon " << name << " destroyed" << endl << endl;
}

class FlyingPokemon : public Pokemon {
    private:
        int flightSpeed;
    public:
        // setter
        void setFlightSpeed(int);

        // helper
        void showInfo();

        // destructor
        ~FlyingPokemon();
};

void FlyingPokemon :: setFlightSpeed(int flightSpeed)   {
    this->flightSpeed = flightSpeed;
    return;
}

void FlyingPokemon :: showInfo() {
    Pokemon::showInfo();
    cout << "Type: Flying | Flight Speed: " << flightSpeed << endl;
    return;
}

FlyingPokemon :: ~FlyingPokemon() {
    cout << "FlyingPokemon " << name << " destroyed" << endl << endl;
}

// standalone/indp class
class Badge {
    private:
        int badgeID;
        string badgeInfo;
    public:
        // setter
        void setBadge(int, string);

        // helper
        void showBadge();

        // destructor
        ~Badge();
};

void Badge :: setBadge(int badgeID, string badgeInfo) {
    this->badgeID = badgeID;
    this->badgeInfo = badgeInfo;
    return;
}

void Badge :: showBadge() {
    cout << "Badge ID: " << badgeID << " | " << badgeInfo << endl;
    return;
}

Badge :: ~Badge() {
    cout << "Badge " << badgeInfo << " destroyed" << endl << endl;
}

int main() {
    // cout << "   OBSERVATION TASK" << endl;

    // // base class Pokemon
    // cout << "\n--- Base Class Pokemon ---" << endl;
    // Pokemon eevee;
    // eevee.setPokemon("Eevee", 5);
    // eevee.showInfo();  // only prints name and level

    // // Derived Pokemons 
    // cout << "\n--- Derived Pokemon Types ---" << endl;

    // FirePokemon charizard;
    // charizard.setPokemon("Charizard", 36);
    // charizard.setFlamePower(120);
    // cout << "\nCalling showInfo() on FirePokemon:" << endl;
    // charizard.showInfo();  // prints name, level AND flamePower

    // WaterPokemon squirtle;
    // squirtle.setPokemon("Squirtle", 8);
    // squirtle.setWaterPressure(80);
    // cout << "\nCalling showInfo() on WaterPokemon:" << endl;
    // squirtle.showInfo();  // prints name, level AND waterPressure

    // ElectricPokemon pikachu;
    // pikachu.setPokemon("Pikachu", 10);
    // pikachu.setVoltage(90);
    // cout << "\nCalling showInfo() on ElectricPokemon:" << endl;
    // pikachu.showInfo();  // prints name, level AND voltage

    // GrassPokemon bulbasaur;
    // bulbasaur.setPokemon("Bulbasaur", 8);
    // bulbasaur.setGrowthRate(70);
    // cout << "\nCalling showInfo() on GrassPokemon:" << endl;
    // bulbasaur.showInfo();  // prints name, level AND growthRate

    // FlyingPokemon pidgeotto;
    // pidgeotto.setPokemon("Pidgeotto", 18);
    // pidgeotto.setFlightSpeed(85);
    // cout << "\nCalling showInfo() on FlyingPokemon:" << endl;
    // pidgeotto.showInfo();  // prints name, level AND flightSpeed

    // cout << "\n\n\nOBSERVATION: Same function showInfo() behaves differently in each class! This is METHOD OVERRIDING. " << endl;


    // Trainers
    cout << "---TRAINERS---" << endl;
    Trainer t1, t2, t3;
    t1.setName("Ash Ketchum"); 
    t1.setAge(15); t1.showInfo(); 
    cout << endl;

    t2.setName("Misty");       
    t2.setAge(16); 
    t2.showInfo(); 
    cout << endl;

    t3.setName("Gary Oak");    
    t3.setAge(16); 
    t3.showInfo(); 
    cout << endl;

    // Gym Trainers
    cout << "---GYM TRAINERS ---" << endl;
    GymTrainer gt1, gt2;

    gt1.setName("Daisy");
    gt1.setAge(18);
    gt1.setGym("Cerulean Gym");
    gt1.setType("Water");
    gt1.showInfo();
    cout << endl;

    gt2.setName("Flint");
    gt2.setAge(22);
    gt2.setGym("Cinnabar Gym");
    gt2.setType("Fire");
    gt2.showInfo(); 
    cout << endl;

    // Gym Leaders
    cout << "---GYM LEADERS---" << endl;
    GymLeader gl1, gl2;

    gl1.setName("Brock");
    gl1.setAge(20);
    gl1.setGym("Pewter Gym");
    gl1.setType("Rock");
    gl1.setBadge("Boulder Badge");
    gl1.showInfo();
    cout << endl;

    gl2.setName("Lt. Surge");
    gl2.setAge(25);
    gl2.setGym("Vermilion Gym");
    gl2.setType("Electric");
    gl2.setBadge("Thunder Badge");
    gl2.showInfo();
    cout << endl;

    // Professor
    cout << "---PROFESSOR---" << endl;
    Professor prof1;

    prof1.setProfName("Professor Oak");
    prof1.setField("Pokemon Evolution");
    prof1.showProfessorInfo(); 
    cout << endl;

    // ProfessorTrainer
    cout << "---PROFESSOR TRAINER---" << endl;
    ProfessorTrainer pt1;

    pt1.setName("Professor Willow");  // Trainer's name
    pt1.setAge(35);
    pt1.setField("Pokemon Behavior");
    pt1.setResearch("Field Research");
    pt1.showInfo(); 
    cout << endl;

    // Base Pokemon
    cout << "---BASE POKEMON---" << endl;
    Pokemon eevee;

    eevee.setPokemon("Eevee", 5);
    eevee.showInfo();
    cout << endl;

    // Derived Pokemon
    cout << "----DERIVED POKEMON---" << endl;
    ElectricPokemon pikachu;

    pikachu.setPokemon("Pikachu", 10);
    pikachu.setVoltage(90);
    pikachu.showInfo();
    cout << endl;

    FirePokemon charizard;

    charizard.setPokemon("Charizard", 36);
    charizard.setFlamePower(120);
    charizard.showInfo(); 
    cout << endl;

    WaterPokemon squirtle;

    squirtle.setPokemon("Squirtle", 8);
    squirtle.setWaterPressure(80);
    squirtle.showInfo();
    cout << endl;

    GrassPokemon bulbasaur;

    bulbasaur.setPokemon("Bulbasaur", 8);
    bulbasaur.setGrowthRate(70);
    bulbasaur.showInfo();
    cout << endl;

    FlyingPokemon pidgeotto;

    pidgeotto.setPokemon("Pidgeotto", 18);
    pidgeotto.setFlightSpeed(85);
    pidgeotto.showInfo();
    cout << endl;

    // Badges
    cout << "---BADGES---" << endl;
    Badge b1, b2, b3;

    b1.setBadge(101, "Thunder Badge"); 
    b1.showBadge();
    b2.setBadge(102, "Cascade Badge"); 
    b2.showBadge();
    b3.setBadge(103, "Boulder Badge"); 
    b3.showBadge();

    return 0;
}