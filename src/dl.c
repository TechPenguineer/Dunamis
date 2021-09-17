#include "include/dl.h"
#include <dlfcn.h>
#include "include/hermes_runtime.h"


AST_T* get_dl_function(char* filename, char* funcname)
{
    void *handle;
    struct AST_STRUCT* (*fptr)(runtime_T* runtime, struct AST_STRUCT* self, dynamic_list_T* args);
    char *error;

    handle = dlopen(filename, RTLD_LAZY);
    if (!handle)
    {
        fprintf(stderr, "%s\n", dlerror());
        exit(1);
    }

    dlerror();

    *(void **) (&fptr) = dlsym(handle, funcname);

    if ((error = dlerror()) != NULL)  {
        fprintf(stderr, "%s\n", error);
        exit(1);
    }
    
    AST_T* fdef = init_ast(AST_FUNCTION_DEFINITION);
    fdef->function_name = funcname;
    fdef->fptr = fptr;

    return fdef;
}
