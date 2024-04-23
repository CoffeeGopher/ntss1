// CS 356 Spring 2024 - Ticket manager h file
// Ambrose Sturgill <3
// Last Modified: 21 April 2024

#include <cstdlib>
#include <iostream>
#include "Ticket.h"

using namespace std;

#ifndef TICKET_MANAGER_H
#define TICKET_MANAGER_H

Ticket createTicket(int ticketID, int userID, string title, string body);

void submitTicket(Ticket ticket);

#endif /* TICKET_MANAGER_H */
