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
#define TBLr 0
extern float lbl_821954C8;


void fn_82646E80(int *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  ulonglong uVar5;
  int in_r13;
  
  if (param_1[1] != 0) {
    uVar5 = TBLr;
    uVar1 = param_1[4];
    uVar5 = (uVar5 & 0xffffffff) - (ulonglong)(uint)param_1[5];
    uVar2 = *(uint *)(*(int *)(in_r13 + 0x100) + 0x58);
    iVar3 = *param_1;
    if (param_1[1] == 3) {
      *(ulonglong *)(iVar3 + 0x5540) = (uVar5 & 0xffffffff) + *(longlong *)(iVar3 + 0x5540);
    }
    else {
      *(ulonglong *)(iVar3 + 0x5538) = (uVar5 & 0xffffffff) + *(longlong *)(iVar3 + 0x5538);
    }
    pcVar4 = *(code **)(*param_1 + 0x354c);
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)((double)(*(float *)(*param_1 + 0x5530) * (float)(uVar5 & 0xffffffff) * lbl_821954C8)
                ,0,param_1[1],param_3,(ulonglong)uVar2 - (ulonglong)uVar1);
    }
  }
  return;
}

