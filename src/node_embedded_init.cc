// Custom node init in order to avoid abi breakage and simplify embedded init.
#include "node.h"

extern "C" {
NODE_EXTERN int InitializedEmbeddedNode(const char* proc_name) {
  std::vector<std::string> argv{proc_name};
  std::vector<std::string> exec_argv;
  std::vector<std::string> errors;

  return node::InitializeNodeWithArgs(&argv, &exec_argv, &errors);
}
}
