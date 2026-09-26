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
extern int fn_822ACB68();
extern int fn_82526C10();


void fn_822ACAD8(undefined8 param_1,int param_2,undefined8 param_3)

{
  char cVar1;
  char *pcVar2;
  char acStack_90 [128];
  char acStack_10 [16];
  
  pcVar2 = acStack_90;
  do {
    if (acStack_10 <= pcVar2) break;
    cVar1 = pcVar2[param_2 - (int)acStack_90];
    *pcVar2 = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  if (pcVar2 == acStack_10) {
    pcVar2[-1] = '\0';
  }
  fn_82526C10(acStack_90,0x80,0xffffffff821ac4b4,param_3,param_1);
  fn_82526C10(acStack_90);
  fn_822ACB68(param_1,acStack_90);
  return;
}

