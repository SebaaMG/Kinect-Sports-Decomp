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


undefined8 fn_82CFF188(int param_1,ulonglong param_2,uint param_3)

{
  uint *puVar1;
  ulonglong uVar2;
  int iVar4;
  undefined8 uVar3;
  ulonglong uVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  
  uVar5 = param_2;
  if (param_3 != 0) {
    if (param_3 == 1) {
      uVar5 = *(uint *)(param_1 + 0xc) + param_2;
    }
    else {
      uVar5 = (ulonglong)*(uint *)(param_1 + 0xc);
      if (param_3 < 3) {
        uVar5 = *(uint *)(*(int *)(param_1 + 8) + 4) - param_2;
      }
    }
  }
  iVar7 = (int)uVar5;
  if (iVar7 < 0) {
    uVar3 = 1;
  }
  else {
    puVar1 = *(uint **)(param_1 + 8);
    if ((int)puVar1[1] < iVar7) {
      lVar8 = uVar5 + 1;
      iVar4 = fn_82CE5410();
      uVar9 = (uint)lVar8;
      if ((int)(puVar1[2] & 0x3fffffff) < (int)uVar9) {
        lVar6 = ((ulonglong)puVar1[2] & 0x3fffffff) << 1;
        if ((int)lVar6 <= (int)uVar9) {
          lVar6 = lVar8;
        }
        fn_82CE6310(*(undefined4 *)(iVar4 + 0x10),puVar1,lVar6,1);
      }
      uVar5 = lVar8 - (ulonglong)puVar1[1];
      if (0 < (longlong)uVar5) {
        lVar8 = (ulonglong)puVar1[1] + (ulonglong)*puVar1 + -1;
        uVar2 = uVar5 & 0xffffffff;
        while (uVar2 != 0) {
          lVar8 = lVar8 + 1;
          *(undefined1 *)lVar8 = 0;
          uVar5 = uVar5 - 1;
          uVar2 = uVar5;
        }
      }
      puVar1[1] = uVar9;
      *(int *)(*(int *)(param_1 + 8) + 4) = iVar7;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    uVar3 = 0;
  }
  return uVar3;
}

