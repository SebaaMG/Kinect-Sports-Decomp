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


void fn_82E67350(int *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  
  lVar10 = 1;
  if (param_1 == param_2 + 0x41fe) {
    if (*(int *)(*param_2 + 0x334) == 0) {
      *(longlong *)(param_1 + 0x2c) =
           ((longlong)*(int *)(*param_2 + 0xc) >> 3) + *(longlong *)(param_1 + 0x2c);
    }
    uVar6 = (ulonglong)(uint)param_2[0x1d72];
    lVar9 = *(longlong *)(param_1 + 0x2e);
    if (param_2[0x1d72] <= param_2[0x1d71]) {
      do {
        uVar1 = param_2[0x1d72];
        iVar4 = (int)uVar6;
        iVar2 = param_1[0x29];
        uVar3 = (iVar4 * 0x7d) * lVar9;
        iVar5 = (int)((uVar6 - uVar1 & 0x1fffffff) << 3);
        uVar11 = (ulonglong)*(int *)(*param_2 + 0x50);
        lVar8 = (longlong)uVar3 / (longlong)uVar11;
        lVar7 = *(longlong *)(param_1 + 0x2c) + *(longlong *)(iVar5 + iVar2);
        trapDoubleWordImmediate(6,uVar11,0);
        iVar12 = 0;
        trapDoubleWordImmediate(5,uVar11 & ~((uVar3 * 2 | uVar3 >> 0x3f) - 1),0xffff);
        if (lVar8 < lVar7) {
          iVar12 = ((*(int *)(*param_2 + 0xc) >> 3) - (int)lVar8) + (int)lVar7;
        }
        else {
          *(longlong *)(iVar5 + iVar2) = (lVar8 - lVar7) + *(longlong *)(iVar5 + iVar2);
        }
        iVar2 = (int)((uVar6 - uVar1 & 0xffffffff) << 2);
        if (*(int *)(iVar2 + param_1[0x28]) < iVar12) {
          *(int *)(iVar2 + param_1[0x28]) = iVar12;
        }
        if (iVar4 < 0x801) {
          if (iVar4 < 0x401) {
            if (iVar4 < 0x201) {
              if (iVar4 < 0x101) {
                if (0x80 < iVar4) {
                  lVar10 = 2;
                }
              }
              else {
                lVar10 = 4;
              }
            }
            else {
              lVar10 = 8;
            }
          }
          else {
            lVar10 = 0x10;
          }
        }
        else {
          lVar10 = 0x20;
        }
        uVar1 = param_2[0x1d71];
        if ((iVar4 < (int)uVar1) && ((int)uVar1 < (int)lVar10 + iVar4)) {
          lVar10 = uVar1 - uVar6;
        }
        uVar6 = lVar10 + uVar6;
      } while ((int)uVar6 <= (int)uVar1);
    }
  }
  return;
}

