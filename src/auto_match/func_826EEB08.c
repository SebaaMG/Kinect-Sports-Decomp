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
extern int fn_8277DB90();
extern int fn_82784390();
extern int fn_827898D0();


longlong fn_826EEB08(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  
  uVar1 = *(uint *)(param_1 + 0x2ec);
  uVar2 = *(uint *)(param_1 + 0x2dc);
  uVar3 = *(uint *)(param_1 + 0xb4);
  uVar4 = *(uint *)(param_1 + 0xb8);
  uVar5 = *(uint *)(param_1 + 0x2c8);
  uVar6 = *(uint *)(param_1 + 0x2f0);
  uVar7 = *(uint *)(param_1 + 0x2e0);
  uVar8 = *(uint *)(param_1 + 0x2cc);
  lVar11 = fn_827898D0(param_1 + 0x308);
  iVar9 = *(int *)(param_1 + 0x39c);
  iVar10 = *(int *)(*(int *)(param_1 + 0x3a4) + 4);
  lVar12 = fn_8277DB90(param_1 + 0xc4);
  lVar13 = fn_82784390(param_1 + 0x50);
  lVar14 = fn_82784390(param_1 + 8);
  return lVar14 + lVar12 + lVar13 + (longlong)iVar10 * (longlong)iVar9 + lVar11 +
         ((((ulonglong)uVar1 + (ulonglong)uVar2 & 0x3fffffff) * 4 + (ulonglong)uVar5) * 0xc0 +
          (ulonglong)uVar6 + (ulonglong)uVar7 + (ulonglong)uVar8 & 0x3fffffff) * 4 +
         ((ulonglong)uVar3 * 0xc0 + (ulonglong)uVar4 & 0x3fffffff) * 4;
}

