//
// Created by aarya_yoga on 5/1/2024.
//

#include "Room.h"
#include "HotelSystem.h"
#include <iostream>


Room::Room(int roomNumber, std::string type, double price, std::string amenities)
    : roomNumber(roomNumber), type(type), price(price), amenities(amenities), availability(true) {
}

int Room::getRoomNumber() const {
    return roomNumber;
}

std::string Room::getType() const {
    return type;
}

bool Room::isAvailable() const {
    return availability;
}

double Room::getPrice() const {
    return price;
}

std::string Room::getAmenities() const {
    return amenities;
}

void Room::setRoomNumber(int roomNumber) {
    this->roomNumber = roomNumber;
}

void Room::setType(std::string type) {
    this->type = type;
}

void Room::setAvailability(bool availability) {
    this->availability = availability;
}

void Room::setPrice(double price) {
    this->price = price;
}

void Room::setAmenities(std::string amenities) {
    this->amenities = amenities;
}

void Room::bookRoom() {
    availability = false;
}

void Room::checkAvailability() {
    std::cout << "Room " << roomNumber << " is " << (availability ? "available" : "not available") << std::endl;
}

void Room::updatePrice(double newPrice) {
    price = newPrice;
}

void Room::updateAmenities(std::string newAmenities) {
    amenities = newAmenities;
}
