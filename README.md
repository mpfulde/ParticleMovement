# Particle Movement
A library that allows for the basic movement of a particle on a 2 dimensional plane

## General plan for project
Create a particle
* Defined by its starting coordinate

Define restrictions of the particle
* Measurement System
* Max Velocity 
* Max Acceleration (0 = constant velocity)
* Max Jerk (0 = constant acceleration)
* Type of Path follower 

Will be taken from user input
* Must account for invalid input

Define a path for the particle to move along
* Prompt for number of points
* Prompt user to select each point
  * Example 
  * ```c
    Please enter point #1 (x, y, θ): 2.0, 7.1, 0.0 ```

Will be taken from user input
* Must account for invalid input

Update position of particle based on Path follower
 * Calculate velocity
 * Run Particle Movement Update
 * Display Current Position and Velocity

## Bonus items, if time allows

### Add proper visualization
* Ncurses library (very restrictive)
* Unreal or some other graphics processing

### Projectile in 2d space (not path or position based)
* Firing particles/pellets/arrows
* Object knock-back
  * Potentially useful if wanted to make a game

### Handle more complex options
* Objects with two movement options (for exampel a cart with pure linear movement)
* A car like object (rotational front and velocity accumulates in the back)
* Omni-directional objects (4+ points of omni directional movement)

### Move beyond 2 dimensional objects
* a particle moving in 3 dimensions
* more complex mechanisms?

## [Testing](./test)
Uses Google Test for the testing Framework

For more specifics behind the test case click [here](./test/testREADME.md)

# Objects Within Project
## [Particle](./src/particle/Particle.h)
A particle in the context of this project is something that occupies a single coordinate space. That is to say a particle has no dimension outside a single coordinate.

important features of a particle:
* Current coordinate the particle is occupying
* Movement System
* Path Follower

## [Coordinate](./src/Coordinate.h)
A container containing an X Y value of the same type 
* X is gettable and settable
* Y is gettable and settable

### [Point]()
A point in this context is a Coordinate that has extra data. Points are used in defining paths 

Contains a direction
* Can be taken as degrees or radians
* Gettable and Settable in both units

Contains a speed
* Desired speed at point
* Gettable and Settable
* **NOTE:** This is desired speed, actually speed may not be accurate
  * Depends on the path follower

## [Movement System](./src/physics/MovementSystem.h)
#### Abstract class!!!
Defines a generic movement system. 

Every movement system can do:
* Define what units the system uses
  * Inches per second
  * Meters per second
  * Feet per second
* Set Max Velocity/Accel/Jerk
* Get Max Velocity/Accel/Jerk
* Get Current Jerk (constant)

Every movement system does (but differently per system):
* Select path follower (different per object)
* Move the object a set distance
* Move an object to a set velocity
* Get Current Velocity/Acceleration

### [Particle Movement System](./src/physics/ParticleMovementSystem.h)
Specific movement system for the defined particle

Select Path Follower:
* Bang Bang
* PIDF Controller
* Pure Pursuit Controller

Move to a set distance
* Run path follower's update to distance
  * Works for all types of path followers
* For the velocity based following increase and decrease velocity as seen fit

Moving to a set velocity
* Throw error if using Pure Pursuit
* Update until at a certain velocity
* Holds velocity once reached until changed by another call

Getting Current Velocity/Acceleration:
* Velocity
  * Grab var (if max accel does not equal 0)
  * Calculate based on error and dt (if max accel = 0)
* Acceleration
  * Grab variable (does not accumulate if constant so safe to grab)

## Path Followers
Abstract path follower. 
Each path follower can:
* Calculate next step (or steps) to reach setpoint
  * Different for each path follower
  * Takes current position (for error calculation)
* Check if on target
  * Is at setpoint within a certain tolerance 

### Bang Bang
* Keep increasing velocity until reaching setpoint
* If go over setpoint backup at same rate until reaching setpoint
* repeat process until setpoint is reached (within threshold)

### PIDF Controller
* For more information click [here](https://en.wikipedia.org/wiki/PID_controller)
* Position based controller
* Velocity based controller

### Pure Pursuit
* Predictive pathing (most useful for more complex paths)
  * Calculates next X (configurable) points based on current error and setpoint
  * Might be slightly complex for a particle
    * Used more in modeling autonomous cars
    * More information can be found [here](https://thomasfermi.github.io/Algorithms-for-Automated-Driving/Control/PurePursuit.html)
* Not compatible with set to velocity

![PurePursuit](https://mathworld.wolfram.com/images/gifs/purscir3.gif)

### Potentially more options
Goal is to play around with different mathematical approaches to this problem.

As such potentially more suitable solutions can be reached.