// CS 356 Spring 2024 - NTSS main file
// Ambrose Sturgill, Brennan Duffy
// Last Modified: 23 April 2024

#include <cstdlib>
#include <iostream>
#include <ctime>
#include "Ticket.h"
#include "ticketManager.h"
#include "ProposalManager.h"

using namespace std;

int main() {
    cout << boolalpha; // not sure why this is here?

    cout << endl;

    // proposal test code

    cout << "We can create and access proposals using the manager" << endl;

    ProposalManager* proposal_manager = ProposalManager::GetInstance();
    Proposal* prop1 = proposal_manager->create_proposal(
        1,
        "how to pet a cat",
        "this talk goes over the intricacies of petting feline companions",
        std::time(nullptr) // dummy value
    );

    cout << "Prop1 subject: " << prop1->subject << endl;

    Proposal* prop2 = proposal_manager->create_proposal(
        82,
        "101 parrots and where to find them",
        "parrots are very good at hiding. let's change that",
        std::time(nullptr) // dummy value
    );

    cout << "Prop2 subject: " << prop2->subject << endl;

    int prop1_id = prop1->proposal_id;

    cout << endl;

    cout << "Prop1 id: " << prop1_id << endl;

    Proposal* gottenProp = proposal_manager->get_proposal(prop1_id);

    cout << "proposal_manager->get_proposal(prop1_id)->subject: " << (gottenProp == nullptr ? "Not found" : gottenProp->subject) << endl;
    
    cout << endl;

    // ticket test code

    cout << "Let's create a ticket and access its attributes" << endl;

    Ticket ticket = createTicket(0, 0, "Hello!", "World!");

    cout << "Ticket name, body: " << ticket.getTitle() << ", " << ticket.getBody() << endl;

    submitTicket(ticket); // crazy

    return EXIT_SUCCESS;
}
