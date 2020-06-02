

#include <string>

struct CellPhone
{

};

struct Band
{


    int numInstruments;
    std::string instrumentNames;
    std::string memberNames;
    int numberOfMembers;
    int tourDates;

    void setUp();
    void play();
    void drink();  
};

struct WashingMachine
{
    int temperature;
    int spinSpeed;
    int washTime;
    float drumDiameter;
    int RGB;

    void spinDrum();
    void heatWater();
    void lockDoor();

};

struct Turntable
{
    char cartType;
    char chassisMaterial;
    int RGB;
    int speed;
    int armLength;

    void spinPlatter(int RPM);
    void lightOn();
    void lowerStylus();
};

struct Bike
{
    float tyreWidth;
    char frameMaterial;
    float seatHeight;
    char handlebarStyle;
    char pedalType;

    void moveForwards(int howFar, int speed);
    void turn(int angle, bool clockwise);
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


#include <iostream>
#include <string>

struct CarWash 
{
   
    int numVacuumCleaners = 3;     
    int numEcoFriendlyCleaningSupplies = 20;     
    float waterUsedPerWeek = 200.f;                  
    float profitPerWeek = 495.95f;                           
    int numberOfCarsServiced = 10;               
    
    struct Car
    {
        
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        
        void fillTank(double fuelAmountInGallons = 2.0);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips);
    };

    
    void washAndWaxCar( Car car );
    float chargeCustomer(float discountPercentage);
    void detailInterior( Car car );
    
    Car carBeingServiced;  
};



#include <iostream>

struct Person
{
    int age;
    int height;
    float hairLength;
    float GPA
}

















int main()
{
    std::cout << "good to go!" << std::endl;
}
