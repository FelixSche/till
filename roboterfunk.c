#include <stdio.h>
#include "robot.h"

// Call by Value
void moveRobotByValue(int distance, int *remainingDistance, int *steps) {
    *remainingDistance -= distance;
    *steps += 1;
}

// Call by Reference
void moveRobotByReference(int distance, int *remainingDistance, int *steps) {
    *remainingDistance -= distance;
    *steps += 1;
}

// Globale Funktion
void moveRobotGlobally(int distance) {
    // Hier kannst du den Code für die globale Bewegung des Roboters einfügen
    printf("Der Roboter bewegt sich global um %d Schritte.\n", distance);
}
