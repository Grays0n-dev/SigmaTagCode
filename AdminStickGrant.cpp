#include <iostream>
#include <string>

// Function to check if the player is "CATPLAYZ" and grant the admin stick
void GrantAdminStick(const std::string& playerName) {
    if (playerName == "CATPLAYZZZ") {
        // Grant admin stick
        std::cout << "Admin stick granted to " << playerName << "!" << std::endl;
        // Add your logic here to actually grant the admin stick in the game
    } else {
        std::cout << "Player " << playerName << " does not have admin privileges." << std::endl;
    }
}

// Example usage
int main() {
    std::string playerName;
    std::cout << "Enter player name: ";
    std::cin >> playerName;

    GrantAdminStick(playerName);

    return 0;
}
