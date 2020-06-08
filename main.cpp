/*
 Project 3 - Part 4 / 5
 video: Chapter 2 - Part 9
 Member initialization tasks

 Create a branch named Part4
 
 1) initialize some of your member variables either in-class or in the Constructor member initializer list.

 2) make some of your member functions use those initialized member variables via std::cout statements.
 
 3) click the [run] button.  Clear up any errors or warnings as best you can.
 */

#include <iostream>
namespace Example 
{
struct UDT  
{
    int a; //a member variable
    float b { 2.f }; //3) in-class initialization
    UDT() : a(0) { } //3) 'constructor-initializer-list' member variable initialization
    void printThing()  //the member function
    {
        std::cout << "UDT::printThing() a:" << a << " b: " << b << std::endl;  //4) printing out something interesting
    }
};

int main()
{
    UDT foo; //instantiating a Foo in main()
    foo.printThing(); //calling a member function of the instance that was instantiated.
    return 0;
}
}

//call Example::main()

#include <string>
#include <iostream>

struct CellPhone
{

};

//==============================================================================
struct Band
{


    int currentSong;
    bool playingSong = false;
    std::string songNames = "Cissy Strut, Everyday People, Alone Again Or";
    int numberOfMembers;
    int totalTourDistance = 0;

    Band();
    void moveToNextSong();
    void playSong();
    void goToGig(int);
};

Band::Band() : currentSong(0){}

void Band::moveToNextSong()
{
    currentSong += 1;
}

void Band::playSong()
{
    playingSong = true;
    std::cout << "Playing: "<< songNames << std::endl;;
}

void Band::goToGig(int howFar = 10)
{
    totalTourDistance += howFar;
}

//==============================================================================
struct WashingMachine
{
    int temperature = 0;
    int spinSpeed;
    int washTime;
    bool locked = false;
    int RGB;

    WashingMachine();
    void spinDrum();
    void heatWater(int);
    void lockDoor();
};

WashingMachine::WashingMachine() : spinSpeed(120), washTime(0)
{
    std::cout << "I hope you like your new washing machine!" << std::endl;
}

void WashingMachine::spinDrum()
{
    
    std::cout << "Spinning at " << spinSpeed << "RPM!" << std::endl;
}

void WashingMachine::heatWater(int howHot = 60)
{
    temperature += howHot;
}

void WashingMachine::lockDoor()
{
    locked = true;
}

//==============================================================================
struct Turntable
{
    std::string cartType;
    char chassisMaterial;
    int RGB;
    int speed;
    bool stylusOn = false;
    bool lightOn = false;
    Turntable();

    void spinPlatter(int);
    void switchlightOn();
    void lowerStylus();
};

Turntable::Turntable()
{
    speed = 0;
}

void Turntable::spinPlatter(int RPM = 45)
{
    speed += RPM;
}

void Turntable::switchlightOn()
{
    lightOn = true;
}

void Turntable::lowerStylus()
{
    stylusOn = true;
}

//==============================================================================
struct Bike
{
    int currentGear;
    char frameMaterial;
    float seatHeight;
    int distanceTravelled;
    int speed = 1;
    
    Bike();
    void moveForwards(int);
    void slowDown(int);
    void changeGearUp(int);
};

Bike::Bike()
{
    currentGear = 1;
}

void Bike::moveForwards(int howFar)
{
    distanceTravelled += howFar * speed;
}

void Bike::slowDown(int howMuch = -10)
{
    speed += howMuch;
}

void Bike::changeGearUp(int gearup = 1)
{
    currentGear += gearup;
    std::cout << "Going up a gear." << std::endl;

}

//==============================================================================
struct InstrumentCluster
{
    int speed;
    int miles;
    int fuel;
    int time;
    int RPM;

    InstrumentCluster();
    int showSpeed();
    int showRPM();
    int showMiles();

};

InstrumentCluster::InstrumentCluster() : speed(0), miles(0), fuel(0), time(0), RPM(0){}

