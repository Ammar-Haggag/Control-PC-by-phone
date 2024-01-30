#include <iostream>
#include <cstring>
#include <cstdlib>
#include <unistd.h>
#include <arpa/inet.h>
#include <cstdio>
#include <cstdlib>


class Server {
private:
    int serverSocket;
    int clientSocket;

    sockaddr_in serverAddress;
    sockaddr_in clientAddress;
    socklen_t clientAddressLen;
    
    // executed commands
    const char *open_youtube_command = "gnome-terminal -- /usr/bin/firefox https://www.youtube.com; exit";
    const char *open_calculator = "/usr/bin/gnome-calculator";
    const char *open_google = "gnome-terminal -- /usr/bin/firefox https://www.google.com; exit";
    const char *open_terminal = "gnome-terminal";
    const char *open_linkedin = "gnome-terminal -- /usr/bin/firefox https://www.linkedin.com/in/ammarhaggag; exit";
    const char *power_off = "gnome-terminal -- systemctl poweroff";
    const char *go_home = "gnome-terminal -- nautilus /home/; exit";
    const char *sleep = "gnome-terminal -- systemctl suspend";
    const char *screenshot = "gnome-screenshot";
    const char *open_vscode = "code ~/Documents/";
    const char *open_calendar = "/usr/bin/gnome-calendar";
    const char *open_facebook_command = "gnome-terminal -- /usr/bin/firefox https://www.facebook.com/Ammar.hgag; exit";
    const char *battery = "/usr/bin/gnome-power-statistics";
    const char *logs = "/usr/bin/gnome-logs";
    const char *todo = "/usr/bin/gnome-todo";
    const char *system_monitor = "/usr/bin/gnome-system-monitor";
    const char *control_center = "/usr/bin/gnome-control-center";
    const char *disks = "/usr/bin/gnome-disks";


public:
    Server(int port);
    ~Server();
    void acceptConnection();
    void startChat();
};
