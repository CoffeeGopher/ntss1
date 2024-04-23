// CS 356 Spring 2024 - Ticket manager cpp file
// Ambrose Sturgill <3
// Last Modified: 21 April 2024

#include <cstdlib>
#include <iostream>
#include "ticketManager.h"
#include "Ticket.h"

using namespace std;

// This function would be called from the GUI class in a fully-implemented system
Ticket createTicket(int ticketID, int userID, string title, string body) {
    return Ticket(ticketID, userID, title, body);
}

// This function would be called from the GUI class in a fully-implemented system
void submitTicket(Ticket ticket) {
    // This method's functionality is reliant on the database class
}
