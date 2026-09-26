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


void fn_823D7540(longlong param_1,ulonglong param_2,ulonglong param_3,undefined4 *param_4,
                  code *param_5)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  
  uVar7 = param_2;
  while( true ) {
    uVar1 = (uVar7 + 1 & 0xffffffff) << 1;
    uVar10 = uVar1 & 0xfffffffe;
    iVar2 = (int)param_1;
    if ((int)param_3 <= (int)uVar10) break;
    lVar8 = (uVar1 & 0x1ffffffe) * 8 + param_1;
    cVar5 = (*param_5)(lVar8,lVar8 + -8);
    if (cVar5 != '\0') {
      uVar10 = uVar10 - 1;
    }
    iVar3 = (int)((uVar10 & 0x1fffffff) << 3);
    iVar4 = (int)((uVar7 & 0x1fffffff) << 3);
    *(undefined4 *)(iVar4 + iVar2) = *(undefined4 *)(iVar3 + iVar2);
    *(undefined4 *)(iVar4 + iVar2 + 4) = *(undefined4 *)(iVar3 + iVar2 + 4);
    uVar7 = uVar10;
  }
  if ((int)uVar10 == (int)param_3) {
    iVar3 = (int)((param_3 & 0xffffffff) << 3) + iVar2;
    iVar4 = (int)((uVar7 & 0x1fffffff) << 3);
    uVar7 = param_3 - 1;
    *(undefined4 *)(iVar4 + iVar2) = *(undefined4 *)(iVar3 + -8);
    *(undefined4 *)(iVar4 + iVar2 + 4) = *(undefined4 *)(iVar3 + -4);
  }
  iVar3 = (int)uVar7;
  uVar6 = iVar3 - 1;
  uVar1 = (longlong)((int)uVar6 >> 1) + (ulonglong)((int)uVar6 < 0 && (uVar6 & 1) != 0);
  while (uVar10 = uVar1, (int)param_2 < iVar3) {
    lVar8 = (uVar10 & 0x1fffffff) * 8 + param_1;
    cVar5 = (*param_5)(lVar8,param_4);
    if (cVar5 == '\0') break;
    puVar9 = (undefined4 *)lVar8;
    iVar3 = (int)uVar10;
    uVar6 = iVar3 - 1;
    iVar4 = (int)((uVar7 & 0x1fffffff) << 3);
    *(undefined4 *)(iVar4 + iVar2) = *puVar9;
    *(undefined4 *)(iVar4 + iVar2 + 4) = puVar9[1];
    uVar1 = (longlong)((int)uVar6 >> 1) + (ulonglong)((int)uVar6 < 0 && (uVar6 & 1) != 0);
    uVar7 = uVar10;
  }
  iVar3 = (int)((uVar7 & 0xffffffff) << 3);
  *(undefined4 *)(iVar3 + iVar2) = *param_4;
  *(undefined4 *)(iVar3 + iVar2 + 4) = param_4[1];
  return;
}

