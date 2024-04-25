#include "Proposal.h"
#include <string>
#include <map>

class ProposalManager {
public:
    Proposal* create_proposal(
        int speaker_id,
        string proposal_subject,
        string proposal_description,
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