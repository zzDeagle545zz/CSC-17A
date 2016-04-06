/* 
 * File:   Client.h
 * Author: rcc
 *
 * Created on April 6, 2016, 11:03 AM
 */


#ifndef CLIENT_H
#define	CLIENT_H
#include <string>
struct Client{
    char name[20]; //Name of Account holder
    char adrs[20]; //Address of Account Holder
    short aNum;  //Account Number
    int Blnc;    //Balance at Beginning of Month
    int wTol;    //Total of all Checks written this month(Withdraws)
    int dTol;    //Total amount of Deposits
};

#endif	/* CLIENT_H */

