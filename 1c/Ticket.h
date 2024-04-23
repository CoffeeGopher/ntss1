// CS 356 Spring 2024 - Ticket class h file
// Ambrose Sturgill <3
// Last Modified: 21 April 2024

#include <cstdlib>
#include <iostream>

using namespace std;

#ifndef TICKET_H
#define TICKET_H


//named constants
const int DEFAULT_TICKET_ID = 0000;
const int DEFAULT_USER_ID = 0000;
const string DEFAULT_TITLE = "DEFAULT_TITLE";
const string DEFAULT_BODY = "DEFAULT_BODY";

class Ticket {
public:
    //constructors
    Ticket();
    Ticket(int givenTicketID, int givenUserID, string givenTitle, string givenBody);

    //accessors
    int getTicketID() const;
    int getUserID() const;
    string getTitle() const;
    string getBody() const;
    string to_string();

    //mutators
    void setTitle(string newTitle);
    void setBody(string newBody);
    void setUserID(int newID);

protected:
    //data types
    int ticketID;
    int userID;
    string title; //restricted to 180 characters in length
    string body;
};

#endif /* TICKET_H */
