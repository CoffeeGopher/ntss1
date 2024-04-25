// CS 356 Spring 2024 - Proposal Manager h file
// Brennan Duffy
// Last Modified: 25 April 2024

#include "Proposal.h"
#include <string>
#include <map>

#ifndef PROPOSAL_MANAGER_H
#define PROPOSAL_MANAGER_H

class ProposalManager {
public:
    Proposal* create_proposal(
        int speaker_id,
        string subject,
        string description,
        time_t planned_datetime
    );
    Proposal* get_proposal(int proposal_id);

    static ProposalManager* GetInstance();

protected:
    ProposalManager();

    int generate_unique_proposal_id();

    static ProposalManager* instance;
    map<int, Proposal*> proposal_map;

};

#endif /* PROPOSAL_MANAGER_H */
