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


void fn_8309BD88(undefined4 param_1,ulonglong param_2,undefined4 param_3,undefined4 param_4,
                  ulonglong param_5,int param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  int *piVar6;
  undefined8 *puVar7;
  int *piVar8;
  longlong lVar9;
  
  uVar3 = (uint)param_2;
  if ((int)uVar3 < (int)param_5) {
    param_5 = param_2;
  }
  *(undefined4 *)(param_6 + 0x10) = param_4;
  iVar5 = (int)param_5;
  iVar1 = (int)uVar3 / iVar5;
  *(undefined4 *)(param_6 + 0x50) = param_1;
  *(undefined4 *)(param_6 + 0x54) = param_3;
  *(int *)(param_6 + 0x5c) = iVar1;
  trapWord(6,param_5,0);
  *(undefined4 *)(param_6 + 0x58) = 0;
  trapWord(5,param_5 & ~(((param_2 & 0x7fffffff) << 1 | (ulonglong)(uVar3 >> 0x1f)) - 1),0xffff);
  if (1 < iVar5) {
    piVar8 = (int *)(param_6 + 0xcc);
    lVar4 = param_5 - 1;
    iVar2 = iVar1;
    do {
      piVar6 = piVar8 + -0x19;
      puVar7 = (undefined8 *)(param_6 + -8);
      lVar9 = 0xe;
      do {
        puVar7 = puVar7 + 1;
        piVar6 = piVar6 + 2;
        *(undefined8 *)piVar6 = *puVar7;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
      piVar8[-1] = iVar2;
      lVar4 = lVar4 + -1;
      *piVar8 = iVar2 + iVar1;
      piVar8 = piVar8 + 0x1c;
      iVar2 = iVar2 + iVar1;
    } while (lVar4 != 0);
  }
  *(uint *)(iVar5 * 0x70 + param_6 + -0x14) = uVar3;
  return;
}

