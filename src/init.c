#include <R_ext/RS.h>
#include <stdlib.h> // for NULL
#include <R_ext/Rdynload.h>

/* FIXME:
 Check these declarations against the C/Fortran source code.
 */

/* .Fortran calls */
extern void F77_NAME(getinfo)();
extern void F77_NAME(getn)(void *);
extern void F77_NAME(hello)();

static const R_FortranMethodDef FortranEntries[] = {
    {"getinfo", (DL_FUNC) &F77_NAME(getinfo), 0},
    {"getn",    (DL_FUNC) &F77_NAME(getn),    0},
    {"hello",   (DL_FUNC) &F77_NAME(hello),   0},
    {NULL, NULL, 0}
};

void R_init_openmpf(DllInfo *dll)
{
    R_registerRoutines(dll, NULL, NULL, FortranEntries, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
