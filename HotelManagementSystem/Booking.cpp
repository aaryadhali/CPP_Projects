#include <iostream>
#include "Booking.h"

using namespace std;

Booking::Booking(Guest _guest, Room &_room, string _bookingDates, string _additionalRequests)
    : guest(_guest), room(_room), bookingDates(_bookingDates), additionalRequests(_additionalRequests) {}

Guest Booking::getGuest() const {
    return guest;
}

void Booking::setGuest(Guest _guest) {
    guest = _guest;
}

const Room& Booking::getRoom() const {
    return room;
}

void Booking::setRoom(Room &_room) {
    room = _room;
}

string Booking::getBookingDates() const {
    return bookingDates;
}

void Booking::setBookingDates(string bookingDates) {
    this->bookingDates = bookingDates;
}

string Booking::getAdditionalRequests() const {
    return additionalRequests;
}

void Booking::setAdditionalRequests(string additionalRequests) {
    this->additionalRequests = additionalRequests;
}

void Booking::cancelBooking() {
    guest = Guest("", "");
    // Set room to some default or null value
    // Example: room = Room(0, "", 0.0, "");
    bookingDates = "";
    additionalRequests = "";
}

void Booking::updateDates(string newDates) {
    bookingDates = newDates;
}

void Booking::updateRequests(string newRequests) {
    additionalRequests = newRequests;
}
