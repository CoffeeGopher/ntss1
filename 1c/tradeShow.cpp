// CS 356 NTSS 1c
// Alex Georgopoulos
// Last Modified: April 23, 2024

#include <cstdlib>
#include <iostream>
#include "tradeShow.h"

using namespace std;

// Constructors

TradeShow::TradeShow(int ts_id)
{
    tsID = ts_id;
    name = "My Trade Show";
    date = NULL;
    numSeats = NULL;
    hostID = User::getUserID();
    int speakerID[1] = {};
    int exhibitID[1] = {};
}

TradeShow::TradeShow(int ts_id, string ts_name, string ts_date, int num_seats)
{
    int tsID = ts_id;
    string name = ts_name;
    string date = ts_date;
    int numSeats = num_seats;
    int hostID = User::getUserID();
    int speakerID[1] = {};
    int exhibitID[1] = {};
}

// Accessors

int TradeShow::getID() const
{
    return this->tsID;
}

// Mutators
