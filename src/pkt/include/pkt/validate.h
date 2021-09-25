
#if !defined(VALIDATE_H)
#define VALIDATE_H

#include "dhcp.h"
#include <stdbool.h>
#include "analyze.h"
#include <ctype.h>

#define PKT_MAX_IP_SEGMENT_LEN                  255
#define PKT_DEFAULT_ADDRESS_LEN                 4

bool pktIsMsgTypeValid (enum dhcpMessageTypes type);

bool pktIsMsgTypeOptionValid (pktMessageType_t *opt);

bool pktIsRequestedIpAddrOptionValid (pktRequestedIpAddress_t *opt);

bool pktIsHostNameOptionValid (pktString_t *opt);

bool pktIsParameterListValid (pktParameterRequestList_t *opt);

bool pktIsValidServerIdentifier (pktServerIdentifier_t *opt);

bool pkt_is_valid_str_ip (char *ip);

bool pktIsIpAddressLeaseTimeOptionValid (pktIpAddressLeaseTime_t *opt);

bool pktIsValidSubnetMask (pktSubnetMask_t *opt);

bool pktIsAddressValid (pktAddress_t *opt, int option,  int max);

bool pktIsValidRouter (pktRouter_t *opt);

bool pktIsValidString (pktString_t *opt, int option);

bool pktIsDomainNameOptionValid (pktString_t *opt);

bool pktIsMessageValid (pktString_t *opt);

#endif // VALIDATE_H
