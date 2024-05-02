#include <iostream>
#include <fstream>
#include "HotelSystem.h"

using namespace std;

double HotelSystem::calculateRevenue() {
    double totalRevenue = 0.0;
    for (const auto &booking : bookings) {
        totalRevenue += booking.getRoom().getPrice();
    }
    return totalRevenue;
}

void HotelSystem::generateRevenueReport() {
    cout << "Revenue report:" << endl;
    cout << "Total revenue: $" << calculateRevenue() << endl;
}

void HotelSystem::checkInGuest(Guest* guest, Room* room, string bookingDates, string additionalRequests) {
    Booking booking(*guest, *room, bookingDates, additionalRequests);
    bookings.push_back(booking);
    guests.push_back(*guest);
}

void HotelSystem::checkOutGuest(Guest guest) {
    // Find and remove booking
    for (auto it = bookings.begin(); it != bookings.end(); ) {
        if (it->getGuest().getName() == guest.getName()) {
            // Retrieve a non-const reference to the room and mark it as available
            Room &room = const_cast<Room&>(it->getRoom());
            room.setAvailability(true); // Mark room as available
            it = bookings.erase(it);
        } else {
            ++it;
        }
    }
    // Remove guest
    for (auto it = guests.begin(); it != guests.end(); ) {
        if (it->getName() == guest.getName()) {
            it = guests.erase(it);
        } else {
            ++it;
        }
    }
}

void HotelSystem::handleGuestInteraction(Guest guest, string interaction) {
    // Implementation for handling guest interaction in a hotel
}

void HotelSystem::saveToFile(string filename) {
    ofstream file(filename);
    if (file.is_open()) {
        for (const auto &room : rooms) {
            file << room.getRoomNumber() << "," << room.getType() << "," << room.getPrice() << "," << room.getAmenities() << "," << room.isAvailable() << endl;
        }
        for (const auto &guest : guests) {
            file << guest.getName() << "," << guest.getContactInfo() << endl;
        }
        for (const auto &booking : bookings) {
            file << booking.getGuest().getName() << "," << booking.getRoom().getRoomNumber() << "," << booking.getBookingDates() << "," << booking.getAdditionalRequests() << endl;
        }
        file.close();
    } else {
        cout << "Unable to open file." << endl;
    }
}

void HotelSystem::loadFromFile(string filename) {
    ifstream file(filename);
    if (file.is_open()) {
        rooms.clear();
        guests.clear();
        bookings.clear();
        string line;
        while (getline(file, line)) {
            // Parse line and create objects
            // Add them to the respective vectors
        }
        file.close();
    } else {
        cout << "Unable to open file." << endl;
    }
}
