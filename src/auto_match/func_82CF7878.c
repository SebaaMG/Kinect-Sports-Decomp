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
extern int fn_82CF7AF0();
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


void fn_82CF7878(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  uint uStack_30;
  uint uStack_2c;
  
  iVar11 = param_1 + 0x124;
  RtlEnterCriticalSection(iVar11);
  uVar4 = param_2 + param_3;
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
  if (uVar4 == *(uint *)(param_1 + 0xc)) {
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) - param_3;
    if (*(int *)(param_1 + 0x1c) != 0) {
      while (iVar6 = *(int *)(param_1 + 0x1c) * 8 + *(int *)(param_1 + 0x18),
            *(int *)(iVar6 + -4) + *(int *)(iVar6 + -8) == param_2) {
        *(undefined4 *)(param_1 + 0xc) =
             *(undefined4 *)(*(int *)(param_1 + 0x1c) * 8 + *(int *)(param_1 + 0x18) + -8);
        iVar6 = *(int *)(param_1 + 0x1c) + -1;
        *(int *)(param_1 + 0x1c) = iVar6;
        if (iVar6 == 0) {
          RtlLeaveCriticalSection(iVar11);
          return;
        }
      }
    }
  }
  else {
    if (*(uint *)(param_1 + 0x1c) == 0) {
      puVar9 = *(uint **)(param_1 + 0x18);
      *(undefined4 *)(param_1 + 0x1c) = 1;
      *puVar9 = param_2;
      puVar9[1] = param_3;
      RtlLeaveCriticalSection(iVar11);
      return;
    }
    uVar5 = (ulonglong)*(uint *)(param_1 + 0x1c) - 1;
    iVar6 = (int)uVar5;
    if (-1 < iVar6) {
      uVar1 = *(uint *)(param_1 + 0x18);
      lVar7 = (uVar5 & 0x1fffffff) * 8 + (ulonglong)uVar1;
      do {
        if (*(uint *)lVar7 < param_2) {
          iVar10 = (int)uVar5;
          if (-1 < iVar10) {
            iVar3 = iVar10 * 8;
            iVar2 = iVar3 + uVar1;
            if (*(int *)(iVar2 + 4) + *(int *)(iVar3 + uVar1) == param_2) {
              iVar6 = *(int *)(iVar2 + 4) + param_3;
              *(int *)(iVar2 + 4) = iVar6;
              if ((iVar10 < *(int *)(param_1 + 0x1c) + -1) &&
                 (iVar3 = *(uint *)(param_1 + 0x18) + iVar3, uVar4 == *(uint *)(iVar3 + 8))) {
                *(int *)(iVar2 + 4) = *(int *)(iVar3 + 0xc) + iVar6;
                lVar8 = (ulonglong)*(uint *)(param_1 + 0x1c) - 1;
                *(int *)(param_1 + 0x1c) = (int)lVar8;
                lVar7 = (uVar5 + 1 & 0x1fffffff) * 8 + (ulonglong)*(uint *)(param_1 + 0x18);
                lVar8 = (lVar8 - (uVar5 + 1) & 0x1fffffff) * 8;
                if (0 < (int)lVar8) {
                  lVar8 = ((lVar8 - 1U & 0xffffffff) >> 2) + 1;
                  do {
                    *(undefined4 *)lVar7 = ((undefined4 *)lVar7)[2];
                    lVar7 = lVar7 + 4;
                    lVar8 = lVar8 + -1;
                  } while (lVar8 != 0);
                  RtlLeaveCriticalSection(iVar11);
                  return;
                }
              }
              goto LAB_82cf7ad8;
            }
          }
          break;
        }
        uVar5 = uVar5 - 1;
        lVar7 = lVar7 + -8;
      } while (-1 < (longlong)uVar5);
    }
    if (((int)uVar5 < iVar6) &&
       (puVar9 = (uint *)(((int)uVar5 + 1) * 8 + *(int *)(param_1 + 0x18)), *puVar9 == uVar4)) {
      *puVar9 = param_2;
      puVar9[1] = puVar9[1] + param_3;
      RtlLeaveCriticalSection(iVar11);
      return;
    }
    uStack_30 = param_2;
    uStack_2c = param_3;
    fn_82CF7AF0(param_1 + 0x18,0,uVar5 + 1,0,&uStack_30,1);
  }
LAB_82cf7ad8:
  RtlLeaveCriticalSection(iVar11);
  return;
}

