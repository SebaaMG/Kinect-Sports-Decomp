extern char *pcRam83299014;
extern char *pcRam83299018;
extern char *pcRam8329901c;
extern char *pcRam83299020;
extern char *pcRam83299028;
extern char *pcRam8329902c;
extern char *pcRam83299030;
extern char *pcRam83299034;
extern char *pcRam83299038;
extern char *pcRam8329903c;
extern char *pcRam83299040;
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
extern char cRam83299044;
extern int fn_825D98A8();
extern int fn_82BA02A8();
extern int fn_82D7EA10();


void fn_825D98C0(void)

{
  if (cRam83299044 == '\0') {
    pcRam83299020 = fn_82BA02A8;
    pcRam83299014 = fn_825D98A8;
    pcRam83299018 = fn_82D7EA10;
    pcRam8329901c = fn_82BA02A8;
    pcRam8329902c = fn_82BA02A8;
    pcRam83299028 = fn_82BA02A8;
    pcRam83299030 = fn_82BA02A8;
    pcRam83299034 = fn_82BA02A8;
    pcRam83299038 = fn_82BA02A8;
    pcRam8329903c = fn_82BA02A8;
    pcRam83299040 = fn_82BA02A8;
    cRam83299044 = '\x01';
  }
  return;
}
