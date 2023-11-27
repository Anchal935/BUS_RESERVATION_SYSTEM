#include <stdio.h>
#include <string.h>

//=====all variables declaration====
int t_cost;
int bus_no;
int num_of_seats;
int seat_num[50];

#ifndef MYFUNCTIONS_H
#define MYFUNCTIONS_H

//====all functions declaration====
void login(void);
int menu();
void display_bus_list(void);
void choose_bus(void);
void reservation_info(void);
void cancel_booking(void);
void exit_button();

#endif
