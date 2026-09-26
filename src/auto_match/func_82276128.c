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


void fn_82276128(ulonglong param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar6;
  ulonglong uVar5;
  ulonglong uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined8 *puVar11;
  ulonglong uVar10;
  undefined8 uVar12;
  
  uVar2 = param_2 - (int)param_1 >> 3;
  iVar1 = (int)(param_3 - (int)param_1) >> 3;
  uVar4 = (longlong)(int)uVar2;
  uVar5 = (longlong)iVar1;
  while (uVar7 = uVar4, iVar6 = (int)uVar5, uVar7 != 0) {
    uVar4 = uVar5 - (longlong)(iVar6 / (int)uVar7) * (longlong)(int)uVar7;
    uVar5 = uVar7;
  }
  if ((iVar6 < iVar1) && (0 < iVar6)) {
    lVar3 = ((ulonglong)uVar2 & 0x1fffffff) * 8;
    uVar4 = (uVar5 & 0x1fffffff) * 8 + param_1;
    do {
      uVar9 = uVar4 + lVar3;
      uVar7 = uVar4;
      if ((uVar9 & 0xffffffff) == (ulonglong)param_3) {
        uVar9 = param_1;
      }
      do {
        puVar11 = (undefined8 *)uVar9;
        puVar8 = (undefined8 *)uVar7;
        uVar12 = *puVar8;
        iVar1 = (int)(param_3 - (int)puVar11) >> 3;
        *(undefined4 *)puVar8 = *(undefined4 *)puVar11;
        *(undefined4 *)((int)puVar8 + 4) = *(undefined4 *)((int)puVar11 + 4);
        *puVar11 = uVar12;
        if ((int)uVar2 < iVar1) {
          uVar10 = lVar3 + uVar9;
        }
        else {
          uVar10 = ((longlong)(int)uVar2 - (longlong)iVar1 & 0x1fffffffU) * 8 + param_1;
        }
        uVar7 = uVar9;
        uVar9 = uVar10;
      } while ((uVar10 & 0xffffffff) != (uVar4 & 0xffffffff));
      uVar5 = uVar5 - 1;
      uVar4 = uVar4 - 8;
    } while (0 < (longlong)uVar5);
  }
  return;
}

