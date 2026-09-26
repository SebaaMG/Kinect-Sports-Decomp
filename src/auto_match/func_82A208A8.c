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
extern int fn_82F63CA0();


void fn_82A208A8(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  uVar7 = 0;
  uVar2 = (uint)*(ushort *)(param_1 + 4) + (uint)*(ushort *)(param_1 + 0xc) * -4;
  uVar3 = uVar2;
  uVar8 = uVar2;
  uVar4 = uVar2;
  if (*(short *)(param_1 + 8) != 0) {
    do {
      iVar6 = (uVar7 - *(ushort *)(param_1 + 0xc)) * 4 + (uint)*(ushort *)(param_1 + 4) + param_1;
      uVar10 = (uint)*(ushort *)(iVar6 + 2);
      uVar8 = uVar8 - *(byte *)(iVar6 + 1);
      uVar9 = *(byte *)(iVar6 + 1) + uVar10;
      *(short *)(iVar6 + 2) = (short)uVar8;
      uVar5 = uVar4;
      uVar1 = uVar2;
      if (((uVar9 != uVar3) && (uVar5 = uVar10, uVar1 = uVar9, uVar10 = uVar3, uVar2 != uVar4)) &&
         (uVar1 = uVar2, uVar9 != uVar4)) {
        uVar10 = uVar3 - (uVar2 - uVar4);
        fn_82F63CA0(uVar10 + param_1,uVar4 + param_1);
        uVar1 = uVar9;
      }
      uVar3 = uVar10;
      uVar2 = uVar1;
      uVar7 = uVar7 + 1;
      uVar4 = uVar5;
    } while (uVar7 < *(ushort *)(param_1 + 8));
    if (uVar2 != uVar5) {
      fn_82F63CA0((uVar3 - (uVar2 - uVar5)) + param_1,uVar5 + param_1);
    }
  }
  *(short *)(param_1 + 0xe) = (short)uVar8;
  return;
}

