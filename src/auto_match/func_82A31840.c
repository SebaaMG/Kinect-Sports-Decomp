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
extern int fn_82A2C8E0();
extern int fn_82A30780();


undefined8 fn_82A31840(undefined8 param_1,int param_2,longlong *param_3)

{
  uint uVar1;
  bool bVar2;
  int iVar4;
  undefined8 uVar3;
  int iVar5;
  longlong lVar6;
  int aiStack_40 [16];
  
  lVar6 = *param_3;
  bVar2 = false;
  if ((lVar6 != -1) && (lVar6 != 0)) {
    iVar4 = fn_82A2C8E0(lVar6,aiStack_40);
    if (iVar4 != 0) {
      iVar4 = aiStack_40[0];
      if (aiStack_40[0] != *(int *)(param_2 + 0x40)) {
        bVar2 = true;
      }
      goto LAB_82a318ac;
    }
    goto LAB_82a31884;
  }
  iVar4 = *(int *)(param_2 + 0x40);
LAB_82a318ac:
  lVar6 = param_3[2];
  if ((lVar6 == -1) || (lVar6 == 0)) {
    iVar5 = *(int *)(param_2 + 0x44);
  }
  else {
    iVar5 = fn_82A2C8E0(lVar6,aiStack_40);
    if (iVar5 == 0) goto LAB_82a31884;
    iVar5 = aiStack_40[0];
    if (aiStack_40[0] != *(int *)(param_2 + 0x44)) {
      bVar2 = true;
    }
  }
  uVar1 = *(uint *)(param_3 + 4);
  if (uVar1 == 0) {
LAB_82a31920:
    if (bVar2) {
      uVar3 = fn_82A30780(param_1,param_2);
      if ((int)uVar3 < 0) {
        return uVar3;
      }
      *(int *)(param_2 + 0x40) = iVar4;
      *(int *)(param_2 + 0x44) = iVar5;
      *(byte *)(param_2 + 0x35) = *(byte *)(param_2 + 0x35) | 0x10;
    }
    uVar3 = 0;
  }
  else {
    if ((*(byte *)(param_2 + 0x35) & 2) == 0) {
      if ((uVar1 & 0x10) == 0) goto LAB_82a31920;
    }
    else if ((uVar1 & 0x10) != 0) goto LAB_82a31920;
LAB_82a31884:
    uVar3 = 0xffffffffc000000d;
  }
  return uVar3;
}

