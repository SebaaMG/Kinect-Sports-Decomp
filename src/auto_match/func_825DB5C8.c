extern char *pcRam8329e4d8;
extern char *pcRam8329e4dc;
extern char *pcRam8329e4e0;
extern char *pcRam8329e4e4;
extern char *pcRam8329e4ec;
extern char *pcRam8329e4f0;
extern char *pcRam8329e4f4;
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
extern char cRam8329e4f8;
extern int fn_825DB5B0();
extern int fn_825DB640();
extern int fn_825DB6A8();
extern int fn_825DB710();
extern int fn_82BA02A8();


void fn_825DB5C8(void)

{
  if (cRam8329e4f8 != '\0') {
    return;
  }
  pcRam8329e4e4 = fn_82BA02A8;
  pcRam8329e4d8 = fn_825DB5B0;
  pcRam8329e4dc = fn_825DB640;
  pcRam8329e4e0 = fn_82BA02A8;
  pcRam8329e4ec = fn_825DB6A8;
  pcRam8329e4f0 = fn_825DB710;
  pcRam8329e4f4 = fn_82BA02A8;
  cRam8329e4f8 = 1;
  return;
}
