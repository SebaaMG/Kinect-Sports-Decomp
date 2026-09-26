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
extern int fn_82930318();
extern int fn_829304E0();
extern int fn_829306F0();


undefined8 fn_8297F280(undefined8 param_1,int param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  int *piVar10;
  byte *pbVar11;
  int *piVar12;
  
  iVar7 = *(int *)(param_3 + 0x14);
  piVar12 = (int *)(param_2 + 0x1c);
  if (*(int *)(param_2 + 0x1c) != 0) {
    do {
      iVar3 = *piVar12;
      pbVar9 = *(byte **)(iVar3 + 0x10);
      pbVar11 = *(byte **)(iVar7 + 0x18);
      do {
        bVar1 = *pbVar11;
        bVar2 = *pbVar9;
        iVar8 = (uint)bVar1 - (uint)bVar2;
        if (bVar1 == 0) break;
        pbVar11 = pbVar11 + 1;
        pbVar9 = pbVar9 + 1;
      } while ((uint)bVar1 == (uint)bVar2);
      if (iVar8 < 0) {
        piVar12 = (int *)(iVar3 + 8);
      }
      else {
        if (iVar8 < 1) break;
        piVar12 = (int *)(iVar3 + 0xc);
      }
    } while (*piVar12 != 0);
    if (*piVar12 != 0) goto LAB_8297f350;
  }
  uVar6 = fn_82930318(0x18);
  if ((uVar6 & 0xffffffff) == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = fn_829306F0(uVar6,*(undefined4 *)(iVar7 + 0x18),0,0,0);
  }
  *piVar12 = iVar7;
  if (iVar7 == 0) {
    return 0xffffffff8007000e;
  }
LAB_8297f350:
  uVar6 = fn_82930318(0x14);
  if ((uVar6 & 0xffffffff) == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = fn_829304E0(uVar6,param_3,*(undefined4 *)(*piVar12 + 0x14),0xffffffff8204dcf4);
  }
  *(int *)(*piVar12 + 0x14) = iVar7;
  if (iVar7 == 0) {
    return 0xffffffff8007000e;
  }
  if (*(int *)(*(int *)(*piVar12 + 0x14) + 0xc) == 0) {
    uVar6 = 0;
    piVar10 = piVar12;
    for (iVar7 = *piVar12; iVar7 != 0; iVar7 = *(int *)(iVar7 + 0xc)) {
      while ((iVar7 = *piVar10, iVar7 != 0 && (iVar3 = *(int *)(iVar7 + 8), iVar3 != 0))) {
        uVar4 = *(undefined4 *)(iVar3 + 0xc);
        *(int *)(iVar3 + 0xc) = iVar7;
        *(undefined4 *)(iVar7 + 8) = uVar4;
        *piVar10 = iVar3;
      }
      piVar10 = (int *)(iVar7 + 0xc);
      uVar6 = uVar6 + 1;
    }
    while (uVar6 = (uVar6 & 0xffffffff) >> 1, uVar5 = uVar6, piVar10 = piVar12, uVar6 != 0) {
      for (; uVar5 != 0; uVar5 = uVar5 - 1) {
        iVar7 = *piVar10;
        if ((iVar7 != 0) && (iVar3 = *(int *)(iVar7 + 0xc), iVar3 != 0)) {
          uVar4 = *(undefined4 *)(iVar3 + 8);
          *(int *)(iVar3 + 8) = iVar7;
          *(undefined4 *)(iVar7 + 0xc) = uVar4;
          *piVar10 = iVar3;
        }
        piVar10 = (int *)(*piVar10 + 0xc);
      }
    }
  }
  return 0;
}

