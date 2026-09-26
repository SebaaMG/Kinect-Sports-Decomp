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
extern int fn_82F63CA0();
extern int fn_82F68CC0();


ulonglong fn_82C024C8(int param_1,ulonglong param_2,uint param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int aiStack_50 [20];
  
  *param_4 = 0;
  if (0x10000 < param_3) {
    return 0;
  }
  uVar5 = *(ulonglong *)(param_1 + 0x210);
  if (param_2 < uVar5) {
LAB_82c02570:
    uVar5 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x218);
    if (param_3 + param_2 <= uVar1 + uVar5) goto LAB_82c02664;
    if ((param_2 < uVar5) || (uVar4 = (ulonglong)uVar1, uVar4 + uVar5 <= param_2))
    goto LAB_82c02570;
    uVar5 = ((uVar5 & 0xffffffff) - (param_2 & 0xffffffff)) + uVar4;
    if ((ulonglong)(uVar1 >> 1) < (uVar5 & 0xffffffff)) {
      fn_82F63CA0((ulonglong)*(uint *)(param_1 + 0x20c),
                   (*(uint *)(param_1 + 0x20c) - uVar5) + uVar4,uVar5);
    }
    else {
      fn_82F68CC0();
    }
  }
  if (*(int *)(param_1 + 0x70) != 0) {
    (**(code **)(**(int **)(param_1 + 0x34) + 0xc))();
  }
  iVar2 = (**(code **)(**(int **)(param_1 + 0x34) + 0x38))(*(int **)(param_1 + 0x34),1);
  if ((iVar2 < 0) ||
     (iVar2 = (**(code **)(**(int **)(param_1 + 0x34) + 0x34))
                        (*(int **)(param_1 + 0x34),(uVar5 & 0xffffffff) + param_2), iVar2 < 0)) {
    iVar2 = *(int *)(param_1 + 0x70);
  }
  else {
    aiStack_50[0] = 0;
    iVar3 = (**(code **)(**(int **)(param_1 + 0x34) + 0x3c))
                      (*(int **)(param_1 + 0x34),*(uint *)(param_1 + 0x20c) + uVar5,0x10000 - uVar5,
                       aiStack_50);
    iVar2 = *(int *)(param_1 + 0x70);
    if (-1 < iVar3) {
      if (iVar2 != 0) {
        (**(code **)(**(int **)(param_1 + 0x34) + 0x14))();
      }
      *(ulonglong *)(param_1 + 0x210) = param_2;
      *(int *)(param_1 + 0x218) = aiStack_50[0] + (int)uVar5;
LAB_82c02664:
      uVar4 = (*(uint *)(param_1 + 0x218) - param_2) + *(longlong *)(param_1 + 0x210);
      uVar5 = (ulonglong)param_3;
      if (uVar4 <= param_3) {
        uVar5 = uVar4;
      }
      *param_4 = (*(int *)(param_1 + 0x20c) - (int)*(longlong *)(param_1 + 0x210)) + (int)param_2;
      return uVar5 & 0xffffffff;
    }
  }
  if (iVar2 != 0) {
    (**(code **)(**(int **)(param_1 + 0x34) + 0x14))();
  }
  return 0;
}

