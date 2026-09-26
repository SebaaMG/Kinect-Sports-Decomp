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
extern int fn_82A1DDC0();


undefined8 fn_83046770(int *param_1,uint *param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  
  uVar5 = (uint)*(ushort *)((int)param_1 + 0xe);
  uVar4 = param_3 - *(int *)(param_4 + 0x1c);
  uVar6 = uVar4;
  if (uVar5 <= uVar4) {
    uVar6 = uVar5;
  }
  uVar7 = 0;
  for (uVar2 = param_1[1]; uVar2 != 0; uVar2 = uVar2 - 1 & uVar2) {
    uVar7 = uVar7 + 1;
  }
  uVar2 = 0;
  if (uVar7 != 0) {
    puVar8 = (undefined4 *)(param_4 + -4);
    do {
      iVar3 = (*(ushort *)(param_1 + 3) * uVar2 + *(int *)(param_4 + 0x18)) * 4 + *param_1;
      fn_82A1DDC0(((longlong)(int)(uint)*(ushort *)(param_2 + 3) * (longlong)(int)uVar2 +
                         (ulonglong)*(uint *)(param_4 + 0x1c) & 0x3fffffff) * 4 +
                        (ulonglong)*param_2,iVar3,uVar6 & 0x3fffffff);
      uVar2 = uVar2 + 1;
      puVar8 = puVar8 + 1;
      *puVar8 = *(undefined4 *)((uVar6 - 1) * 4 + iVar3);
    } while (uVar2 < uVar7);
  }
  *(short *)((int)param_1 + 0xe) = *(short *)((int)param_1 + 0xe) - (short)uVar6;
  *(short *)((int)param_2 + 0xe) = (short)uVar6 + (short)*(undefined4 *)(param_4 + 0x1c);
  *(undefined4 *)(param_4 + 0x20) = 0x10000;
  if (uVar6 == uVar5) {
    iVar3 = 0;
  }
  else {
    iVar3 = uVar6 + *(int *)(param_4 + 0x18);
  }
  *(int *)(param_4 + 0x18) = iVar3;
  if (uVar6 == uVar4) {
    uVar1 = 0x2d;
  }
  else {
    uVar1 = 0x2b;
    *(uint *)(param_4 + 0x1c) = uVar6 + *(int *)(param_4 + 0x1c);
  }
  return uVar1;
}

