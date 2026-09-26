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
extern int fn_82641518();
extern int fn_82645110();


void fn_82641C20(longlong param_1,ulonglong param_2)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  iVar1 = (int)param_1;
  uVar3 = (ulonglong)*(uint *)(iVar1 + 0x30);
  lVar6 = 0x2388;
  if (*(uint *)(iVar1 + 0x38) < uVar3) {
    uVar3 = fn_82645110(param_1);
  }
  iVar2 = (int)uVar3;
  *(undefined4 *)(iVar2 + 4) = 0x2007;
  *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(iVar1 + 0x289c);
  *(undefined4 *)(iVar2 + 0xc) = 0xa31;
  lVar8 = param_1 + 0x281c;
  *(undefined4 *)(iVar2 + 0x10) = 0x10000;
  *(undefined4 *)(iVar2 + 0x14) = 0x10a2f;
  *(undefined4 *)(iVar2 + 0x18) = 0;
  *(undefined4 *)(iVar2 + 0x1c) = 0x1000;
  *(undefined4 *)(iVar2 + 0x20) = 0xc0043c00;
  *(undefined4 *)(iVar2 + 0x24) = 3;
  *(undefined4 *)(iVar2 + 0x28) = 0xa31;
  *(undefined4 *)(iVar2 + 0x2c) = 0;
  *(undefined4 *)(iVar2 + 0x30) = 0x80000000;
  uVar3 = uVar3 + 0x34;
  *(undefined4 *)uVar3 = 8;
  *(undefined4 **)(iVar1 + 0x30) = (undefined4 *)uVar3;
  do {
    lVar4 = LZCOUNT(param_2);
    param_2 = param_2 << lVar4;
    lVar8 = lVar4 * 0x10 + lVar8;
    lVar7 = LZCOUNT(~param_2);
    lVar6 = lVar4 * 4 + lVar6;
    lVar4 = lVar7 * 4;
    if ((lVar7 * 0x10 + uVar3 + 4 & 0xffffffff) < (ulonglong)*(uint *)(iVar1 + 0x34)) {
      *(undefined4 *)((int)uVar3 + 4) = 0x80000000;
      uVar3 = (uVar3 & 7) + uVar3 + 4;
      *(uint *)uVar3 = (uint)((lVar4 - 1U & 0xffffffff) << 0x10) | (uint)lVar6;
      do {
        iVar2 = (int)lVar8;
        lVar7 = lVar7 + -1;
        uVar5 = *(undefined8 *)(iVar2 + 0xc);
        lVar8 = lVar8 + 0x10;
        param_2 = param_2 << 1;
        *(undefined8 *)((int)uVar3 + 4) = *(undefined8 *)(iVar2 + 4);
        *(undefined8 *)((int)uVar3 + 0xc) = uVar5;
        uVar3 = uVar3 + 0x10;
      } while (lVar7 != 0);
    }
    else {
      uVar3 = fn_82641518(param_1,uVar3,lVar6,lVar8,lVar4,4);
      lVar8 = lVar7 * 0x10 + lVar8;
      param_2 = param_2 << lVar7;
    }
    lVar6 = lVar4 + lVar6;
  } while (param_2 != 0);
  *(int *)(iVar1 + 0x30) = (int)uVar3;
  return;
}

