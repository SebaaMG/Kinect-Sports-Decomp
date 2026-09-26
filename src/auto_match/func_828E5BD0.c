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
extern int fn_828B02D0();
extern int fn_828BF798();
extern int fn_828E2DC8();
extern int fn_828E5860();
extern int fn_828E5A80();
extern unsigned int lbl_821C2734;
extern unsigned int uStack_23;
extern unsigned int uStack_24;
extern unsigned int uStack_28;
extern unsigned int uStack_30;


/* WARNING: Removing unreachable block (ram,0x828e5c30) */

void fn_828E5BD0(void)

{
  undefined **ppuStack_50;
  code *pcStack_4c;
  undefined ***pppuStack_40;
  undefined4 uStack_30;
  code *pcStack_2c;
  undefined4 uStack_28;
  undefined1 uStack_24;
  undefined1 uStack_23;
  char *pcStack_20;
  
  fn_828B02D0(&uStack_30);
  uStack_23 = 0;
  pcStack_20 = "Function Call Message";
  pcStack_2c = fn_828E5860;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_30 = 0x1b;
  fn_828BF798(&uStack_30);
  pcStack_4c = fn_828E5A80;
  pppuStack_40 = &ppuStack_50;
  ppuStack_50 = &lbl_821C2734;
  fn_828E2DC8(&ppuStack_50);
  return;
}

