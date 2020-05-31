/*
Project 3 - Part 1d / 5
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

    The goal of this step is to get you to think about breaking down an object into smaller and smaller objects, 
    until the smallest object is made of up only C++ primitives. 

    Continuing the previous example:  Cell Phone

    A Cell Phone is made up of the following 5 properties/sub-objects and 3 actions:
        Display
        Memory
        CPU
        Radio
        Applications
    3 actions:
        make a call
        send a text
        run an application.

    These 5 properties can be broken down into their own sub-objects and properties. 

    If we break down the first property 'Display' into its 5 properties we get:
        brightness
        amount of power consumed.
        pixels
        width in cm
        height in cm

    the Display's brightness can be represented with a Primitive, such as a double. 

    The amount of power consumed can also be represented with a Primitive, such as a float or integer (i.e. 250mWa)
    
    The 'pixels' property must be represented with an array of Pixel instances, as the screen has more than 1 row of pixels.
        Arrays have not been discussed and can't be used in this project.
        Instead, we can use an Integer primitive to store the Number of Pixels:

    Display:
        Number of Pixels
        Amount of Power consumed (milliwatt-hours)
        Brightness
        width in cm
        height in cm
************************

1) Fill in #5 - #9 with plain-english UDTs for the 5 properties you created for UDT #10
    example: 
        If #10's first property was 'Engine', then your `Thing 5)` will be `Engine` and 
        you will need to provide 5 properties and 3 member functions of that Engine object in plain English
*/






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
