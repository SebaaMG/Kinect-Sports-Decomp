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
extern int fn_82CE5410();
extern int fn_82CE6310();


void fn_82D07B30(int param_1,longlong param_2,short param_3,int *param_4)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  bool bVar4;
  short sVar5;
  longlong lVar6;
  int iVar7;
  short *psVar8;
  short sVar9;
  longlong lVar10;
  int iVar11;
  
  iVar11 = (int)param_2;
  if (param_1 == 3) {
    iVar3 = fn_82CE5410();
    uVar1 = param_4[1];
    lVar6 = (ulonglong)uVar1 + param_2;
    iVar7 = (int)lVar6;
    if ((int)(param_4[2] & 0x3fffffffU) < iVar7) {
      lVar10 = ((ulonglong)(uint)param_4[2] & 0x3fffffff) << 1;
      if (iVar7 < (int)lVar10) {
        lVar6 = lVar10;
      }
      fn_82CE6310(*(undefined4 *)(iVar3 + 0x10),param_4,lVar6,2);
    }
    sVar9 = 0;
    param_4[1] = param_4[1] + iVar11;
    if (0 < iVar11) {
      psVar8 = (short *)(uVar1 * 2 + *param_4 + -2);
      do {
        sVar5 = sVar9 + param_3;
        sVar9 = sVar9 + 1;
        psVar8 = psVar8 + 1;
        *psVar8 = sVar5;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
    }
  }
  else if (param_1 == 4) {
    lVar10 = (param_2 - 2U) + (param_2 - 2U & 0x7fffffff) * 2;
    iVar3 = fn_82CE5410();
    uVar1 = param_4[1];
    lVar6 = (ulonglong)uVar1 + lVar10;
    iVar7 = (int)lVar6;
    if ((int)(param_4[2] & 0x3fffffffU) < iVar7) {
      lVar2 = ((ulonglong)(uint)param_4[2] & 0x3fffffff) << 1;
      if (iVar7 < (int)lVar2) {
        lVar6 = lVar2;
      }
      fn_82CE6310(*(undefined4 *)(iVar3 + 0x10),param_4,lVar6,2);
    }
    bVar4 = false;
    psVar8 = (short *)(uVar1 * 2 + *param_4);
    param_4[1] = param_4[1] + (int)lVar10;
    if (2 < iVar11) {
      param_2 = param_2 + -2;
      param_3 = param_3 + 2;
      do {
        *psVar8 = param_3 + -2;
        if (bVar4) {
          psVar8[1] = param_3;
          psVar8[2] = param_3 + -1;
        }
        else {
          psVar8[1] = param_3 + -1;
          psVar8[2] = param_3;
        }
        psVar8 = psVar8 + 3;
        bVar4 = (bool)(bVar4 ^ 1);
        param_3 = param_3 + 1;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
    }
  }
  return;
}

