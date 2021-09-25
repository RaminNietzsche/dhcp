#if !defined(TEST_VALIDATE_H)
#define TEST_VALIDATE_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#include <sys/fcntl.h>

#include <CUnit/Basic.h>

void pktIsMsgTypeValidTest();

void pktIsMsgTypeOptionValidTest();

void pktIsRequestedIpAddrOptionValidTest();

void pktIsHostNameOptionValidTest();

void pktIsParameterListValidTest();

void pktIsValidServerIdentifierTest();

void pktIsIpAddressLeaseTimeOptionValidTest();

void pktIsValidSubnetMaskTest();

void pktIsAddressValidTest();

void pktIsValidRouterTest();

void pktIsValidStringTest();

void pktIsDomainNameOptionValidTest();

void pktIsMessageValidTest();

#endif // TEST_VALIDATE_H
