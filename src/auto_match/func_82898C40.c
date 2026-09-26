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


ulonglong fn_82898C40(int param_1,longlong param_2,longlong param_3,longlong param_4)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  int iVar5;
  int iVar6;
  ulonglong uVar4;
  byte *pbVar7;
  longlong lVar8;
  byte *pbVar9;
  
  uVar1 = *(uint *)(param_1 + 4);
  iVar5 = (int)param_3;
  if (uVar1 != *(uint *)(iVar5 + 4)) {
    return 0;
  }
  if (8 < uVar1) {
    return 0;
  }
  if ((uVar1 == 1) || (uVar1 == 2)) {
LAB_82898c8c:
    return (ulonglong)
           (*(char *)((int)((param_4 + 2U & 0xffffffff) << 2) + iVar5) ==
           *(char *)((int)((param_2 + 2U & 0xffffffff) << 2) + param_1));
  }
  if ((uVar1 != 3) && (uVar1 != 4)) {
    if (uVar1 == 5) {
      return (ulonglong)
             (*(float *)((int)((param_2 + 2U & 0xffffffff) << 2) + param_1) ==
             *(float *)((int)((param_4 + 2U & 0xffffffff) << 2) + iVar5));
    }
    if (uVar1 != 6) {
      if (uVar1 == 7) {
        uVar1 = *(uint *)(param_1 + 0xc);
        if (uVar1 == *(uint *)(iVar5 + 0xc)) {
          if (4 < uVar1) {
            if (*(uint *)(iVar5 + 0xc) < 5) {
              uVar4 = (param_4 + 2U & 0x3fffffff) * 4 + param_3;
            }
            else {
              uVar4 = (ulonglong)*(uint *)((int)((param_4 + 2U & 0xffffffff) << 2) + iVar5);
            }
            lVar8 = 0;
            pbVar9 = *(byte **)((int)((param_2 + 2U & 0xffffffff) << 2) + param_1);
            if (uVar1 != 0) {
              pbVar7 = pbVar9 + uVar1;
              do {
                lVar8 = (ulonglong)*pbVar9 - (ulonglong)*(byte *)uVar4;
                if (lVar8 != 0) break;
                pbVar9 = pbVar9 + 1;
                uVar4 = uVar4 + 1;
              } while (pbVar9 != pbVar7);
            }
            return (ulonglong)((int)lVar8 == 0);
          }
          goto LAB_82898cb8;
        }
      }
      else {
        if (uVar1 == 0) goto LAB_82898c8c;
        piVar2 = *(int **)((int)((param_2 + 2U & 0xffffffff) << 2) + param_1);
        piVar3 = *(int **)((int)((param_4 + 2U & 0xffffffff) << 2) + iVar5);
        if (piVar2 == (int *)0x0) {
          if (piVar3 == (int *)0x0) {
            return 1;
          }
        }
        else if (piVar3 != (int *)0x0) {
          iVar5 = (**(code **)(*piVar3 + 8))(piVar3);
          iVar6 = (**(code **)(*piVar2 + 8))(piVar2);
          if (iVar6 == iVar5) {
            uVar4 = (**(code **)(*piVar2 + 0x10))(piVar2,piVar3);
            return uVar4;
          }
        }
      }
      return 0;
    }
  }
LAB_82898cb8:
  return (ulonglong)
         (*(int *)((int)((param_4 + 2U & 0xffffffff) << 2) + iVar5) ==
         *(int *)((int)((param_2 + 2U & 0xffffffff) << 2) + param_1));
}

