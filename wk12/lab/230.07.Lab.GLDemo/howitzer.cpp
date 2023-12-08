/***********************************************************************
 * Source File:
 *    Howitzer : The representation of the Howitzer on the screen.
 * Author:
 *    Jarom & Steven
 * Summary:
 *    Everything we need to know about the howitzer.
 ************************************************************************/

#pragma once

#include <iostream>
#include "howitzer.h"
#include "velocity.h"
#include "uiInteract.h"

#define ONE_DEGREE 1.0
#define ONE_HALF_DEGREE 0.5


// Constructors

/***************************************
 * Default Constructor
 ***************************************/
Howitzer::Howitzer()
    : muzzleVelocity(827.0)
{
    
}   

/***************************************
 * NON-Default Constructor
 ***************************************/
Howitzer::Howitzer() // I'm not sure what to do for the non-default constructor
{
}

/***************************************
 * DRAW
 ***************************************/
void Howitzer::draw(ogstream& gout, double flightTime)
{
    gout.drawHowitzer(position, 2, flightTime);
}

/***************************************
 * Generate Position
 ***************************************/
void Howitzer::generatePosition(double size)
{

}

/***************************************
 * ROTATE RIGHT
 * Moves the Howitzer by a large amount.
 ***************************************/
void Howitzer::rotateRight()
{
    elevation += ONE_DEGREE;
}

/***************************************
 * ROTATE LEFT
 * Moves the Howitzer by a large amount.
 ***************************************/
void Howitzer::rotateLeft()
{
    elevation -= ONE_DEGREE;
}
/***************************************
 * RAISE UP
 * Moves the Howitzer by a little.
 ***************************************/
void Howitzer::raiseUp()
{
	// move by a little
    elevation += ONE_HALF_DEGREE;
}

/***************************************
 * RAISE DOWN
 * Moves the Howitzer by a little.
 ***************************************/
void Howitzer::raiseDown()
{
    // move by a little
    elevation -= ONE_HALF_DEGREE;
}

// Getters

/***************************************
 * GET POSITION
 ***************************************/
double Howitzer::getPosition()
{

}

/***************************************
 * GET MUZZLE VELOCITY
 ***************************************/
Velocity Howitzer::getMuzzleVelocity()
{

}