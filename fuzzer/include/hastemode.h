#ifndef _AFL_HASTEMODE_H
#define _AFL_HASTEMODE_H

struct afl_forkserver;
void hastemode_exec_child(struct afl_forkserver *fsrv, char **argv);

#endif