int InstrumentCluster::showSpeed()
{
    return speed;
}

int InstrumentCluster::showRPM()
{
    return RPM;
}

int InstrumentCluster::showMiles()
{
    return miles;
}

//==============================================================================
struct Transmission
{
    Transmission();
    struct Gears
    {
        int numberOfGears;
        int currentGear;
        char gearMaterial;
        int gearDiameter;

        void gearUp();
        void gearDown();
    };

    std::string driveTrainMaterial = "steel";
    bool trainTurning;

    void turnChain();
};

Transmission::Transmission()
{
    trainTurning = false;
}

void Transmission::Gears::gearUp()
{
    currentGear += 1;
}

void Transmission::Gears::gearDown()
{
    currentGear += -1;
}

void Transmission::turnChain()
{
    trainTurning =  true;
}

//==============================================================================
struct Handlebars
{
    int clutch;
    int steeringAngle;
    int headLights;
    int acceleration;
    
    Handlebars();
    void clutchUp(int);
    void steer(int);
    void lightsUp(int);
    
};

Handlebars::Handlebars() : clutch(0), steeringAngle(0), headLights(0), acceleration(0){}

void Handlebars::clutchUp(int howMuch = 10)
{
     clutch += howMuch;
}

void Handlebars::steer(int angleChange = 20)
{
    steeringAngle += angleChange;
}

void Handlebars::lightsUp(int howMuch)
{
    headLights += howMuch;
}

//==============================================================================
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

    Engine();
    void increaseRPM(int);
    void makeNoise(int);
    void heatUp(int);
};

Engine::Engine()
{
    noise = fuelType = RPM = 0;
}

void Engine::increaseRPM(int howMuch = 10)
{
    RPM += howMuch;
}

void Engine::makeNoise(int volume)
{
    noise += volume;
}

void Engine::heatUp(int temp)
{
    temperature += temp;
}

//==============================================================================
struct Fairing
{
    int material;
    int bodyConfig;
    int cargoCapacity;
    int colour;
    int thickness;

    Fairing();
    void switchColour();
    void switchType();
    void increaseCargo(int);
};

Fairing::Fairing()
{
    std::cout << "Your new motorbike has fairing, just to let you know" << std::endl;
}

void Fairing::switchType()
{
    bodyConfig += 1;
}

void Fairing::switchColour()
{
    bodyConfig += 1;
}

void Fairing::increaseCargo(int howMuch = 10)
{
    cargoCapacity += howMuch;
}

struct Motorbike
{
    Engine motoEngine;
    Handlebars motoHandlebars;
    Transmission motoTransmission;
    InstrumentCluster motoCluster;
    Fairing motoFairing;

    void speedUp();
    void lights();
    void turn();

};

void Motorbike::speedUp()
{
    motoEngine.increaseRPM();
}

void Motorbike::lights()
{
    motoHandlebars.lightsUp(10);
}

void Motorbike::turn()
{
    motoHandlebars.steer();
}

//==============================================================================


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
    Example::main();

//======================================================
    Band myBand;
    Band yourBand;

    myBand.playSong();

//======================================================

    WashingMachine myWash;
    myWash.spinDrum();
    
//======================================================

    Turntable thorens;
    Turntable technics;
    thorens.cartType = "Moving magnet";
    std::cout << thorens.cartType << std::endl; 
    technics.switchlightOn();

//======================================================

    Bike roadbike;
    Bike mountain;
    roadbike.changeGearUp(1);
    mountain.moveForwards(10);

//======================================================

    Motorbike harley;
    Motorbike enfield;

    std::cout << "Harley speed at: " << harley.motoCluster.showSpeed() << std::endl;
    enfield.motoFairing.cargoCapacity = 50;
    enfield.motoFairing.increaseCargo(50);
    std::cout << "Cargo capacity of the enfield: " << enfield.motoFairing.cargoCapacity << std::endl;

//======================================================



    std::cout << "good to go!" << std::endl;
}
