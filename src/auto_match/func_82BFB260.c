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
extern int fn_82BF39E8();
extern int fn_82BF6D88();
extern unsigned int iStack_20;
extern unsigned int lbl_831751CC;
extern unsigned int uStack_1c;


void fn_82BFB260(int param_1)

{
  char *pcVar1;
  int iVar3;
  ulonglong uVar2;
  undefined4 uVar4;
  int iStack_20;
  undefined4 uStack_1c;
  
  pcVar1 = *(char **)(param_1 + 0xc);
  iStack_20 = 0;
  uStack_1c = 0;
  if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
    iVar3 = fn_82BF39E8(pcVar1,&iStack_20,&uStack_1c);
    if (iVar3 != 0) {
      uVar2 = thunk_FUN_82be5550(0x1c);
      if ((uVar2 & 0xffffffff) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = fn_82BF6D88(uVar2,iStack_20,uStack_1c);
      }
      *(int *)(param_1 + 0x10) = iVar3;
      if (iVar3 != 0) {
        uVar4 = 1;
        goto LAB_82bfb308;
      }
    }
    if (iStack_20 != 0) {
      (*(code *)lbl_831751CC)();
    }
  }
  uVar4 = 2;
LAB_82bfb308:
  *(undefined4 *)(param_1 + 8) = uVar4;
  return;
}

