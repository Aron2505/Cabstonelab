#ifndef DONATIONLIST_H
#define DONATIONLIST_H

#include "Donation.h"

#include <string>

struct DonationNode
{
    Donation data;
    DonationNode* next;

    DonationNode(const Donation& donation)
        : data(donation), next(nullptr) {
    }
};

class DonationList
{
public:
    


private:
    DonationNode* first;
    DonationNode* last;
    int numOfDonations;
};

#endif
#pragma once
