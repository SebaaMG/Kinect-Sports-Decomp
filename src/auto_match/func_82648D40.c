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
extern int fn_8264D6C0();
extern int fn_8265C990();


longlong fn_82648D40(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  int *piVar11;
  
  iVar1 = *param_1;
  lVar4 = (ulonglong)(uint)param_1[3] - 1;
  param_1[3] = (int)lVar4;
  if (lVar4 == 0) {
    if (param_1[1] == 9) {
      uVar8 = 0;
      if (param_1[0x26] != 0) {
        piVar9 = param_1 + 0x16;
        do {
          iVar2 = *piVar9;
          iVar5 = piVar9[-0xf] - *(int *)(iVar2 + 8);
          uVar7 = iVar5 >> 2;
          uVar6 = (iVar5 >> 6) + (uint)((int)uVar7 < 0 && (uVar7 & 0xf) != 0);
          uVar7 = uVar6 >> 3;
          *(byte *)(iVar2 + uVar7) = *(byte *)(iVar2 + uVar7) & ~(byte)(1 << (uVar6 & 7));
          if (((*(int *)*piVar9 == 0) && (iVar2 = *piVar9, *(int *)(iVar2 + 4) == 0)) &&
             (iVar5 = iVar1 + 0x5510, iVar1 + 0x5510 != iVar2)) {
            while (iVar10 = iVar5, *(int *)(iVar10 + 0xc) != 0) {
              iVar5 = *(int *)(iVar10 + 0xc);
              if (iVar5 == iVar2) {
                lVar4 = ((ulonglong)(*(uint *)(iVar5 + 8) >> 0x14) + 0x200 & 0x1000) +
                        ((ulonglong)*(uint *)(iVar5 + 8) & 0x1fffffff);
                fn_8264D6C0(lVar4 + -0x40000000,lVar4 + -0x3ffff000,0);
                fn_8265C990(*(undefined4 *)(iVar5 + 8),0xffffffffb1800000);
                *(undefined4 *)(iVar10 + 0xc) = *(undefined4 *)(iVar5 + 0xc);
                fn_8265C990(iVar5,0x24800000);
                iVar5 = iVar10;
              }
            }
          }
          uVar8 = uVar8 + 1;
          piVar9 = piVar9 + 1;
        } while (uVar8 < (uint)param_1[0x26]);
      }
    }
    else if (param_1[1] == 10) {
      if (param_1[7] != 0) {
        iVar2 = param_1[0x16];
        iVar5 = param_1[7] - *(int *)(iVar2 + 8);
        uVar8 = iVar5 >> 2;
        uVar7 = (iVar5 >> 6) + (uint)((int)uVar8 < 0 && (uVar8 & 0xf) != 0);
        uVar8 = uVar7 >> 3;
        *(byte *)(iVar2 + uVar8) = *(byte *)(iVar2 + uVar8) & ~(byte)(1 << (uVar7 & 7));
      }
      piVar9 = (int *)param_1[0x16];
      if (((*piVar9 == 0) && (piVar9[1] == 0)) &&
         (piVar3 = (int *)(iVar1 + 0x5510), (int *)(iVar1 + 0x5510) != piVar9)) {
        while (piVar11 = piVar3, piVar11[3] != 0) {
          piVar3 = (int *)piVar11[3];
          if (piVar3 == piVar9) {
            lVar4 = ((ulonglong)((uint)piVar3[2] >> 0x14) + 0x200 & 0x1000) +
                    ((ulonglong)(uint)piVar3[2] & 0x1fffffff);
            fn_8264D6C0(lVar4 + -0x40000000,lVar4 + -0x3ffff000,0);
            fn_8265C990(piVar3[2],0xffffffffb1800000);
            piVar11[3] = piVar3[3];
            fn_8265C990(piVar3,0x24800000);
            piVar3 = piVar11;
          }
        }
      }
      if ((param_1[4] & 0xff000000U) == 0x2000000) {
        *(byte *)(iVar1 + 0x2abf) = *(byte *)(iVar1 + 0x2abf) & 0x7f;
      }
    }
    param_1[2] = 0x78787878;
    fn_8265C990(param_1,0x24800000);
    lVar4 = 0;
  }
  return lVar4;
}

