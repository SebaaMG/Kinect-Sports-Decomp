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
extern int fn_82963400();


undefined8 fn_82968BC8(int param_1,int param_2,int param_3)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  
  puVar1 = *(uint **)(param_1 * 4 + *(int *)(param_3 + 0x18));
  puVar2 = *(uint **)(param_2 * 4 + *(int *)(param_3 + 0x18));
  uVar12 = *puVar1;
  if ((((((uVar12 ^ *puVar2) & 0xfff00000) == 0) &&
       (uVar8 = (ulonglong)uVar12 & 0xfffff, uVar8 < ((ulonglong)*puVar2 & 0xfffff))) &&
      (0xfffffff < (uVar12 & 0xf0000000))) && ((uVar12 & 0xf0000000) < 0x40000001)) {
    uVar12 = puVar1[3];
    uVar7 = 0;
    if (uVar12 != 0) {
      iVar6 = 0;
      do {
        iVar3 = *(int *)(*(int *)(iVar6 + puVar1[4]) * 4 + *(int *)(param_3 + 0x14));
        iVar4 = *(int *)(*(int *)(iVar6 + puVar2[4]) * 4 + *(int *)(param_3 + 0x14));
        if (((*(int *)(iVar3 + 4) != *(int *)(iVar4 + 4)) ||
            (*(int *)(iVar3 + 0x14) != *(int *)(iVar4 + 0x14))) ||
           (*(int *)(iVar3 + 0x18) != *(int *)(iVar4 + 0x18))) goto LAB_82968c00;
        uVar7 = uVar7 + 1;
        iVar6 = iVar6 + 4;
      } while (uVar7 < uVar12);
    }
    uVar10 = 0;
    uVar9 = puVar1[1] / uVar8;
    trapWord(6,uVar8,0);
    if (uVar12 != 0) {
      do {
        uVar8 = (ulonglong)puVar2[3];
        uVar11 = 0;
        if (uVar8 != 0) {
          do {
            uVar12 = 0;
            if (uVar9 != 0) {
              do {
                if (*(int *)(*(int *)(*(int *)((int)(((longlong)(int)puVar1[3] *
                                                      (longlong)(int)uVar12 + uVar10 & 0xffffffff)
                                                    << 2) + puVar1[2]) * 4 +
                                     *(int *)(param_3 + 0x14)) + 0x30) !=
                    *(int *)(*(int *)(*(int *)((int)(((longlong)(int)uVar8 * (longlong)(int)uVar12 +
                                                      uVar11 & 0xffffffff) << 2) + puVar2[2]) * 4 +
                                     *(int *)(param_3 + 0x14)) + 0x30)) break;
                uVar12 = uVar12 + 1;
              } while (uVar12 < uVar9);
            }
            if (uVar12 == uVar9) break;
            iVar6 = fn_82963400(puVar1);
            if (iVar6 != 0) {
              uVar12 = 0;
              if (uVar9 != 0) {
                iVar6 = 1;
                do {
                  if (*(int *)(*(int *)(*(int *)((int)(((longlong)iVar6 * (longlong)(int)puVar1[3] +
                                                        uVar10 & 0xffffffff) << 2) + puVar1[2]) * 4
                                       + *(int *)(param_3 + 0x14)) + 0x30) !=
                      *(int *)(*(int *)(*(int *)((int)(((longlong)(int)puVar2[3] *
                                                        (longlong)(int)uVar12 + uVar11 & 0xffffffff)
                                                      << 2) + puVar2[2]) * 4 +
                                       *(int *)(param_3 + 0x14)) + 0x30)) break;
                  uVar12 = uVar12 + 1;
                  iVar6 = iVar6 + -1;
                } while (uVar12 < uVar9);
              }
            }
            if (uVar12 == uVar9) break;
            uVar8 = (ulonglong)puVar2[3];
            uVar11 = uVar11 + 1;
          } while ((uVar11 & 0xffffffff) < uVar8);
        }
        if ((uVar11 & 0xffffffff) == (ulonglong)puVar2[3]) goto LAB_82968c00;
        uVar10 = uVar10 + 1;
      } while ((uVar10 & 0xffffffff) < (ulonglong)puVar1[3]);
    }
    uVar5 = 1;
  }
  else {
LAB_82968c00:
    uVar5 = 0;
  }
  return uVar5;
}

