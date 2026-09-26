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
extern int fn_8249D878();


ulonglong fn_8249C848(int param_1,ulonglong param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  
  uVar4 = 0;
  uVar5 = 0;
  if ((*(uint *)(param_1 + 0x50) & param_2) != 0) {
    if (*(int *)(param_1 + 0x88) == 0) {
      uVar4 = *(uint *)(param_1 + 0x60) & param_2;
      uVar5 = (uint)uVar4;
    }
    else {
      if ((*(uint *)(param_1 + 100) & param_2) == 0) {
        if (*(int *)(param_1 + 8) != 0) goto LAB_8249c8c4;
        uVar4 = (ulonglong)((*(uint *)(param_1 + 0x68) & param_2) != 0);
      }
      else {
        uVar4 = 1;
      }
      uVar5 = 0;
    }
  }
LAB_8249c8c4:
  if ((int)param_2 == 8) {
    iVar1 = *(int *)(param_1 + 0x110);
    uVar3 = fn_8249D878(0);
    iVar2 = *(int *)(iVar1 + 0x14);
    if (*(int *)(iVar1 + 0x10) != iVar2) {
      uVar3 = (ulonglong)*(uint *)(iVar2 + -8);
    }
    uVar4 = uVar3 & uVar4;
  }
  if (param_3 != (uint *)0x0) {
    *param_3 = -(uint)(param_2 != 0x20) & uVar5;
  }
  return uVar4;
}

