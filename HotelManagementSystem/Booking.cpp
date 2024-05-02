#include <iostream>
#include "Booking.h"


using namespace std;

Booking::Booking(Guest &_guest, Room &_room, std::string &_bookingDates, std::string &_additionalRequests)
    : guest(_guest), room(_room), bookingDates(_bookingDates), additionalRequests(_additionalRequests) {}

Guest Booking::getGuest() const {
    return this->guest;
}
void Booking::setGuest(Guest &_guest) {
    this->guest = _guest;
}

Room Booking::getRoom() const {
    return room;
}
void Booking::setRoom(Room &_room) {
    this->room = _room;
}

string Booking::getBookingDates() const {
    return bookingDates;
}
void Booking::setBookingDates(std::string bookingDates) {
    this->bookingDates = bookingDates;
}

std::string Booking::getAdditionalRequests() const {
    return additionalRequests;
}
void Booking::setAdditionalRequests(std::string additionalRequests) {
    this->additionalRequests = additionalRequests;
}

void Booking::cancelBooking() {
    // Reset booking details
    guest = Guest( "", "");
    room = Room(0, "", 0.0, "");
    bookingDates = "";
    additionalRequests = "";
}

void Booking::updateDates(std::string newDates) {
    bookingDates = newDates;
}

void Booking::updateRequests(std::string newRequests) {
    additionalRequests = newRequests;
}
