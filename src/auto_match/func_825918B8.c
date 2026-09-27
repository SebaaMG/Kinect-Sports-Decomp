extern char *pcRam83298f8c;
extern char *pcRam83298f90;
extern char *pcRam83298f94;
extern char *pcRam83298f98;
typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned char bool;
#define true 1
#define false 0
typedef unsigned short undefined2;
typedef unsigned short ushort;
typedef unsigned short word;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned int dword;
typedef unsigned int ulong;
typedef unsigned __int64 undefined8;
typedef unsigned __int64 ulonglong;
typedef unsigned __int64 qword;
typedef __int64 longlong;
typedef int (*code)();
typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned __int64 U64;
typedef signed char S8;
typedef signed short S16;
typedef signed int S32;
typedef __int64 S64;
typedef struct { U64 lo, hi; } V16;
extern char cRam83298fa0;
extern int fn_8251E608();
extern int fn_8251E6F0();
extern int fn_825918A0();
extern int fn_82BA02A8();


void fn_825918B8(void)

{
  if (cRam83298fa0 != '\0') {
    return;
  }
  pcRam83298f8c = fn_825918A0;
  pcRam83298f90 = fn_8251E608;
  pcRam83298f94 = fn_8251E6F0;
  pcRam83298f98 = fn_82BA02A8;
  cRam83298fa0 = 1;
  return;
}
