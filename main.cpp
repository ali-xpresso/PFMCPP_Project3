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





 /*
 2) provide implementations for the member functions you declared in your 10 user-defined types from the previous video outside of your UDT definitions.
    If you decide to write empty functions, you will need to fill them in with code in part 3.
 
 3) be sure to write the correct full qualified name for the nested type's member functions.
 
 4) After you finish defining each type/function, click the [run] button.  Clear up any errors or warnings as best you can.
 */


#include <string>

struct CellPhone
{

};

struct Band
{

    //1) Number of instruments
    int numInstruments;
    //2) Names of instruments (six instruments)
    std::string instrumentNames;
    //3) names of members (six members)
    std::string memberNames[5];
    //4) number of members
    int numberOfMembers;
    //5) tour dates
    int tourDates;
    //1) Set up instruments on stage
    void setUp();
    //2) Play together
    void play();
    //3) drink beer
    void drink();  
};

struct WashingMachine
{
    //1) temperature setting
    int temperature;
    //2) spin speed setting
    int spinSpeed;
    //3) wash cycle duration
    int washTime;
    //4) drum diameter
    float drumDiameter;
    //5) colour
    int RGB;
    //1) spin the drum
    void spinDrum();
    //2) heat water
    void heatWater();
    //3) lock the door
    void lockDoor();

};

struct Turntable
{
    //1) cartridge type
    char cartType;
    //2) chassis material
    char chassisMaterial;
    //3) colour
    int RGB;
    //4) spin speed
    int speed;
    //5) arm length
    int armLength;
    //1) spin
    void spinPlatter(int RPM);
    //2) switch target light on
    void lightOn();
    //3) lower stylus
    void lowerStylus();
};

struct Bike
{
    //1) tyre width
    float tyreWidth;
    //2) frame material
    char frameMaterial;
    //3) seat height
    float seatHeight;
    //4) handlebar style
    char handlebarStyle;
    //5) pedal type
    char pedalType;
    //1) go forwards
    void moveForwards(int howFar, int speed);
    //2) turn
    void turn(int angle, bool clockwise);
    //3) change gear
    void changeGear(int gear);
};

struct InstrumentCluster
{
    int speed;
    int RPM;
    int miles;
    int fuel;
    int time;

    int showSpeed();
    int showRPM();
    int showMiles();
    int showFuel();
    int showTime();
};

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

struct Handlebars
{
    int clutch;
    int steeringAngle;
    int headLights;
    int acceleration;
    int brake;
    
    void applyClutch(int howMuch);
    void steer(int angle);
    void lightsUp(int howMuch);
    void accelerationAdjust(int howMuch);
    void brakeAdjust(int howMuch);
};

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

    void increaseRPM(int RPM);
    void makeNoise(int volume);
    void heatUp(int temp);
};

struct Fairing
{
    int material;
    int bodyConfig;
    int style;
    int colour;
    int thickness;

    void increaseSpeed(float speedRatio);
    void fuelEconomy(float fuelRatio);
    void increaseCargo(int addedCargo);
};

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

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
}
