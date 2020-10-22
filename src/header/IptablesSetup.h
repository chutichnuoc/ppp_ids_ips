#ifndef IPTABLES_SETUP_H
#define IPTABLES_SETUP_H

#include "../header/ConfigReader.h"

void backup_iptables();
void restore_iptables();
void setup_iptables(std::string interface);

#endif