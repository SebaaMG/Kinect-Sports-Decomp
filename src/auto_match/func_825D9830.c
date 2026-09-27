extern char *pcRam83299048;
extern char *pcRam83299050;
extern char *pcRam83299054;
extern char *pcRam8329905c;
extern char *pcRam83299060;
extern char *pcRam83299064;
extern unsigned int *puRam8329904c;
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
extern char cRam83299068;
extern int fn_825D9818();
extern int fn_82BA02A8();
extern int fn_82D7E470();
extern unsigned int lbl_8261C868;


void fn_825D9830(void)

{
  if (cRam83299068 != '\0') {
    return;
  }
  pcRam83299048 = fn_825D9818;
  puRam8329904c = &lbl_8261C868;
  pcRam83299050 = fn_82BA02A8;
  pcRam83299054 = fn_82BA02A8;
  pcRam8329905c = fn_82D7E470;
  pcRam83299060 = fn_82BA02A8;
  pcRam83299064 = fn_82BA02A8;
  cRam83299068 = 1;
  return;
}
