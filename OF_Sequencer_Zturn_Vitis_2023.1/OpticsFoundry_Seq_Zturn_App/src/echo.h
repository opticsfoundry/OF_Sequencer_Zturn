#pragma once
#include <stdbool.h>
#include "lwip/err.h"
#include "xil_types.h"

extern err_t server_send_ascii(char* buf);
extern err_t server_send_binary(char* buf, u32 length, bool DebugModeOn);
extern void server_set_binary_mode(u8* a_buffer, u32 a_length, u32 a_expected_length);
extern u8 server_last_digital_data_transfer_successful();
extern u8 is_client_connected();
extern unsigned char *server_get_command(long double timeout_in_seconds);
