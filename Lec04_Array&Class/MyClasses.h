#pragma once
#pragma once

#include <iostream>
#include <string>
#include <vector>

using namespace std;

// =========================
// Rectangle
// =========================
class Rectangle {
private:
    double width;
    double height;

public:
    Rectangle(double w, double h) {
        width = w;
        height = h;
    }

    double getArea() {
        return width * height;
    }

    double getPerimeter() {
        return 2 * (width + height);
    }

    bool isSquare() {
        return (width == height);
    }
};

// =========================
// Pet
// =========================
class Pet {
protected:
    string name;
    int age;
    string type;

public:
    Pet(string n, int a, string t)
        : name(n), age(a), type(t) {
    }

    string getName() {
        return name;
    }

    int getAge() {
        return age;
    }

    string getType() {
        return type;
    }
};

// =========================
// Puppy (Inheritance)
// =========================
class Puppy : public Pet {
private:
    string breed;

public:
    Puppy(string n, int a, string t, string b)
        : Pet(n, a, t), breed(b) {
    }

    string getBreed() {
        return breed;
    }
};

// =========================
// Music
// =========================
class Music {
private:
    string title;
    string artist;
    string album;
    int year;

public:
    Music(string title, string artist, string album, int year) {
        this->title = title;
        this->artist = artist;
        this->album = album;
        this->year = year;
    }

    string getTitle() { return title; }
    string getArtist() { return artist; }
    string getAlbum() { return album; }
    int getYear() { return year; }
};

// =========================
// Music Streaming Service
// =========================
class MusicStreamingService {
private:
    string serviceName;
    vector<Music> musicList;

public:
    MusicStreamingService(string name) {
        serviceName = name;
    }

    void addMusic(string title, string artist, string album, int year) {
        Music newMusic(title, artist, album, year);
        musicList.push_back(newMusic);
        cout << title << " by " << artist
            << " added to " << serviceName << endl;
    }

    Music* searchByTitle(string title) {
        for (int i = 0; i < musicList.size(); i++) {
            if (musicList[i].getTitle() == title) {
                return &musicList[i];
            }
        }
        return NULL;
    }

    vector<Music*> searchByArtist(string artist) {
        vector<Music*> result;

        for (int i = 0; i < musicList.size(); i++) {
            if (musicList[i].getArtist() == artist) {
                result.push_back(&musicList[i]);
            }
        }
        return result;
    }
};