// CS 356 Spring 2024 - Proposal Manager cpp file
// Brennan Duffy
// Last Modified: 25 April 2024

#include "ProposalManager.h"
#include <map>
#include <random>

ProposalManager* ProposalManager::instance = nullptr; // might not be sufficient

ProposalManager* ProposalManager::GetInstance() {
    if(instance==nullptr){
        instance = new ProposalManager();
    }
    return instance;
}

ProposalManager::ProposalManager() {
    std::map<int, Proposal*> proposal_map;
}

int ProposalManager::generate_unique_proposal_id() {
    // a real implementation would see a sofisticated ID
    // generation system that prevents duplicate IDs

    // this is not a real implementation

    std::random_device rd;
    std::mt19937 gen(rd());

    return gen();
}

Proposal* ProposalManager::create_proposal(int speaker_id, string proposal_subject, string proposal_description, time_t planned_datetime) {
    Proposal* proposal = new Proposal(
        generate_unique_proposal_id(), speaker_id, proposal_subject, proposal_description, planned_datetime
    );
    proposal_map[speaker_id] = proposal;
    return proposal;
}

Proposal* ProposalManager::get_proposal(int proposal_id) {
    if (proposal_map.find(proposal_id) != proposal_map.end()) {
        return proposal_map[proposal_id];
    }
    return nullptr;
}
