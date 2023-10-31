#include <iostream>
#include <string>

int main() {
    std::cout << "Chatbot: Hello! I'm your friendly chatbot. How can I assist you today?" << std::endl;

    std::string userMessage;
    while (true) {
        std::cout << "You: ";
        std::getline(std::cin, userMessage);

        // Convert user's message to lowercase for easier comparisons
        for (char &c : userMessage) {
            c = tolower(c);
        }

        if (userMessage == "hello" || userMessage == "hi" || userMessage == "hey") {
            std::cout << "Chatbot: Hello there! How can I help you?" << std::endl;
        } else if (userMessage == "how are you") {
            std::cout << "Chatbot: I'm just a computer program, but I'm here to assist you!" << std::endl;
        } else if (userMessage == "bye" || userMessage == "exit" || userMessage == "quit") {
            std::cout << "Chatbot: Goodbye! Feel free to return anytime." << std::endl;
            break;
        } else {
            std::cout << "Chatbot: I'm not sure how to respond to that. Please ask another question or say goodbye." << std::endl;
        }
    }

    return 0;
}
