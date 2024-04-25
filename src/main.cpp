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


    // proposal test code
    ProposalManager* proposal_manager = ProposalManager::GetInstance();
    Proposal* prop1 = proposal_manager->create_proposal(
        1,
        "how to pet a cat",
        "this talk goes over the intricacies of petting feline companions",
        std::time(nullptr) // dummy value
    );
    Proposal* prop2 = proposal_manager->create_proposal(
        82,
        "101 parrots and where to find them",
        "parrots are very good at hiding. let's change that",
        std::time(nullptr) // dummy value
    );

    int prop1_id = prop1->proposal_id;
    


    return EXIT_SUCCESS;
}
