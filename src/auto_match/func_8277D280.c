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


void fn_8277D280(int param_1,uint param_2,int param_3,code *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  
  do {
    uVar11 = param_2;
    param_2 = uVar11 + 1;
    if (param_3 <= (int)param_2) {
      return;
    }
    while( true ) {
      uVar4 = uVar11 >> 4 & 0xffffffc;
      uVar5 = uVar11 + 1 >> 4 & 0xffffffc;
      iVar9 = (uVar11 + 1 & 0x3f) * 0xc;
      iVar10 = (uVar11 & 0x3f) * 0xc;
      cVar6 = (*param_4)(*(int *)(uVar5 + *(int *)(param_1 + 0xc)) + iVar9,
                         *(int *)(*(int *)(param_1 + 0xc) + uVar4) + iVar10);
      if (cVar6 == '\0') break;
      puVar7 = (undefined4 *)(*(int *)(*(int *)(param_1 + 0xc) + uVar4) + iVar10);
      puVar8 = (undefined4 *)(*(int *)(uVar5 + *(int *)(param_1 + 0xc)) + iVar9);
      uVar1 = *puVar8;
      uVar2 = puVar8[1];
      uVar3 = puVar8[2];
      *puVar8 = *puVar7;
      puVar8[1] = puVar7[1];
      puVar8[2] = puVar7[2];
      *puVar7 = uVar1;
      puVar7[1] = uVar2;
      puVar7[2] = uVar3;
      if ((int)uVar11 < 1) break;
      uVar11 = uVar11 - 1;
    }
  } while( true );
}

