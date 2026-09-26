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
extern unsigned int *auStack_28;
extern int fn_82569980();
extern int fn_8262A108();
extern int fn_8265C9E0();
extern int fn_82A1EFC0();


void fn_8260EB78(int param_1,undefined8 param_2,int param_3,undefined8 param_4,int param_5)

{
  undefined4 uVar1;
  int iVar3;
  int iVar4;
  ulonglong uVar2;
  undefined1 auStack_28 [40];
  
  if (param_5 == 0) {
    iVar3 = fn_82569980(param_1,*(undefined1 *)(param_3 + 0x10));
    if (iVar3 == -1) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(iVar3 * 0x30 + *(int *)(param_1 + 0xd8) + 0x10);
    }
    iVar4 = fn_82569980(param_1,*(undefined1 *)(param_3 + 0x11));
    if (iVar4 == -1) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(iVar4 * 0x30 + *(int *)(param_1 + 0xd8) + 0x10);
    }
    if ((iVar3 != 0) && (iVar4 != 0)) {
      uVar1 = **(undefined4 **)(param_1 + 0x60);
      uVar2 = fn_8265C9E0(0x1ba0);
      if ((uVar2 & 0xffffffff) != 0) {
        fn_8262A108(uVar2,uVar1,iVar3,iVar4);
      }
    }
  }
  else if ((param_5 == 1) || (param_5 == 3)) {
    iVar3 = fn_82569980(param_1,*(undefined1 *)(param_3 + 0x10));
    if (iVar3 == -1) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(iVar3 * 0x30 + *(int *)(param_1 + 0xd8) + 0x10);
    }
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      fn_82A1EFC0(auStack_28,0,4);
    }
  }
  return;
}

