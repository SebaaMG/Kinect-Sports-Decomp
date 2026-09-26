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


void fn_827D8B98(ulonglong param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar9;
  ulonglong uVar8;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  
  uVar3 = param_2 - (int)param_1 >> 3;
  iVar2 = (int)(param_3 - (int)param_1) >> 3;
  uVar7 = (longlong)(int)uVar3;
  uVar8 = (longlong)iVar2;
  while (uVar10 = uVar7, iVar9 = (int)uVar8, uVar10 != 0) {
    uVar7 = uVar8 - (longlong)(iVar9 / (int)uVar10) * (longlong)(int)uVar10;
    uVar8 = uVar10;
  }
  if ((iVar9 < iVar2) && (0 < iVar9)) {
    lVar6 = ((ulonglong)uVar3 & 0x1fffffff) * 8;
    uVar7 = (uVar8 & 0x1fffffff) * 8 + param_1;
    do {
      uVar11 = uVar7 + lVar6;
      uVar10 = uVar7;
      if ((uVar11 & 0xffffffff) == (ulonglong)param_3) {
        uVar11 = param_1;
      }
      do {
        puVar4 = (undefined4 *)uVar11;
        puVar5 = (undefined4 *)uVar10;
        uVar1 = puVar5[1];
        iVar2 = (int)(param_3 - (int)puVar4) >> 3;
        puVar5[1] = puVar4[1];
        puVar4[1] = uVar1;
        uVar1 = *puVar5;
        *puVar5 = *puVar4;
        *puVar4 = uVar1;
        if ((int)uVar3 < iVar2) {
          uVar12 = lVar6 + uVar11;
        }
        else {
          uVar12 = ((longlong)(int)uVar3 - (longlong)iVar2 & 0x1fffffffU) * 8 + param_1;
        }
        uVar10 = uVar11;
        uVar11 = uVar12;
      } while ((uVar12 & 0xffffffff) != (uVar7 & 0xffffffff));
      uVar8 = uVar8 - 1;
      uVar7 = uVar7 - 8;
    } while (0 < (longlong)uVar8);
  }
  return;
}

