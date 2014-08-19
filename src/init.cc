#include "init.h"
#include <node.h>

#include <v8.h>

#include "util.h"
#include "namespace_loader.h"

using namespace node;
using namespace v8;

extern "C" void 
init(Handle<Object> target) {
  HandleScope scope;

  NODE_SET_METHOD(target, "init", g_init); 
  gir::NamespaceLoader::Initialize(target);
}

NODE_MODULE(girepository, init);
