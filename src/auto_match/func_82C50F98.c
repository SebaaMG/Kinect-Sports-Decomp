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
extern int fn_82C50818();
extern int fn_82C562F0();
extern int fn_82C56398();
extern int fn_82C7BB28();
extern int fn_82F691F0();
extern unsigned int uRam8329f138;
extern unsigned int uRam8329f13c;


undefined8 fn_82C50F98(int param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  uVar5 = (int)param_2 + 0xf;
  uVar6 = (int)param_3 + 0xf;
  *(uint *)(param_1 + 0xb4) = uVar5 & 0xfffffff0;
  iVar1 = (int)uVar6 >> 4;
  *(uint *)(param_1 + 0xbc) = uVar6 & 0xfffffff0;
  *(int *)(param_1 + 0x88) = (int)uVar5 >> 4;
  *(int *)(param_1 + 0x8c) = iVar1;
  lVar9 = (ulonglong)*(uint *)(param_1 + 0x6070) + 8;
  uVar2 = fn_82C7BB28();
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  uRam8329f13c = 0x20;
  uRam8329f138 = 0x10;
  if (*(int *)(param_1 + 0xb0c4) == 0) {
    uVar2 = fn_82C50818(param_1,param_2,param_3,0);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
  }
  else {
    *(int *)(param_1 + 0xb0bc) = (int)param_2;
    *(int *)(param_1 + 0xb0c0) = (int)param_3;
  }
  *(int *)(param_1 + 0xb1a4) = 0;
  if ((*(int *)(*(int *)(param_1 + 0x6070) + 0x2c8) != 0) &&
     (*(int *)(*(int *)(param_1 + 0x6070) + 0x4818) != 0)) {
    uVar6 = *(int *)(param_1 + 0xb0bc) + 0xf;
    uVar5 = *(int *)(param_1 + 0xb0c0) + 0xf;
    lVar7 = (longlong)((int)uVar6 >> 4) + (ulonglong)((int)uVar6 < 0 && (uVar6 & 0xf) != 0);
    uVar8 = (longlong)(int)(((int)uVar5 >> 4) + (uint)((int)uVar5 < 0 && (uVar5 & 0xf) != 0)) *
            (longlong)(int)lVar7;
    iVar3 = fn_82C562F0(lVar9,(uVar8 & 0x7ffffff) << 5,0xffffffff82196582);
    *(int *)(param_1 + 0xb190) = iVar3;
    iVar3 = fn_82C56398(lVar9,(uVar8 + (uVar8 & 0x7fffffff) * 2 & 0x7fffff) * 0x200 + 0x7f,
                         0xffffffff82196582);
    *(int *)(param_1 + 0xb1a4) = iVar3;
    *(uint *)(param_1 + 0xb194) = iVar3 + 0x7fU & 0xffffff80;
    iVar3 = fn_82C562F0(lVar9,lVar7 * 0xd8,0xffffffff82196582);
    *(int *)(param_1 + 0xb1a8) = iVar3;
    if (*(int *)(param_1 + 0xb190) == 0) {
      return 0xfffffffffffffff7;
    }
    if (*(uint *)(param_1 + 0xb194) == 0) {
      return 0xfffffffffffffff7;
    }
    if (iVar3 == 0) {
      return 0xfffffffffffffff7;
    }
  }
  lVar7 = ((longlong)iVar1 + 2U & 0x3fffffff) << 2;
  puVar4 = (undefined4 *)fn_82C562F0(lVar9,lVar7,0xffffffff82196582);
  *(undefined4 **)(param_1 + 0x55b8) = puVar4;
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = 0;
    uVar8 = fn_82C562F0(lVar9,lVar7,0xffffffff82196582);
    *(int *)(param_1 + 0x55d4) = (int)uVar8;
    if ((uVar8 & 0xffffffff) != 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(uVar8,0,lVar7);
    }
  }
  return 0xfffffffffffffff7;
}

