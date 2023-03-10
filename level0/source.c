#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int main(int argc, char **argv) {
    int nb;
    uid_t uid;
    gid_t gid;
    char **s;

    nb = atoi(argv[1]);
    if (nb == 423) {
        s[0] = strdup("/bin/sh");
        s[1] = 0;
        gid = getegid();
        uid = geteuid();
        setresgid(gid, gid, gid);
        setresuid(uid, uid, uid);
        execv("/bin/sh", s);
    }
    else {
        fwrite("No !\n", 1, 5, stderr);
    }
    return 0;
}