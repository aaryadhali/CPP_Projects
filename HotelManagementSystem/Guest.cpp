#include <iostream>
#include "Guest.h"

using namespace std;

Guest::Guest(std::string _name, std::string _contactInfo) : name(_name), contactInfo(_contactInfo) {}

string Guest::getName() const {
    return name;
}

void Guest::setName(string _name) {
    name = _name;
}

string Guest::getContactInfo() const {
    return contactInfo;
}

void Guest::setContactInfo(string _contactInfo) {
    contactInfo = _contactInfo;
}

Booking *Guest::getBookingDetails() const {
    return bookingDetails;
}

void Guest::setBookingDetails(Booking *bookingDetails) {
    // Since Booking contains non-copyable members (like Room), we can't directly assign it
    // You might want to use a pointer or reference to Booking instead
    // Or implement appropriate copy constructors and assignment operators in Booking class
    // For simplicity, let's use a pointer
    this->bookingDetails = bookingDetails;
}

string Guest::getSpecialRequests() const {
    return specialRequests;
}

void Guest::setSpecialRequests(string _specialRequests) {
    specialRequests = _specialRequests;
}

void Guest::makeBooking(Guest _guest, Room _room, string _bookingDates, string _additionalRequests) {
    // Since Booking contains non-copyable members (like Room), we can't directly assign it
    // You might want to use a pointer or reference to Booking instead
    // Or implement appropriate copy constructors and assignment operators in Booking class
    // For simplicity, let's use a pointer
    Booking newBooking(_guest, _room, _bookingDates, _additionalRequests);
    bookingDetails = &newBooking;
}

void Guest::updateContactInfo(string newContactInfo) {
    contactInfo = newContactInfo;
}

void Guest::updateSpecialRequests(string newRequests) {
    specialRequests = newRequests;
}
