// CS 356 Spring 2024 - Proposal cpp file
// Brennan Duffy
// Last Modified: 25 April 2024

#include "Proposal.h"
#include <chrono>

Proposal::Proposal(int proposal_id, int speaker_id, string subject, string description, time_t planned_datetime) {
    this->proposal_id = proposal_id;
    this->speaker_id = speaker_id;
    this->subject = subject;
    this->description = description;
    this->planned_datetime = planned_datetime;
    std::chrono::system_clock::time_point now = std::chrono::system_clock::now();
    submission_datetime = std::chrono::system_clock::to_time_t(now);
    proposal_state = "not_reviewed";
}
