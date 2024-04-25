// CS 356 Spring 2024 - Ticket class cpp file
// Ambrose Sturgill <3
// Last Modified: 23 April 2024

#include <cstdlib>
#include <iostream>
#include <string>
#include "Ticket.h"

using namespace std;

//*** constructors ***

Ticket::Ticket() {
    ticketID = DEFAULT_TICKET_ID;
    userID = DEFAULT_USER_ID;
    title = DEFAULT_TITLE;
    body = DEFAULT_BODY;
}

Ticket::Ticket(int givenTicketID, int givenUserID, string givenTitle, string givenBody) {
    if (givenTitle.length() > 180) {
        //ERROR CATCHING CURRENTLY NOT IMPLEMENTED
    }

    ticketID = givenTicketID;
    userID = givenUserID;
    title = givenTitle;
    body = givenBody;
}


//*** accessors ***

int Ticket::getTicketID() const {
    return ticketID;
}

int Ticket::getUserID() const {
    return userID;
}

string Ticket::getTitle() const {
    return title;
}

string Ticket::getBody() const {
    return body;
}

string Ticket::to_string() {
    string output = "|";
    output += std::to_string(ticketID);
    output += "|";
    output += std::to_string(userID);
    output += "|";
    output += title;
    output += "|";
    output += body;
    output += "|";

    return output;
}


//*** mutators ***

void Ticket::setTitle(string newTitle) {
    if (newTitle.length() > 180) {
        //ERROR CATCHING CURRENTLY NOT IMPLEMENTED
        return;
    }

    title = newTitle;
}

void Ticket::setBody(string newBody) {
    body = newBody;
}

void Ticket::setUserID(int newID) {
    userID = newID;
}
