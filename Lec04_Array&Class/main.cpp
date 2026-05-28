#pragma once
#include "MyClasses.h"

int main() {

    // =========================
    // Rectangle test
    // =========================
    Rectangle rect1(4, 6);

    cout << "Rectangle 1:" << endl;
    cout << "Area: " << rect1.getArea() << endl;
    cout << "Perimeter: " << rect1.getPerimeter() << endl;
    cout << "Is Square? : " << boolalpha << rect1.isSquare() << endl;

    printf("=========================================================\n");

    // =========================
    // Pet test
    // =========================
    Pet myPet("Lucky", 5, "dog");
    cout << "My pet's name is " << myPet.getName() << endl;

    Puppy myPuppy("Kong", 3, "dog", "Poodle");
    cout << "My puppy's breed is " << myPuppy.getBreed() << endl;

    printf("=========================================================\n");

    // =========================
    // Music system
    // =========================
    MusicStreamingService myService("Melon");

    myService.addMusic("Jump", "Blackpink", "Jump", 2025);
    myService.addMusic("Swim", "BTS", "Arirang", 2026);
    myService.addMusic("Bang Bang", "IVE", "Revive", 2026);
    myService.addMusic("404", "KiiKii", "Delulu", 2026);
    myService.addMusic("DDUDU", "Blackpink", "Square", 2024);

    // =========================
    // Search by title
    // =========================
    string music_title;
    cout << "Enter the Music Title: ";
    cin >> music_title;

    Music* result = myService.searchByTitle(music_title);

    if (result != NULL) {
        cout << "Found: " << result->getTitle() << endl;
    }
    else {
        cout << "Not Found" << endl;
    }

    // =========================
    // Search by artist
    // =========================
    string artist_name;
    cout << "Enter the artist name: ";
    cin >> artist_name;

    vector<Music*> artistResult = myService.searchByArtist(artist_name);

    if (artistResult.size() > 0) {
        cout << "Found " << artistResult.size()
            << " songs by " << artist_name << endl;

        for (int i = 0; i < artistResult.size(); i++) {
            cout << artistResult[i]->getTitle() << endl;
        }
    }
    else {
        cout << "Not Found" << endl;
    }

    return 0;
}