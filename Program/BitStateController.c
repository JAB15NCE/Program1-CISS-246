/*
Jon Bennett
Description: This source file runs the user input and set the bits accordingly. Then runs a get bit to check and return the values of either "1" 
or "0" as a repesentaion of On(1) or Off(0) based on the bits current set back to the user.
Date: 10/09/2023
Specification: C programming
// "|=" to set bit
// "&=" to reset bit
*/

#include "BitStateController.h"
//This function runs the user input and based on what is entered sets the bitstates accordingly
void BitStateControllerSetBitState(BitStateControllerPtr bitStateControllerPtr, enum Bit bit, enum BitState bitState)
{  
	switch (bit)
    {
     case None:
        break;

    case Bit_1:
    if (bitState == On)
    {
        bitStateControllerPtr->bitStates |= BIT_ONE_BIT_MASK;
    }
    else
    {
        bitStateControllerPtr->bitStates &= ~BIT_ONE_BIT_MASK;
    }
     break;

       case Bit_2:
    if (bitState == On)
    {
        bitStateControllerPtr->bitStates |= BIT_TWO_BIT_MASK;
    }
    else
    {
        bitStateControllerPtr->bitStates &= ~BIT_TWO_BIT_MASK;
    }
     break;
        
    case Bit_3:
    if (bitState == On)
    {
        bitStateControllerPtr->bitStates |= BIT_THREE_BIT_MASK;
    }
    else
    {
        bitStateControllerPtr->bitStates &= ~BIT_THREE_BIT_MASK;
    }
     break;   
     
     case Bit_4:
    if (bitState == On)
    {
        bitStateControllerPtr->bitStates |= BIT_FOUR_BIT_MASK;
    }
    else
    {
        bitStateControllerPtr->bitStates &= ~BIT_FOUR_BIT_MASK;
    }
     break;   
     
     case Bit_5:
    if (bitState == On)
    {
        bitStateControllerPtr->bitStates |= BIT_FIVE_BIT_MASK;
    }
    else
    {
        bitStateControllerPtr->bitStates &= ~BIT_FIVE_BIT_MASK;
    }
     break;   
     
     case Bit_6:
    if (bitState == On)
    {
        bitStateControllerPtr->bitStates |= BIT_SIX_BIT_MASK;
    }
    else
    {
        bitStateControllerPtr->bitStates &= ~BIT_SIX_BIT_MASK;
    }
     break;   
     
     case Bit_7:
    if (bitState == On)
    {
        bitStateControllerPtr->bitStates |= BIT_SEVEN_BIT_MASK;
    }
    else
    {
        bitStateControllerPtr->bitStates &= ~BIT_SEVEN_BIT_MASK;
    }
     break;
    
    case Bit_8:
    if (bitState == On)
    {
        bitStateControllerPtr->bitStates |= BIT_EIGHT_BIT_MASK;
    }
    else
    {
        bitStateControllerPtr->bitStates &= ~BIT_EIGHT_BIT_MASK;
    }
     break;

    default:
    break;
    }
}
//This function grabs the bitstates and checks if they are on or off and 
//returns the value back to to the main function whether they are on or off. 
enum BitState BitStateControllerGetBitState(BitStateControllerPtr bitStateControllerPtr, enum Bit bit)
{
	enum BitState switchState = Off;

switch (bit)
{

case Bit_1:
    if ((bitStateControllerPtr->bitStates & BIT_ONE_BIT_MASK)!=0)
    {
    switchState = On;
    }
    else
    {
     switchState = Off;
    }
    break;

case Bit_2:
if ((bitStateControllerPtr->bitStates & BIT_TWO_BIT_MASK)!=0)
{
switchState = On;
}
else
{
switchState = Off;
}
break;

case Bit_3:
if ((bitStateControllerPtr->bitStates & BIT_THREE_BIT_MASK)!=0)
{
switchState = On;
}
else
{
switchState = Off;
}
break;

case Bit_4:
if ((bitStateControllerPtr->bitStates & BIT_FOUR_BIT_MASK)!=0)
{
switchState = On;
}
else
{
switchState = Off;
}
break;

case Bit_5:
if ((bitStateControllerPtr->bitStates & BIT_FIVE_BIT_MASK)!=0)
{
switchState = On;
}
else
{
switchState = Off;
}
break;

case Bit_6:
if ((bitStateControllerPtr->bitStates & BIT_SIX_BIT_MASK)!=0)
{
switchState = On;
}
else
{
switchState = Off;
}
break;

case Bit_7:
if ((bitStateControllerPtr->bitStates & BIT_SEVEN_BIT_MASK)!=0)
{
switchState = On;
}
else
{
switchState = Off;
}
break;

case Bit_8:
if ((bitStateControllerPtr->bitStates & BIT_EIGHT_BIT_MASK)!=0)
{
switchState = On;
}
else
{
switchState = Off;
}
break;
default:
    break;
}
	
	return switchState;
}