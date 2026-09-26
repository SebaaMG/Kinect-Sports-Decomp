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
extern int fn_82ABE9F0();
extern int fn_82AE5AC8();
extern int fn_82F691F0();


int fn_82ADE7E8(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  
  puVar1 = *(undefined4 **)(param_1 + 0x2c0);
  if (puVar1 != (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x2c0) = *puVar1;
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(puVar1,0,200);
  }
  iVar3 = fn_82ABE9F0(param_1,((ulonglong)*(uint *)(param_1 + 0x2a0) & 0x7ffffff) * 0x20 +
                                    0xd0,0x34);
  *(undefined4 *)(iVar3 + 200) = *(undefined4 *)(param_1 + 0x2b8);
  *(int *)(param_1 + 0x2b8) = iVar3;
  iVar7 = iVar3 + 0xd0;
  piVar8 = (int *)(iVar3 + 0x20);
  piVar6 = (int *)(iVar3 + 0x10);
  *(int *)(param_1 + 700) = *(int *)(param_1 + 700) + 1;
  lVar5 = 4;
  do {
    *piVar6 = iVar7;
    iVar2 = *(int *)(param_1 + 0x2a0);
    *piVar8 = param_1;
    iVar7 = iVar2 * 8 + iVar7;
    piVar8[2] = 0;
    piVar8[3] = 0;
    piVar8[4] = 0;
    piVar8[5] = 0;
    piVar8[6] = 0;
    piVar8[7] = 0;
    piVar8[8] = 0;
    piVar8[9] = 0;
    uVar4 = (ulonglong)*(uint *)(param_1 + 0x318);
    if (uVar4 == 0) {
      uVar4 = 0x20;
    }
    if (uVar4 < 0x40) {
      fn_82AE5AC8(piVar8,uVar4,0x40 - uVar4);
    }
    lVar5 = lVar5 + -1;
    piVar6 = piVar6 + 1;
    piVar8 = piVar8 + 10;
  } while (lVar5 != 0);
  return iVar3;
}

