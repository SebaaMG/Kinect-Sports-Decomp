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
extern int fn_82639DB0();
extern int fn_82643AC0();
extern int fn_82643B08();
extern int fn_82645110();
extern int fn_826458A0();
extern int fn_82645EA8();
extern int fn_82646DB8();


undefined8 fn_82646AF0(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  int iVar6;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar7;
  undefined8 uVar8;
  uint *puVar9;
  uint *puVar10;
  ulonglong uVar11;
  
  uVar8 = 0;
  if ((*(byte *)(param_1 + 0x2abc) & 0x20) == 0) {
    fn_82645110(param_1);
  }
  else {
    puVar9 = (uint *)(param_1 + 0x3470);
    fn_82643AC0(puVar9);
    puVar10 = (uint *)(param_1 + 0x34e8);
    fn_82643AC0(puVar10);
    uVar7 = 0x1000000 << (*(uint *)(param_1 + 0x2c3c) & 0x3f);
    if ((*(uint *)(param_1 + 0x3434) & 0x3f000000) != 0) {
      uVar7 = *(uint *)(param_1 + 0x3434) & 0x3f000000;
    }
    fn_82645EA8(param_1,0xffffffff80000000);
    uVar1 = *(uint *)(param_1 + 0x3500);
    if (uVar1 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = ((ulonglong)(uVar1 >> 0x14) + 0x200 & 0x1000) + ((ulonglong)uVar1 & 0x1fffffff) +
              -0x40000000;
    }
    fn_826458A0(param_1,uVar7,0xffffffff8264ef50,lVar3);
    fn_82645EA8(param_1,0);
    fn_82645110(param_1);
    puVar2 = *(undefined4 **)(param_1 + 0x350c);
    if (*(undefined4 **)(param_1 + 0x3510) < puVar2 + 2) {
      puVar2 = (undefined4 *)fn_82643B08(param_1 + 0x3500);
    }
    *puVar2 = 0x88000000;
    puVar2[1] = 0x80000000;
    *(undefined4 **)(param_1 + 0x350c) = puVar2 + 2;
    puVar2 = *(undefined4 **)(param_1 + 0x350c);
    if (*(undefined4 **)(param_1 + 0x3510) < puVar2 + 3) {
      puVar2 = (undefined4 *)fn_82643B08(param_1 + 0x3500);
    }
    *puVar2 = 0x89000000;
    uVar7 = *puVar9;
    if (uVar7 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = ((uVar7 >> 0x14) + 0x200 & 0x1000) + (uVar7 & 0x1fffffff) + -0x40000000;
    }
    puVar2[1] = iVar6;
    uVar7 = *puVar10;
    if (uVar7 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = ((uVar7 >> 0x14) + 0x200 & 0x1000) + (uVar7 & 0x1fffffff) + -0x40000000;
    }
    puVar2[2] = iVar6;
    *(undefined4 **)(param_1 + 0x350c) = puVar2 + 3;
    *(int *)(param_1 + 0x3484) = param_1;
    *(undefined4 *)(param_1 + 0x3474) = 0;
    *(undefined4 *)(param_1 + 0x3478) = 0x1080;
    *(undefined4 *)(param_1 + 0x347c) = 0;
    *(undefined4 *)(param_1 + 0x3480) = 0;
    *puVar9 = 0;
    fn_82643B08(puVar9);
    *(int *)(param_1 + 0x34fc) = param_1;
    *(undefined4 *)(param_1 + 0x34ec) = 0;
    *(undefined4 *)(param_1 + 0x34f0) = 0x1080;
    *(undefined4 *)(param_1 + 0x34f4) = 0;
    *(undefined4 *)(param_1 + 0x34f8) = 0;
    *puVar10 = 0;
    fn_82643B08(puVar10);
  }
  puVar2 = *(undefined4 **)(param_1 + 0x350c);
  if (*(undefined4 **)(param_1 + 0x3510) < puVar2 + 1) {
    puVar2 = (undefined4 *)fn_82643B08(param_1 + 0x3500);
  }
  *puVar2 = 0x84000000;
  *(byte *)(param_1 + 0x2abd) = *(byte *)(param_1 + 0x2abd) | 0x80;
  *(undefined4 **)(param_1 + 0x350c) = puVar2 + 1;
  *(byte *)(param_1 + 0x2abc) = *(byte *)(param_1 + 0x2abc) & 0xbf;
  uVar4 = *(ulonglong *)(param_1 + 0x10);
  *(ulonglong *)(param_1 + 0x10) = uVar4 | 8;
  *(ulonglong *)(param_1 + 0x10) = uVar4 | 0x100000000000008;
  uVar4 = *(ulonglong *)(param_1 + 0x28);
  *(ulonglong *)(param_1 + 0x10) = *(ulonglong *)(param_1 + 0x10) | 0x2000000000;
  uVar11 = uVar4 & 0xffffffdfffffffff;
  if ((*(byte *)(param_1 + 0x2abf) & 0x20) != 0) {
    fn_82639DB0(param_1,param_1 + 0x3234);
    uVar5 = *(ulonglong *)(param_1 + 0x10);
    uVar11 = uVar4 & 0xfdffffdfffffffff;
    *(ulonglong *)(param_1 + 0x10) = uVar5 | 0x100;
    *(ulonglong *)(param_1 + 0x10) = uVar5 | 0x200000000000100;
  }
  *(ulonglong *)(param_1 + 0x28) = uVar11;
  if ((*(byte *)(param_1 + 0x2abd) & 0x40) != 0) {
    uVar8 = fn_82646DB8(param_1);
  }
  return uVar8;
}

