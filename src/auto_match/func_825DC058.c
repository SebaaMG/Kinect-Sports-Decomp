extern char *pcRam8329e500;
extern char *pcRam8329e504;
extern char *pcRam8329e508;
extern char *pcRam8329e50c;
extern char *pcRam8329e514;
extern char *pcRam8329e518;
extern char *pcRam8329e51c;
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
extern char cRam8329e520;
extern int fn_825DC040();
extern int fn_825DC0D0();
extern int fn_825DC128();
extern int fn_825DC2B8();
extern int fn_82BA02A8();


void fn_825DC058(void)

{
  if (cRam8329e520 != '\0') {
    return;
  }
  pcRam8329e50c = fn_82BA02A8;
  pcRam8329e500 = fn_825DC040;
  pcRam8329e504 = fn_825DC0D0;
  pcRam8329e508 = fn_82BA02A8;
  pcRam8329e514 = fn_825DC128;
  pcRam8329e518 = fn_825DC2B8;
  pcRam8329e51c = fn_82BA02A8;
  cRam8329e520 = 1;
  return;
}
