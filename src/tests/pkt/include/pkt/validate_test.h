#if !defined(TEST_VALIDATE_H)
#define TEST_VALIDATE_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#include <sys/fcntl.h>

#include <CUnit/Basic.h>

void pkt_is_msg_type_valid_test();

void pkt_is_msg_type_option_valid_test();

void pkt_is_requested_ip_addr_option_valid_test();

void pkt_is_host_name_option_valid_test();

void pkt_is_parameter_list_valid_test();

void pkt_is_valid_server_identifier_test();

void pkt_is_ip_address_lease_time_option_valid_test();

void pkt_is_valid_subnet_mask_test();

void pkt_is_address_valid_test();

void pkt_is_valid_router_test();

void pkt_is_valid_string_test();

void pkt_is_domain_name_option_valid_test();

void pkt_is_message_valid_test();

#endif // TEST_VALIDATE_H
