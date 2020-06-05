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


    int currentSong = 0;
    bool playingSong = false;
    std::string memberNames;
    int numberOfMembers;
    int totalTourDistance = 0;

    void moveToNextSong();
    void playSong();
    void goToGig(int);
};

void Band::moveToNextSong()
{
    currentSong += 1;
}

void Band::playSong()
{
    playingSong = true;
}

void Band::goToGig(int howFar = 10)
{
    totalTourDistance += howFar;
}

//==============================================================================
struct WashingMachine
{
    int temperature;
    int spinSpeed;
    int washTime;
    bool locked = false;
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
    temperature += howHot;
}

void WashingMachine::lockDoor()
{
    locked = true;
}

//==============================================================================
struct Turntable
{
    char cartType;
    char chassisMaterial;
    int RGB;
    int speed;
    bool stylusOn = false;
    bool lightOn = false;

    void spinPlatter(int);
    void switchlightOn();
    void lowerStylus();
};

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
    

    void moveForwards(int);
    void slowDown(int);
    void changeGearUp(int);
};

void Bike::moveForwards(int howFar = 10)
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
}

//==============================================================================
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
    struct Gears
    {
        int numberOfGears;
        int currentGear = 1;
        char gearMaterial;
        int gearDiameter;

        void gearUp();
        void gearDown();
    };

    std::string driveTrainMaterial = "steel";
    bool trainTurning;

    void turnChain();
};

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
    
    void clutchUp(int);
    void steer(int);
    void lightsUp(int);
    
};

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

    void increaseRPM(int);
    void makeNoise(int);
    void heatUp(int);
};

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

    void switchColour();
    void switchType();
    void increaseCargo(int);
};

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
    std::cout << "good to go!" << std::endl;
}
