// CS 356 NTSS 1c
// Alex Georgopoulos
// Last Modified: April 23, 2024

#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

#ifndef TRADESHOW_H
#define TRADESHOW_H

class TradeShow
{
    public:
        // Constructors

        TradeShow(int ts_id);
        TradeShow(int ts_id, string ts_name, string ts_date, int num_seats);

        // Accessors

        int getID() const;
        string getName() const;
        string getDate() const;
        int getAvailableSeats() const;

        // Mutators

        void setName(string ts_name);
        void setHost(int hostID);
        void setDate(string ts_date);
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
        vector<int> speakerID;
        vector<int> exhibitID;
};

#endif //TRADESHOW_H