#include <iostream>

#include <stdio.h>
#include <assert.h>

#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <sys/socket.h>
#include <sys/select.h>

#include "labrea.h"

void handle_call(const char *call) {
    std::cout << "Handling " << call << std::endl;
}

DEFINE1(int, close, int)

DEFINE3(ssize_t, read, int, void*, size_t)
DEFINE3(ssize_t, write, int, const void*, size_t)
DEFINE3(off_t, lseek, int, off_t, int)

DEFINE4(ssize_t, recv, int, void*, size_t, int)
DEFINE3(ssize_t, recvmsg, int, struct msghdr *, int)
DEFINE4(ssize_t, send, int, const void*, size_t, int)
DEFINE3(ssize_t, sendmsg, int, const struct msghdr *, int)

DEFINE5(int, select, int, fd_set*, fd_set*, fd_set*, struct timeval*)

DEFINE3(int, accept, int, struct sockaddr *, socklen_t *)
