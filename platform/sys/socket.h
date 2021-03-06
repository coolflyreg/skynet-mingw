#pragma once
#ifndef _WIN32_WINNT
#define _WIN32_WINNT 0x501
#endif

#include <WinSock2.h>
#include <WS2tcpip.h>

#ifndef EWOULDBLOCK
#define EWOULDBLOCK WSAEWOULDBLOCK
#endif

#ifndef EINPROGRESS
#define EINPROGRESS WSAEINPROGRESS
#endif

#ifndef SHUT_RD
#define SHUT_RD SD_RECEIVE
#endif

#undef near