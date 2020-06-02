/*
Project 3 - Part 1e / 5
Video:  Chapter 2 Part 5
User-Defined Types

Continue your work on branch Part1

Purpose: The entire purpose of this 5-part project is to get you writing C++ code that compiles and to 
reinforce the syntax habits that C++ requires.  
What you create in this project will be used as the basis of Project 5 in the course.   

************************
Part1 purpose:  Learn to write UDTs

You are going to write 10 UDTs in project3.  
    Part 1a: you will learn to think about an object in terms of its sub-objects.
    Part 1b: you will write 4 un-related UDTs in plain english
    Part 1c: you will write 1 UDT in plain english that will be made of 5 related sub-objects
    Part 1d: you will write plain-english UDTs for the 5 sub-objects that form the UDT defined in Part 1c
    Part 1e: you will convert those 10 plain-english UDTs into code that runs.
************************

Convert your 10 Plain-english UDTs into code.

I recommend compiling after finishing each one and making sure it compiles 
without errors or warnings before moving on to writing the next UDT. 

1) define an empty struct for each of your 10 types. i.e.:
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

Thing 10) motorbike
5 properties:
    1) engine
    2) handlebars
    3) instrument cluster
    4) fairing
    5) transmission
3 things it can do:
    1) Speed up
    2) Slow down
    3) Turn



2) Copy your 5 properties & 3 actions into the empty struct body.
    - comment them out.
    
3) declare your member variables and member functions underneath each plain-english comment in your struct's body.
    - give the member variables relevant data types
 
4) make the function parameter list for those member functions use some of your User-Defined Types
    - You'll write definitions/implementations for these functions in Project3 Part2
    - you'll call each of these functions in Project3 part3
 
5) make 2 of the 10 user-defined types have a nested class.  
    - this nested class also needs 5 properties and 3 actions.
    - these nested classes are not considered one of your 10 UDTs.
    - this nested class must be related to the class it is nested inside
 
6) your 10th UDT's properties should be instances of your #5-#9 UDTs.   
    - No primitives allowed!
 
7) After you finish defining each type, click the [run] button.  
    Clear up any errors or warnings as best you can. 
 */

/*
 example:  

Thing: Car Wash   
    5 properties:
        - number of vacuum cleaners
        - number of eco-friendly cleaning supplies
        - stores the amount of water used per week.
        - stores amount of profit made per week
        - number of cars serviced per day
    3 things it can do:
        - wash and wax car
        - charge customer
        - detail the car interior
 */

#include <iostream>
#include <string>

struct CarWash //                                   1) define an empty struct for each of your 10 types.       
{
    //number of vacuum cleaners                     2) copied and commented-out plain-english property
    int numVacuumCleaners = 3; //                   3) member variables with relevant data types.
    //number of eco-friendly cleaning supplies      
    int numEcoFriendlyCleaningSupplies = 20;     
    //stores the amount of water used per week.     
    float waterUsedPerWeek = 200.f;            
    //stores amount of profit made per week         
    float profitPerWeek = 495.95f;               
    //number of cars serviced per day               
    int numberOfCarsServiced = 10;               
    
    struct Car //5)                                 Note that the nested type 'Car' is related to the 'CarWash' 
    {
        //2) member variables with relevant data types.  the names are appropriate for the U.D.T.'s purpose.
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        //3) a member function whose parameter has a default value.
        //the parameter name is related to the work the function will perform.
        void fillTank(double fuelAmountInGallons = 2.0);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips);
    };

    //wash and wax car
    void washAndWaxCar( Car car ); //4) a member function whose parameter is a UDT.
    //charge customer
    float chargeCustomer(float discountPercentage);
    //detail the car interior
    void detailInterior( Car car );
    
    //5) a member variable whose type is a UDT.
    Car carBeingServiced;  
};


/*
Thing 1) band
5 properties: 
    1) Number of instruments
    2) Names of instruments
    3) names of members
    4) number of members
    5) tour dates
3 things it can do:
    1) Set up instruments on stage
    2) Play together
    3) drink beer
 */

/*
Thing 2) washing machine
5 properties:
    1) temperature setting
    2) spin speed setting
    3) wash cycle duration
    4) drum diameter
    5) colour
3 things it can do:
    1) spin the drum
    2) heat water
    3) lock the door
 */

/*
Thing 3) turntable
5 properties:
    1) cartridge type
    2) chassis material
    3) colour 
    4) spin speed
    5) arm length
3 things it can do:
    1) spin
    2) switch target light on
    3) lower stylus
 */

/*
Thing 4) bike
5 properties:
    1) tyre width
    2) frame material
    3) seat height
    4) handlebar style
    5) pedal type
3 things it can do:
    1) go forwards
    2) turn
    3) change gear
 */

/*
Thing 5)
5 properties: engine
    1) Fuel consumption per mile
    2) Fuel type
    3) Cooling type
    4) Cylinder configuration
    5) Strokes
3 things it can do:
    1) Increase RPM
    2) Make noise
    3) Heat up
 */

/*
Thing 6)
5 properties: Handlebars
    1) Clutch
    2) Steering
    3) Headlights
    4) Acceleration
    5) Brake
3 things it can do:
    1) Apply brake pads
    2) Steer the front wheel
    3) Accelerate the engine
 */

/*
Thing 7)
5 properties: instrument cluster
    1) Speedometer
    2) RPM indicator
    3) Miloemeter
    4) Fuel gauge
    5) Date/Time
3 things it can do:
    1) Show speed in real-time
    2) Show miles travelled
    3) Show remaining fuel in tank
 */

/*
Thing 8)
5 properties: fairing
    1) Material
    2) Position on the body
    3) Style
    4) Colour
    5) Thickness
3 things it can do:
    1) Increase speed
    2) Lower fuel consumption
    3) Add cargo space
 */

/*
Thing 9)
5 properties: transmission
    1) Number of gears
    2) Number of teeth on gears
    3) Gear material
    4) Gear diameter
    5) Drivetrain material
3 things it can do:
    1) Turn wheels forwards
    2) Shift up a gear
    3) Shift down a gear
 */

/*

Thing 10) motorbike
5 properties:
    1) engine
    2) handlebars
    3) instrument cluster
    4) fairing
    5) transmission
3 things it can do:
    1) Speed up
    2) Slow down
    3) Turn



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
