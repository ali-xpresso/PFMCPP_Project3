
 /*
 Project 3 - Part 2 / 5
 Video: Chapter 2 Part 6
 Implementations tasks
 
Create a branch named Part2

 0) delete all of the plain english pseudo-code you added in Part1.
   don't forget to remove the blank lines left behind after you remove your comments
   - you should be left with only your UDTs.
 
 1) write the definition for the Type that leftFoot and rightFoot are instantiations of.
    don't forget to define and implement the member functions 'stepForward()' and 'stepSize()'
    you should be able to deduce the return type of those functions based on their usage in Person::run()
    You'll need to insert the Person struct from the video in the space below.
 */

struct Foot
{
    int stepSize();
    void stepForward();
};

int Foot::stepSize()
{
    return 5;
}

void Foot::stepForward()
{
    
}

struct Person
{
    int age;
    int height;
    float hairLength;
    float GPA;
    unsigned int SATScore;
    int distanceTravelled;
    Foot leftFoot;
    Foot rightFoot;

    void run(int, bool);

};

void Person::run(int howFast = 10, bool startWithLeftFoot = true)
{
    if (startWithLeftFoot)
    {
        distanceTravelled += Person::leftFoot.stepSize() * howFast + Person::rightFoot.stepSize()* howFast;
    }
    else 
    {
        distanceTravelled += Person::rightFoot.stepSize() * howFast + Person::leftFoot.stepSize()* howFast;
    }
}

 /*
 2) provide implementations for the member functions you declared in your 10 user-defined types from the previous video outside of your UDT definitions.
    If you decide to write empty functions, you will need to fill them in with code in part 3.
 
 3) be sure to write the correct full qualified name for the nested type's member functions.
 
 4) After you finish defining each type/function, click the [run] button.  Clear up any errors or warnings as best you can.
 */

#include <string>
#include <iostream>

struct CellPhone
{

};

struct Band
{


    int numInstruments;
    std::string instrumentNames;
    std::string memberNames;
    int numberOfMembers;
    int totalTourDistance = 0;

    void tuneUp();
    void playSong();
    void goToGig(int);
};

void Band::tuneUp()
{

}

void Band::playSong()
{
    
}

void Band::goToGig(int howFar = 10)
{
    Band::totalTourDistance += howFar;
}

struct WashingMachine
{
    int temperature;
    int spinSpeed;
    int washTime;
    float drumDiameter;
    int RGB;

    void spinDrum(int);
    void heatWater(int);
    void lockDoor();
};

void WashingMachine::spinDrum(int howFast)
{
    howFast = 0;
}

void WashingMachine::heatWater(int howHot = 60)
{
    WashingMachine::temperature += howHot;
}

void WashingMachine::lockDoor()
{
    
}

struct Turntable
{
    char cartType;
    char chassisMaterial;
    int RGB;
    int speed;
    int armLength;

    void spinPlatter(int);
    void lightOn();
    void lowerStylus();
};

void Turntable::spinPlatter(int RPM = 45)
{
    speed += RPM;
}

void Turntable::lightOn()
{
    
}

void Turntable::lowerStylus()
{
    
}

struct Bike
{
    int currentGear;
    char frameMaterial;
    float seatHeight;
    int distanceTravelled;
    char pedalType;

    void moveForwards(int, int);
    void turn();
    void changeGearUp(int);
};

void Bike::moveForwards(int howFar = 10, int speed = 1)
{
    Bike::distanceTravelled += howFar * speed;
}

void Bike::turn()
{

}

void Bike::changeGearUp(int gearup = 1)
{
    Bike::currentGear += gearup;
}

struct InstrumentCluster
{
    int speed;
    int miles;
    int fuel;
    int time;
    int RPM;

    int showSpeed();
    int showRPM();
    int showMiles();
};

int InstrumentCluster::showSpeed()
{
    return InstrumentCluster::speed;
}

int InstrumentCluster::showRPM()
{
    return InstrumentCluster::RPM;
}

int InstrumentCluster::showMiles()
{
    return InstrumentCluster::miles;
}

struct Transmission
{
    struct Gears
    {
        int numberOfGears;
        int numberOfGearTeeth;
        char gearMaterial;
        int gearDiameter;

        void gearUp();
        void gearDown();
    };

    char driveTrainMaterial;

    void turnChain();
};

void Transmission::Gears::gearUp()
{

}

void Transmission::Gears::gearDown()
{
    
}

void Transmission::turnChain()
{

}

struct Handlebars
{
    int clutch;
    int steeringAngle;
    int headLights;
    int acceleration;
    int brake;
    
    void applyClutch(int);
    void steer();
    void lightsUp(int);
    
};

void Handlebars::applyClutch(int howMuch = 1)
{
    Handlebars::clutch += howMuch;
}

void Handlebars::steer()
{

}

void Handlebars::lightsUp(int howMuch)
{
    Handlebars::headLights += howMuch;
}

struct Engine
{
    struct Cyclinders
    {
        int cc;
        int strokes;    
    };

    float fuelPerMile;
    int fuelType;
    int coolingType;
    int noise;
    int temperature;
    int RPM;

    void increaseRPM(int);
    void makeNoise(int);
    void heatUp(int);
};

void Engine::increaseRPM(int howMuch)
{
    Engine::RPM += howMuch;
}

void Engine::makeNoise(int volume)
{
    Engine::noise += volume;
}

void Engine::heatUp(int temp)
{
    Engine::temperature += temp;
}

struct Fairing
{
    int material;
    int bodyConfig;
    int style;
    int colour;
    int thickness;

    void increaseSpeed();
    void fuelEconomy();
    void increaseCargo();
};

void Fairing::increaseSpeed()
{

}

void Fairing::fuelEconomy()
{

}

void Fairing::increaseCargo()
{

}

struct Motorbike
{
    Engine motoEngine;
    Handlebars motoHandlebars;
    Transmission motoTransmission;
    InstrumentCluster motoCluster;
    Fairing motoFairing;

    void speedUp();
    void slowDown();
    void turn();

};

void Motorbike::speedUp()
{

}

void Motorbike::slowDown()
{
    
}

void Motorbike::turn()
{
    
}



/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */


int main()
{
    std::cout << "good to go!" << std::endl;
}
