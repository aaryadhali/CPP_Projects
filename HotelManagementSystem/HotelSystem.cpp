//
// Created by aarya_yoga on 5/1/2024.
//
#include <iostream>
#include <vector>
#include <fstream>
#include "HotelSystem.h"

using namespace std;


double HotelSystem::calculateRevenue() {
    double totalRevenue = 0.0;
    for (const auto &booking: bookings) {
        totalRevenue += booking.getRoom().getPrice();
    }
    return totalRevenue;
}

void HotelSystem::generateRevenueReport() {
    std::cout << "Revenue report:" << std::endl;
    std::cout << "Total revenue: $" << calculateRevenue() << std::endl;
}

void HotelSystem::checkInGuest(Guest guest, Room room, std::string bookingDates, std::string additionalRequests) {
    Booking booking(guest, room, bookingDates, additionalRequests);
    bookings.push_back(booking);
    guests.push_back(guest);
}

void HotelSystem::checkOutGuest(Guest guest) {
    // Find and remove booking
    for (auto it = bookings.begin(); it != bookings.end(); ++it) {
        if (it->getGuest().getName() == guest.getName()) {
            it->getRoom().setAvailability(true); // Mark room as available
            bookings.erase(it);
            break;
        }
    }
    // Remove guest
    for (auto it = guests.begin(); it != guests.end(); ++it) {
        if (it->getName() == guest.getName()) {
            guests.erase(it);
            break;
        }
    }
}

void HotelSystem::handleGuestInteraction(Guest guest, std::string interaction) {
    // Implementation for handling guest interaction in a hotel
}

void HotelSystem::saveToFile(std::string filename) {
    std::ofstream file(filename);
    if (file.is_open()) {
        for (const auto &room: rooms) {
            file << room.getRoomNumber() << "," << room.getType() << "," << room.getPrice() << "," << room.
                    getAmenities() << "," << room.isAvailable() << std::endl;
        }
        for (const auto &guest: guests) {
            file << guest.getName() << "," << guest.getContactInfo() << std::endl;
        }
        for (const auto &booking: bookings) {
            file << booking.getGuest().getName() << "," << booking.getRoom().getRoomNumber() << "," << booking.
                    getBookingDates() << "," << booking.getAdditionalRequests() << std::endl;
        }
        file.close();
    } else {
        std::cout << "Unable to open file." << std::endl;
    }
}

void HotelSystem::loadFromFile(std::string filename) {
    std::ifstream file(filename);
    if (file.is_open()) {
        rooms.clear();
        guests.clear();
        bookings.clear();
        std::string line;
        while (getline(file, line)) {
            // Parse line and create objects
            // Add them to the respective vectors
        }
        file.close();
    } else {
        std::cout << "Unable to open file." << std::endl;
    }
}
