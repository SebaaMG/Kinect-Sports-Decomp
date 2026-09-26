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
extern int fn_823B4970();
extern int fn_828E9D90();
extern int fn_828E9DA8();
extern int fn_828E9FF8();


void fn_828CD6A0(int param_1,undefined8 param_2)

{
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar1;
  undefined8 uVar2;
  
  iVar3 = fn_828E9DA8(param_2);
  iVar4 = fn_828E9D90(param_2);
  if (iVar3 - iVar4 < 8) {
    uVar5 = 0;
  }
  else {
    uVar5 = fn_828E9FF8(param_2,8);
  }
  *(undefined4 *)(param_1 + 0x84) = uVar5;
  iVar3 = fn_828E9DA8(param_2);
  iVar4 = fn_828E9D90(param_2);
  if (iVar3 - iVar4 < 5) {
    uVar5 = 0;
  }
  else {
    uVar5 = fn_828E9FF8(param_2,5);
  }
  *(undefined4 *)(param_1 + 0x88) = uVar5;
  iVar3 = fn_828E9DA8(param_2);
  iVar4 = fn_828E9D90(param_2);
  if (iVar3 - iVar4 < 1) {
    lVar1 = 0;
  }
  else {
    lVar1 = fn_828E9FF8(param_2,1);
  }
  *(char *)(param_1 + 0x8c) = '\x01' - (lVar1 == 0);
  iVar3 = fn_828E9DA8(param_2);
  iVar4 = fn_828E9D90(param_2);
  if (iVar3 - iVar4 < 0xd) {
    uVar2 = 0;
  }
  else {
    uVar2 = fn_828E9FF8(param_2,0xd);
  }
  fn_823B4970(param_1 + 0x98,param_2,uVar2,0);
  return;
}

