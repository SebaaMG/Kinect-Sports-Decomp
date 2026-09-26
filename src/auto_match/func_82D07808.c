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


void fn_82D07808(int param_1,longlong param_2,int param_3,int *param_4)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  uint *puVar4;
  longlong lVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  longlong lVar9;
  
  iVar8 = (int)param_2;
  if (param_1 == 3) {
    iVar3 = fn_82CE5410();
    uVar1 = param_4[1];
    lVar5 = (ulonglong)uVar1 + param_2;
    iVar6 = (int)lVar5;
    if ((int)(param_4[2] & 0x3fffffffU) < iVar6) {
      lVar9 = ((ulonglong)(uint)param_4[2] & 0x3fffffff) << 1;
      if (iVar6 < (int)lVar9) {
        lVar5 = lVar9;
      }
      fn_82CE6310(*(undefined4 *)(iVar3 + 0x10),param_4,lVar5,4);
    }
    iVar3 = 0;
    param_4[1] = param_4[1] + iVar8;
    if (0 < iVar8) {
      puVar4 = (uint *)(uVar1 * 4 + *param_4 + -4);
      do {
        uVar1 = iVar3 + param_3;
        iVar3 = iVar3 + 1;
        puVar4 = puVar4 + 1;
        *puVar4 = uVar1 & 0xffff;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
    }
  }
  else if (param_1 == 4) {
    lVar9 = (param_2 - 2U) + (param_2 - 2U & 0x7fffffff) * 2;
    iVar3 = fn_82CE5410();
    uVar1 = param_4[1];
    lVar5 = (ulonglong)uVar1 + lVar9;
    iVar6 = (int)lVar5;
    if ((int)(param_4[2] & 0x3fffffffU) < iVar6) {
      lVar2 = ((ulonglong)(uint)param_4[2] & 0x3fffffff) << 1;
      if (iVar6 < (int)lVar2) {
        lVar5 = lVar2;
      }
      fn_82CE6310(*(undefined4 *)(iVar3 + 0x10),param_4,lVar5,4);
    }
    piVar7 = (int *)(uVar1 * 4 + *param_4);
    param_4[1] = param_4[1] + (int)lVar9;
    if (2 < iVar8) {
      iVar3 = param_3 + 1;
      do {
        *piVar7 = iVar3 + -1;
        iVar6 = iVar3 + 1;
        if (((1 - param_3) + iVar3 & 1U) == 0) {
          piVar7[1] = iVar3;
          piVar7[2] = iVar6;
        }
        else {
          piVar7[1] = iVar6;
          piVar7[2] = iVar3;
        }
        piVar7 = piVar7 + 3;
        iVar3 = iVar6;
      } while ((1 - param_3) + iVar6 < iVar8);
    }
  }
  return;
}

