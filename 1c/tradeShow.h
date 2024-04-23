// CS 356 NTSS 1c
// Alex Georgopoulos
// Last Modified: April 23, 2024

#include <cstdlib>
#include <iostream>

using namespace std;

#ifndef TRADESHOW_H
#define TRADESHOW_H

class TradeShow
{
    public:
        // Constructors

        TradeShow(int ts_id);
        TradeShow(int ts_id, string name, string date, int num_seats);

        // Accessors

        int getID() const;
        int getName() const;
        int getDate() const;
        int getAvailableSeats() const;

        // Mutators

        void setName(string name);
        void setHost(int hostID);
        void setDate(string date);
        void addSpeaker(int speakerID);
        void deleteSpeaker(int speakerID);
        void addExhibit(int exhibitID);
        void deleteExhibit(int exhibitID);
    
    private:
        int tsID;
        string name;
        string date;
        int numSeats;
        int hostID;
};

#endif //TRADESHOW_H