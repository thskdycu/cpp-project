#include <iostream>
#include <string>
#include <thread>
#include <chrono>
#include <windows.h>

#define RESET       "\033[0m"
#define WHITE       "\033[97m"
#define RED         "\033[31m"
#define GREEN       "\033[32m"
#define YELLOW      "\033[33m"
#define BLUE        "\033[34m"
#define CYAN        "\033[36m"
#define MAGENTA     "\033[35m"
#define BG_GRAY     "\033[48;5;235m"
#define BG_BLUE     "\033[48;5;32m"
#define BG_GREEN    "\033[48;5;28m"
#define BG_RED      "\033[48;5;88m"
#define BOLD        "\033[1m"
#define UNDERLINE   "\033[4m"
#define BLINK       "\033[5m"
#define BG_CYAN     "\033[48;5;6m"
#define BG_BLACK    "\033[48;5;0m"

// Function to change the console background color (for Windows terminal, use system commands)
void setConsoleColor(const std::string& color) {
    std::cout << color;
}

// Function to simulate a loading effect (like a typing effect)
void loadingEffect(const std::string& message, int delay) {
    for (char c : message) {
        std::cout << c;
        std::this_thread::sleep_for(std::chrono::milliseconds(delay));  // Pause to simulate typing
    }
    std::cout << std::endl;
}

// Main login system
int main() {
    SetConsoleOutputCP(65001);
    std::string username, password;

    // Change console background color (optional for Windows)
    setConsoleColor(BG_BLUE);  // Set the console's background color (cyan in this case)

    // Stylish header with background and text color
    std::cout << BG_BLUE  << "╔════════════════════════════════════════╗" << RESET << std::endl;
    std::cout << BG_BLUE << "║   🔐  WELCOME TO THE LOGIN SYSTEM  🔐  ║" << RESET << std::endl;
    std::cout << BG_BLUE << "╚════════════════════════════════════════╝" << RESET << std::endl;
    std::cout << std::endl;

    // Colorful instructions for input
    std::cout << CYAN << UNDERLINE << BOLD << "Please enter your credentials:" << RESET << std::endl;
    std::cout << std::endl;

    // Username input with a different color for the prompt
    std::cout << YELLOW << "🔑 Enter username: " << RESET;
    std::cin >> username;

    // Password input with a different color for the prompt
    std::cout << YELLOW << "🔒 Enter password: " << RESET;
    std::cin >> password;

    // Adding a simulated loading effect for a more interactive experience
    loadingEffect("Authenticating your credentials", 100);  // Adjust the delay to speed up or slow down

    // Checking the username and password, and providing feedback with different colors
    if ((username == "admin" && password == "admin") ||
        (username == "lara" && password == "ilyas2013") ||
        (username == "kallalmostafa" && password == "bamostafa")){
        // Green background for success and bold green text
        std::cout << BG_GREEN << WHITE << BOLD << "✅ Logged in successfully! 🎉" << RESET << std::endl;
    } else {
        // Red background for failure and bold red text
        std::cout << BG_RED << WHITE << BOLD << "❌ Failed to login! 😢" << RESET << std::endl;
    }

    // Extra fun message with color
    std::cout << std::endl;
    std::cout << MAGENTA << BOLD << "🌟 Thank you for using the login system! 🌟" << RESET << std::endl;
    std::cout << BG_CYAN << WHITE << "Explore more features coming soon. 🔍" << RESET << std::endl;

    // Simulate a transition to a new page after login
    std::cout << std::endl;
    loadingEffect("Redirecting to game menu...", 150);  // Simulate a loading screen before redirecting

    // Game menu placeholder (showing a transition)
    std::cout << BG_GREEN << WHITE << BOLD << "Game Menu - Coming Soon!" << RESET << std::endl;
    return 0;
}
