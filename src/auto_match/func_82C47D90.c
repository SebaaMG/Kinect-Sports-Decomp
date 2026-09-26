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
extern int fn_82F691F0();


undefined8 fn_82C47D90(int param_1,int param_2,uint *param_3,undefined4 param_4,int param_5)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  
  *(int *)(param_1 + 0x55b4) = param_2;
  uVar4 = 0;
  if (param_2 == 0) {
    **(undefined4 **)(param_1 + 0x55b8) = 0;
    *(undefined4 *)(param_1 + 0x55bc) = 1;
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(*(undefined4 *)(param_1 + 0x55b8),0,*(int *)(param_1 + 0x55dc) << 2);
  }
  if (*(uint *)(param_1 + 0x55bc) < (uint)(*(int *)(param_1 + 0xbc) >> 4)) {
    if (*param_3 <= *(uint *)(*(uint *)(param_1 + 0x55bc) * 4 + *(int *)(param_1 + 0x55b8) + -4)) {
      *param_3 = *(uint *)(param_1 + 0x55dc);
    }
    if (*(uint *)(param_1 + 0x55dc) <= *param_3) {
      uVar9 = *(uint *)(param_1 + 0x55bc);
      uVar10 = (ulonglong)uVar9;
      uVar4 = 1;
      if (uVar10 < 3) {
        if (uVar10 == 2) {
          *param_3 = *(int *)(*(int *)(param_1 + 0x55b8) + 4) << 1;
        }
        else {
          uVar8 = *(uint *)(param_1 + 0x55e0);
          uVar1 = *(uint *)(param_1 + 0x55e8);
          if (((ulonglong)uVar1 < (ulonglong)uVar8) && (2 < (int)uVar1)) {
            uVar10 = (ulonglong)uVar8 - 1;
            trapWord(6,uVar10,0);
            uVar8 = (uint)(((longlong)(*(int *)(param_1 + 0x5c) >> 4) * (longlong)(int)(uVar1 - 1) +
                            (ulonglong)(uVar8 >> 1) & 0xffffffff) / (uVar10 & 0xffffffff));
            iVar6 = *(int *)(uVar9 * 4 + *(int *)(param_1 + 0x55b8) + -4);
          }
          else {
            uVar8 = *(uint *)(param_1 + 0x55e4);
            if ((ulonglong)uVar8 < 2) goto LAB_82c47f88;
            trapWord(6,(ulonglong)uVar8,0);
            uVar8 = (uint)(*(int *)(param_1 + 0x5c) >> 4) / uVar8;
            iVar6 = *(int *)(uVar9 * 4 + *(int *)(param_1 + 0x55b8) + -4);
          }
          *param_3 = uVar8 + iVar6;
        }
      }
      else {
        uVar5 = 0;
        iVar6 = 2;
        if (2 < (int)uVar9) {
          iVar7 = 8;
          do {
            iVar3 = iVar7 + *(int *)(param_1 + 0x55b8);
            puVar2 = (uint *)(iVar7 + *(int *)(param_1 + 0x55b8));
            iVar6 = iVar6 + 1;
            iVar7 = iVar7 + 4;
            uVar5 = ((ulonglong)*puVar2 - (ulonglong)*(uint *)(iVar3 + -4)) + uVar5;
          } while (iVar6 < (int)uVar9);
        }
        trapWord(6,uVar10 - 2,0);
        *param_3 = (int)((uVar5 & 0xffffffff) / (uVar10 - 2 & 0xffffffff)) +
                   *(int *)(uVar9 * 4 + *(int *)(param_1 + 0x55b8) + -4);
      }
LAB_82c47f88:
      uVar9 = *(int *)(param_1 + 0x55dc) - 1;
      if (uVar9 < *param_3) {
        if (uVar9 <= *(uint *)(*(int *)(param_1 + 0x55bc) * 4 + *(int *)(param_1 + 0x55b8)))
        goto LAB_82c47e34;
        *param_3 = uVar9;
      }
    }
    *(undefined4 *)(*(int *)(param_1 + 0x55d4) + *param_3 * 4) = 1;
    if (param_5 == 0) {
      *(uint *)(*(int *)(param_1 + 0x55bc) * 4 + *(int *)(param_1 + 0x55b8)) = *param_3;
      *(undefined4 *)(*(int *)(param_1 + 0x55c4) + *(int *)(param_1 + 0x55bc) * 4) = param_4;
    }
    else {
      *(uint *)((*(int *)(param_1 + 0x55bc) + 1) * 4 + *(int *)(param_1 + 0x55b8)) = *param_3;
      *(undefined4 *)((*(int *)(param_1 + 0x55bc) + 1) * 4 + *(int *)(param_1 + 0x55c4)) = param_4;
    }
    *(int *)(param_1 + 0x55bc) = *(int *)(param_1 + 0x55bc) + 1;
    *(int *)(param_1 + 0x55e0) = *(int *)(param_1 + 0x55e0) + 1;
  }
  else {
LAB_82c47e34:
    uVar4 = 1;
  }
  return uVar4;
}

