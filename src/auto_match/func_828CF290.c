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
extern int fn_8288B2D8();
extern int fn_828E9D90();
extern int fn_828E9DA8();
extern int fn_828E9FF8();


void fn_828CF290(int param_1,int *param_2,undefined8 param_3,int param_4,undefined4 *param_5)

{
  int iVar2;
  int iVar3;
  undefined8 uVar1;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  
  iVar5 = *(int *)(param_1 + 8);
  uVar6 = 0;
  if (0 < iVar5) {
    iVar2 = fn_828E9DA8(param_3);
    iVar3 = fn_828E9D90(param_3);
    if (iVar2 - iVar3 < iVar5) {
      uVar6 = 0;
    }
    else {
      uVar6 = fn_828E9FF8(param_3,iVar5);
    }
  }
  uVar1 = (**(code **)(*param_2 + 0x3c))(param_2);
  uVar4 = fn_8288B2D8(uVar1,uVar6);
  *param_5 = uVar4;
  iVar5 = fn_828E9DA8(param_3);
  iVar2 = fn_828E9D90(param_3);
  if (iVar5 - iVar2 < 2) {
    *(undefined4 *)(param_4 + 4) = 0;
    *(undefined4 *)(param_4 + 0x10) = 0;
  }
  else {
    uVar4 = fn_828E9FF8(param_3,2);
    *(undefined4 *)(param_4 + 4) = uVar4;
    *(undefined4 *)(param_4 + 0x10) = 0;
  }
  return;
}

