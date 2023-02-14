#include "afl-fuzz.h"
#include "hastemode.h"

void hastemode_exec_child(afl_forkserver_t *fsrv, char **argv) {

  setenv("___AFL_EINS_ZWEI_POLIZEI___", "1", 1);

  if (fsrv->qemu_mode) { setenv("AFL_DISABLE_LLVM_INSTRUMENTATION", "1", 0); }

  if (!fsrv->qemu_mode && !fsrv->frida_mode && argv[0] != fsrv->hastemode_binary) {

    argv[0] = fsrv->hastemode_binary;

  }

  execv(argv[0], argv);

}