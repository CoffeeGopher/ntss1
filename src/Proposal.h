// CS 356 Spring 2024 - Proposal h file
// Brennan Duffy
// Last Modified: 25 April 2024

#include <string>

using namespace std;

#ifndef PROPOSAL_H
#define PROPOSAL_H

class Proposal {
    friend class ProposalManager;

public:
    // an ideal implementation would see these protected with
    // getter methods, but erm... oopsie!
    int proposal_id; // generated on creation
    int speaker_id;
    string proposal_subject;
    string proposal_description;
    time_t planned_datetime;
    time_t submission_datetime; // generated on creation
    string proposal_state; // would be an enum


protected:
    Proposal(int proposal_id, int speaker_id, string proposal_subject, string proposal_description, time_t planned_datetime);
};

#endif /* PROPOSAL_H */
