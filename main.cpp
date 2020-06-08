/*
 Project 3 - Part 3 / 5
 video: Chapter 2 - Part 8
 Constructors tasks

 Create a branch named Part3

 On this new branch:

 1) Add a constructor for each User-Defined-Type.
 
 2) amend some of your UDT's member functions to print out something interesting via std::cout
 
 3) Instantiate 1 or 2 instances of each of your user-defined types in the main() function

 4) call some of your UDT's amended member functions in main().
 
 5) add some std::cout statements in main() that print out your UDT's member variable values or values returned from your UDT member functions (if they return values)
 
 After you finish defining each type/function:
 click the [run] button.  Clear up any errors or warnings as best you can.
 
 example:
 */

#include <iostream>
namespace Example 
{
struct UDT  // my user defined type named 'UDT'
{
    int a; //a member variable
    UDT();              //1) the constructor
    void printThing();  //the member function
};

//the function definitions are outside of the class
UDT::UDT()
{
    a = 0;
}

void UDT::printThing()
{
    std::cout << "UDT::printThing() " << a << std::endl;  //2) printing out something interesting
}

int main()
{
    UDT foo;              //3) instantiating a UDT named 'foo' in main()
    foo.printThing();     //4) calling a member function of the UDT instance.
    
    //5) a std::cout statement accessing foo's member variable.
    //It also demonstrates a 'ternary expression', which is syntactic shorthand for an 'if/else' expression
    std::cout << "Is foo's member var 'a' equal to 0? " << (foo.a == 0 ? "Yes" : "No") << "\n";
    
    return 0;
}
} //end namespace Example

//insert Example::main() into main() of user's repo.




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

Band::Band()
{
    currentSong = 0;
}

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
    void spinDrum(int);
    void heatWater(int);
    void lockDoor();
};

WashingMachine::WashingMachine()
{
    std::cout << "I hope you like your new washing machine!" << std::endl;
}

void WashingMachine::spinDrum(int howFast)
{
    howFast = 100;
    std::cout << "Spinning at " << howFast << "RPM!" << std::endl;
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

InstrumentCluster::InstrumentCluster()
{
    speed = miles = fuel = time = RPM = 0;
}

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

Handlebars::Handlebars()
{
    clutch = headLights = acceleration = steeringAngle = 0;
}

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
    myWash.spinDrum(100);
    
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
