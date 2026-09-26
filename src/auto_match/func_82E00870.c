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
extern unsigned int *auStack_50;
extern int fn_82D8CD68();
extern int fn_82E00530();
extern int fn_82E00628();


void fn_82E00870(int param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 auStack_50 [80];
  
  iVar1 = *(int *)(param_1 + 0x14);
  uVar2 = 0;
  if (0 < iVar1) {
    do {
      fn_82E00628(param_1,param_2,uVar2);
      fn_82E00530(param_1,param_2,uVar2,auStack_50);
      fn_82D8CD68(*(undefined4 *)(uVar2 * 0x60 + *(int *)(param_1 + 0x10)),auStack_50);
      uVar2 = uVar2 + 1 & 0xff;
    } while ((int)uVar2 < iVar1);
  }
  return;
}

