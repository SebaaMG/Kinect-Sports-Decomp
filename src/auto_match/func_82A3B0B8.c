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


void fn_82A3B0B8(int *param_1,int param_2,uint param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  uint *puVar11;
  
  iVar2 = (uint)*(ushort *)(*param_1 + param_2) * 4;
  uVar7 = *(uint *)(iVar2 + param_1[2]);
  *(int *)(iVar2 + param_1[2]) = param_2;
  if (param_3 < uVar7) {
    iVar2 = 2;
    iVar9 = 2;
    iVar8 = 2;
    puVar11 = (uint *)(param_2 * 4 + param_1[3]);
    puVar10 = (uint *)(param_1[4] + param_2 * 4);
    do {
      iVar5 = *param_1;
      iVar3 = iVar2 + uVar7;
      lVar1 = (ulonglong)*(byte *)(iVar5 + iVar3) - (ulonglong)*(byte *)(iVar5 + iVar2 + param_2);
      iVar6 = iVar2;
      if (lVar1 == 0) {
        iVar4 = (iVar3 - uVar7) + param_2;
        do {
          iVar6 = iVar6 + 1;
          iVar4 = iVar4 + 1;
          if (0x31 < iVar6) break;
          lVar1 = (ulonglong)*(byte *)((iVar3 - iVar2) + iVar5 + iVar6) -
                  (ulonglong)*(byte *)(iVar4 + iVar5);
        } while (lVar1 == 0);
      }
      if ((int)lVar1 < 0) {
        if (iVar8 < iVar6) {
          if (0x31 < iVar6) {
LAB_82a3b1fc:
            *puVar11 = *(uint *)(uVar7 * 4 + param_1[3]);
            uVar7 = *(uint *)(param_1[4] + uVar7 * 4);
            goto LAB_82a3b1f4;
          }
          iVar2 = iVar9;
          iVar8 = iVar6;
          if (iVar6 <= iVar9) {
            iVar2 = iVar6;
          }
        }
        *puVar10 = uVar7;
        iVar5 = param_1[3];
        puVar10 = (uint *)(uVar7 * 4 + iVar5);
      }
      else {
        if (iVar9 < iVar6) {
          if (0x31 < iVar6) goto LAB_82a3b1fc;
          iVar2 = iVar6;
          iVar9 = iVar6;
          if (iVar8 <= iVar6) {
            iVar2 = iVar8;
          }
        }
        *puVar11 = uVar7;
        iVar5 = param_1[4];
        puVar11 = (uint *)(uVar7 * 4 + iVar5);
      }
      uVar7 = *(uint *)(uVar7 * 4 + iVar5);
    } while (param_3 < uVar7);
    uVar7 = 0;
    *puVar11 = 0;
LAB_82a3b1f4:
    *puVar10 = uVar7;
  }
  else {
    *(undefined4 *)(param_1[4] + param_2 * 4) = 0;
    *(undefined4 *)(param_1[3] + param_2 * 4) = 0;
  }
  return;
}

