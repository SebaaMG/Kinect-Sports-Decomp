extern char *pcRam8329e474;
extern char *pcRam8329e47c;
extern char *pcRam8329e480;
extern char *pcRam8329e488;
extern char *pcRam8329e48c;
extern char *pcRam8329e490;
extern unsigned int *puRam8329e478;
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
extern char cRam8329e494;
extern int fn_825DA620();
extern int fn_825DA6C8();
extern int fn_82BA02A8();
extern int fn_82D7E470();
extern unsigned int lbl_825DA6B0;


void fn_825DA638(void)

{
  if (cRam8329e494 != '\0') {
    return;
  }
  pcRam8329e480 = fn_82BA02A8;
  pcRam8329e488 = fn_82D7E470;
  pcRam8329e490 = fn_82BA02A8;
  pcRam8329e474 = fn_825DA620;
  puRam8329e478 = &lbl_825DA6B0;
  pcRam8329e47c = fn_82BA02A8;
  pcRam8329e48c = fn_825DA6C8;
  cRam8329e494 = 1;
  return;
}
