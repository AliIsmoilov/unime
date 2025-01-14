// Requirements:
// 1. Create a program that manages social messages using arrays, structs, and files.
// 2. Use a struct named 'Message" to represent each message with attributes like sender, receiver, timestamp, and message content
// 3. Store messages in an array of structs.
// 4. Implement functions to:
// - Send a message from one user to another.
// - Display all messages sent or received by a specific user.
// - Save and load messages to/from a file.


#include <stdio.h>
#include <time.h>

struct user {
    int id;
    char name[128];
    int age;
};

typedef struct{
    struct user sender;
    struct user receiver;
    char content[1000];
    time_t timestamp;
} Message;


void sendMessage(Message messages[], int *messageCount, Message newMessage) {
    messages[*messageCount] = newMessage;
    (*messageCount)++;
}

void displayAllMessages(Message messages[], int messageCount) {

    for (int i = 0; i < messageCount; i++) {
        printf("From: %s\n", messages[i].sender.name);
        printf("To: %s\n", messages[i].receiver.name);
        printf("Content: %s\n", messages[i].content);
        printf("Timestamp: %s", ctime(&messages[i].timestamp));
        printf("--------------------\n");
    }
}

void displaySentMessagesByUserId(Message messages[], int messageCount, int userId) {

    for (int i = 0; i < messageCount; i++) {
        if (messages[i].sender.id == userId) {     
            printf("From: %s\n", messages[i].sender.name);
            printf("To: %s\n", messages[i].receiver.name);
            printf("Content: %s\n", messages[i].content);
            printf("Timestamp: %s", ctime(&messages[i].timestamp));
            printf("--------------------\n");
        }
    }
}


// void printMenu() {


// }

int main() {

    int messageCount = 0;
    Message messages[100];

    // struct user sender_1 = {1, "Ali", 20};
    // struct user receiver_1 = {2, "Vali", 28};

    // Message message_1 = {sender_1, receiver_1, "Hello", time(NULL)};

    // // printf("\nSender Id: %d\nSender Name: %s\nSender Age: %d\n", message_1.sender.id, message_1.sender.name, message_1.sender.age);
    // // printf("\nReceiver Id: %d\nReceiver Name: %s\nReceiver Age: %d\n", message_1.receiver.id, message_1.receiver.name, message_1.receiver.age);
    // // printf("\nMessage Content: %s\n", message_1.content);
    // // printf("\nMessage created_at: %s\n", message_1.created_at);


    // sendMessage(messages, &messageCount, message_1);

    // displaySentMessagesByUserId(messages, messageCount, 1);


    int choice;
    printf("\nSocial Messaging System\n");
    printf("1. Send a message\n");
    printf("2. Display messages\n");
    printf("3. Save messages\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);


    switch(choice) {
        case 1:
            system("clear");
            struct user sender;
            struct user receiver;
            Message newMessage;
            printf("Enter sender Id: ");
            scanf("%d", &sender.id);
            printf("Enter sender name: ");
            scanf("%s", &sender.name);
            printf("Enter sender age: ");
            scanf("%d", &sender.age);
            system("clear");


            printf("Enter receiver Id: ");
            scanf("%d", &receiver.id);
            printf("Enter receiver name: ");
            scanf("%s", &receiver.name);
            printf("Enter receiver age: ");
            scanf("%d", &receiver.age);
            system("clear");

            printf("Write your message: ");
            scanf("%s", &newMessage.content);
            
            newMessage.sender = sender;
            newMessage.receiver = receiver;

            sendMessage(messages, &messageCount, newMessage);
            displayAllMessages(messages, messageCount);
            printf("Sent");
            break;
        case 2:
            system("clear");

            int userId;
            printf("Enter your user id: ");
            scanf("%s", &userId);
            displaySentMessagesByUserId(messages, messageCount, userId);
            break;
        case 3:
            system("clear");
            printf("save messages");
            break;
        case 4:
            system("clear");
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
