#include <stdio.h>
#include "robot.h" // Externe Datei für Funktionen

int main() {
    int steps = 0;
    int remainingDistance = 4; // Gesamtdistanz im Raum
    
    while (remainingDistance > 0 && steps < MAX_STEPS) {
        printf("Schritt %d\n", steps + 1);
        
        // Call by Value
        moveRobotByValue(1, &remainingDistance, &steps);
        
        // Call by Reference
        moveRobotByReference(1, &remainingDistance, &steps);
        
        // Globale Funktion
        moveRobotGlobally(1);
    }
    
    if (remainingDistance == 0) {
        printf("Der Roboter ist zum Ausgangspunkt zurückgekehrt.\n");
    } else {
        printf("Der Roboter konnte nicht zum Ausgangspunkt zurückkehren.\n");
    }
    
    printf("Schritte: %d\n", steps);
    printf("Reststrecke: %d\n", remainingDistance);
    
    return 0;
}
