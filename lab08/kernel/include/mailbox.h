#ifndef __MAIULBOX_H__
#define __MAILBOX_H__

void get_board_revision();
void get_memory_info();
void mailbox_call(unsigned int *mailbox);
int mailbox_call_s(unsigned char ch, unsigned int *mbox);

#endif