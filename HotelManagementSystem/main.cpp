#include <iostream>
#include "HotelSystem.h" // Added include for HotelSystem

int main() {
    // Sample usage
    HotelSystem hotel;
    Room room1(101, "Standard", 100.0, "TV, WiFi");
    Room room2(102, "Deluxe", 150.0, "TV, WiFi, Mini-bar");

    Guest guest1("Alice", "alice@example.com");
    Guest guest2("Bob", "bob@example.com");

    hotel.checkInGuest(&guest1, &room1, "2024-05-01", "Extra towels"); // Passing pointers to guest1 and room1
    hotel.checkInGuest(&guest2, &room2, "2024-05-03", "Room with a view"); // Passing pointers to guest2 and room2

    hotel.saveToFile("hotel_data.txt");
    hotel.loadFromFile("hotel_data.txt");

    return 0;
}
