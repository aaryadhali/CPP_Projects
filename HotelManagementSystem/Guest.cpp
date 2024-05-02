
#include <iostream>
#include "Guest.h"


using namespace std;

Guest::Guest(string &_name, string contactInfo, Booking &_bookingDetails, string &_specialRequests): name(_name), contactInfo(contactInfo), bookingDetails(_bookingDetails), specialRequests(_specialRequests) {}

string Guest::getName() const {
    return name;
}
void Guest::setName(std::string name) {
    this->name = name;
}

string Guest::getContactInfo() const {
    return contactInfo;
}
void Guest::setContactInfo(std::string contactInfo) {
    this->contactInfo = contactInfo;
}

Booking Guest::getBookingDetails() const {
    return bookingDetails;
}
void Guest::setBookingDetails(Booking &_bookingDetails) {
    this->bookingDetails = _bookingDetails;
}

string Guest::getSpecialRequests() const {
    return specialRequests;
}
void Guest::setSpecialRequests(std::string specialRequests) {
    this->specialRequests = specialRequests;
}

void Guest::makeBooking(Guest &_guest, Room &_room, string &_bookingDates, std::string &_additionalRequests) {
    Booking newBooking(_guest,_room, _bookingDates, _additionalRequests);
    this->bookingDetails = newBooking;
}

void Guest::updateContactInfo(std::string newContactInfo) {
    contactInfo = newContactInfo;
}

void Guest::updateSpecialRequests(std::string newRequests) {
    specialRequests = newRequests;
}
