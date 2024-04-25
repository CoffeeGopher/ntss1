// CS 356 NTSS 1c
// Alex Georgopoulos
// Last Modified: April 25, 2024

#include <cstdlib>
#include <iostream>
#include <vector>
#include "tradeShow.h"

using namespace std;

// Constructors

TradeShow::TradeShow(int ts_id)
{
    tsID = ts_id;
    name = "My Trade Show";
    date = "";
    numSeats = 0;
    hostID = 0;//User::getUserID(); // TODO implement User class
}

TradeShow::TradeShow(int ts_id, string ts_name, string ts_date, int num_seats)
{
    tsID = ts_id;
    name = ts_name;
    date = ts_date;
    numSeats = num_seats;
    hostID = 0;//User::getUserID(); // TODO implement User class
}

// Accessors

int TradeShow::getID() const
{
    return this->tsID;
}


string TradeShow::getName() const
{
    return this->name;
}

string TradeShow::getDate() const
{
    return this->date;
}

int TradeShow::getAvailableSeats() const
{
    return this->numSeats;
}

// Mutators

void TradeShow::setName(string ts_name)
{
    this->name = ts_name;
    return;
}

void TradeShow::setHost(int ts_hostID)
{
    this->hostID = ts_hostID;
    return;
}

void TradeShow::setDate(string ts_date)
{
    this->date = ts_date;
    return;
}

void TradeShow::addSpeaker(int speakerID)
{
    vector<int> speakers = this->speakerID;
    if (speakers.size() == speakers.max_size())
    {
        speakers.resize(speakers.size() * 2);
    }
    speakers.push_back(speakerID);
}

void TradeShow::deleteSpeaker(int speakerID)
{
    vector<int> speakers = this->speakerID;
    for(int i = 0; i < speakers.size(); i++)
    {
        if(speakers.at(i) == speakerID)
        {
            speakers.erase(speakers.begin() + i);
        }
        else
        {
            continue;
        }
    }
}

void TradeShow::addExhibit(int exhibitID)
{
    vector<int> exhibits = this->exhibitID;
    if (exhibits.size() == exhibits.max_size())
    {
        exhibits.resize(exhibits.size() * 2);
    }
    exhibits.push_back(exhibitID);
}

void TradeShow::deleteExhibit(int exhibitID)
{
    vector<int> exhibits = this->exhibitID;
    for(int i = 0; i < exhibits.size(); i++)
    {
        if(exhibits.at(i) == exhibitID)
        {
            exhibits.erase(exhibits.begin() + i);
        }
        else
        {
            continue;
        }
    }
}
