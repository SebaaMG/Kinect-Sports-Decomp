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
extern int fn_82AB1818();
extern int fn_82F6EDE8();
extern int iRam83160628;


void fn_82B7C8D0(int param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  char acStack_120 [288];
  
  if (iRam83160628 != 0) {
    iVar1 = fn_82F6EDE8(acStack_120,0xff,param_2,param_3);
    acStack_120[iVar1] = '\0';
    if (((acStack_120[0] != '\0') && (iRam83160628 == 2)) && (*(char *)(param_1 + 0x558) != '\0')) {
      uVar2 = fn_82AB1818(0xffffffff820db484);
      *(undefined4 *)(param_1 + 0x55c) = uVar2;
      *(undefined1 *)(param_1 + 0x558) = 0;
    }
  }
  return;
}

