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
extern int fn_82522D98();
extern int fn_82A1EFC0();
extern unsigned int lbl_8329EAD0;
extern unsigned int lbl_8329EAE0;
extern unsigned int lbl_8329EAF0;
extern unsigned int lbl_8329EB00;
extern unsigned int uRam8329eae4;
extern unsigned int uRam8329eae8;
extern unsigned int uRam8329eaec;
extern unsigned int uRam8329eaf4;
extern unsigned int uRam8329eaf8;
extern unsigned int uRam8329eafc;
extern unsigned int uRam8329eb04;
extern unsigned int uRam8329eb08;
extern unsigned int uRam8329eb0c;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 fn_82527F50(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int in_r0;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (*(int *)(param_1 + 0x1b8) == 0) {
    uVar4 = fn_82522D98(0xa0);
    *(int *)(param_1 + 0x1b8) = (int)uVar4;
    if ((uVar4 & 0xffffffff) != 0) {
      fn_82A1EFC0(uVar4,0,0xa0);
      iVar1 = *(int *)(param_1 + 0x1b8);
      puVar2 = (undefined4 *)((int)&lbl_8329EAD0 + in_r0 & 0xfffffff0);
      uVar5 = puVar2[1];
      uVar6 = puVar2[2];
      uVar7 = puVar2[3];
      puVar3 = (undefined4 *)(in_r0 + iVar1 + 0x10 & 0xfffffff0);
      *puVar3 = *puVar2;
      puVar3[1] = uVar5;
      puVar3[2] = uVar6;
      puVar3[3] = uVar7;
      uVar7 = uRam8329eaec;
      uVar6 = uRam8329eae8;
      uVar5 = uRam8329eae4;
      puVar2 = (undefined4 *)(iVar1 + 0x20U & 0xfffffff0);
      *puVar2 = lbl_8329EAE0;
      puVar2[1] = uVar5;
      puVar2[2] = uVar6;
      puVar2[3] = uVar7;
      uVar7 = uRam8329eafc;
      uVar6 = uRam8329eaf8;
      uVar5 = uRam8329eaf4;
      puVar2 = (undefined4 *)(iVar1 + 0x30U & 0xfffffff0);
      *puVar2 = lbl_8329EAF0;
      puVar2[1] = uVar5;
      puVar2[2] = uVar6;
      puVar2[3] = uVar7;
      uVar7 = uRam8329eb0c;
      uVar6 = uRam8329eb08;
      uVar5 = uRam8329eb04;
      puVar2 = (undefined4 *)(iVar1 + 0x40U & 0xfffffff0);
      *puVar2 = lbl_8329EB00;
      puVar2[1] = uVar5;
      puVar2[2] = uVar6;
      puVar2[3] = uVar7;
      iVar1 = *(int *)(param_1 + 0x1b8);
      puVar2 = (undefined4 *)((int)&lbl_8329EAD0 + in_r0 & 0xfffffff0);
      uVar5 = puVar2[1];
      uVar6 = puVar2[2];
      uVar7 = puVar2[3];
      puVar3 = (undefined4 *)(in_r0 + iVar1 + 0x50 & 0xfffffff0);
      *puVar3 = *puVar2;
      puVar3[1] = uVar5;
      puVar3[2] = uVar6;
      puVar3[3] = uVar7;
      uVar7 = uRam8329eaec;
      uVar6 = uRam8329eae8;
      uVar5 = uRam8329eae4;
      puVar2 = (undefined4 *)(iVar1 + 0x60U & 0xfffffff0);
      *puVar2 = lbl_8329EAE0;
      puVar2[1] = uVar5;
      puVar2[2] = uVar6;
      puVar2[3] = uVar7;
      uVar7 = uRam8329eafc;
      uVar6 = uRam8329eaf8;
      uVar5 = uRam8329eaf4;
      puVar2 = (undefined4 *)(iVar1 + 0x70U & 0xfffffff0);
      *puVar2 = lbl_8329EAF0;
      puVar2[1] = uVar5;
      puVar2[2] = uVar6;
      puVar2[3] = uVar7;
      uVar7 = uRam8329eb0c;
      uVar6 = uRam8329eb08;
      uVar5 = uRam8329eb04;
      puVar2 = (undefined4 *)(iVar1 + 0x80U & 0xfffffff0);
      *puVar2 = lbl_8329EB00;
      puVar2[1] = uVar5;
      puVar2[2] = uVar6;
      puVar2[3] = uVar7;
    }
  }
  return *(undefined4 *)(param_1 + 0x1b8);
}

