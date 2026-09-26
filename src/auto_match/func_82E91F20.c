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


void fn_82E91F20(int param_1)

{
  float fVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar6;
  longlong lVar5;
  int iVar7;
  longlong lVar8;
  
  iVar6 = *(int *)(param_1 + 0x84) + 1;
  lVar3 = 0;
  lVar8 = 7;
  iVar7 = iVar6 / 0x15 + (iVar6 >> 0x1f);
  *(undefined4 *)(param_1 + 0x80) =
       *(undefined4 *)((iVar6 + (iVar7 - (iVar7 >> 0x1f)) * -0x15 + 10) * 4 + param_1);
  do {
    lVar4 = (ulonglong)*(uint *)(param_1 + 0x84) + lVar3;
    lVar5 = lVar4 + 2;
    iVar7 = (int)lVar5;
    uVar2 = iVar7 / 0x15 + (iVar7 >> 0x1f);
    fVar1 = *(float *)((int)((lVar5 + ((longlong)(int)uVar2 + (ulonglong)(uVar2 >> 0x1f)) * -0x15 +
                              10 & 0xffffffff) << 2) + param_1);
    if (*(float *)(param_1 + 0x80) < fVar1) {
      *(float *)(param_1 + 0x80) = fVar1;
    }
    lVar4 = lVar4 + 3;
    iVar7 = (int)lVar4;
    uVar2 = iVar7 / 0x15 + (iVar7 >> 0x1f);
    fVar1 = *(float *)((int)((lVar4 + ((longlong)(int)uVar2 + (ulonglong)(uVar2 >> 0x1f)) * -0x15 +
                              10 & 0xffffffff) << 2) + param_1);
    if (*(float *)(param_1 + 0x80) < fVar1) {
      *(float *)(param_1 + 0x80) = fVar1;
    }
    lVar3 = lVar3 + 2;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  return;
}

