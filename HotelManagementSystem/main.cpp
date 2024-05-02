#include <iostream>
#include "Room.h"
#include "Booking.h"
#include "Guest.h"

int main() {
    // Sample usage

    Room room1(101, "Standard", 100.0, "TV, WiFi");
    Room room2(102, "Deluxe", 150.0, "TV, WiFi, Mini-bar");

    Guest guest1("Alice", "alice@example.com");
    Guest guest2("Bob", "bob@example.com");

    HotelSystem hotel;
    hotel.checkInGuest(guest1, room1, "2024-05-01", "Extra towels");
    hotel.checkInGuest(guest2, room2, "2024-05-03", "Room with a view");

    hotel.saveToFile("hotel_data.txt");
    hotel.loadFromFile("hotel_data.txt");

    return 0;
}
//This code provides a basic structure for Hotel Management System.
//need to expand upon this framework to add more features and functionality
//as per project requirements.




