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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern unsigned int *auStack_40;
extern unsigned int *auStack_48;
extern unsigned int *auStack_4c;
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern int fn_8262FD28();
extern int fn_82630270();
extern int fn_826303C8();
extern int fn_8263B958();
extern int fn_82645110();
extern int fn_8264B4A0();


void fn_826308A0(int param_1,int param_2,uint *param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint auStack_60 [4];
  undefined1 auStack_50 [4];
  undefined1 auStack_4c [4];
  undefined1 auStack_48 [8];
  uint auStack_40 [16];
  
  *(undefined4 *)((param_2 + 0xa26) * 4 + param_1) = 0;
  uVar3 = *(uint *)(param_1 + 0x30);
  if (*(uint *)(param_1 + 0x38) < uVar3) {
    uVar3 = fn_82645110(param_1);
  }
  *(int *)(uVar3 + 4) = param_2 + 0x2006;
  *(undefined4 *)(uVar3 + 8) = 0;
  uVar1 = *(uint *)(param_1 + 0x2a9c);
  *(undefined4 **)(param_1 + 0x30) = (undefined4 *)(uVar3 + 8);
  if (uVar1 == 0) {
    if ((*(uint *)(param_1 + 0x2aa0) & *param_3) != 0) {
      puVar4 = *(ulonglong **)(param_1 + 0x35a8);
      if (*(ulonglong **)(param_1 + 0x35ac) <= puVar4) {
        puVar4 = (ulonglong *)fn_8264B4A0(param_1);
      }
      auStack_40[1] = 0xffffffff;
      uVar3 = (uint)param_3 >> 2 | auStack_40[0] & 0xc0000000;
      auStack_40[0] = uVar3 | 0x40000000;
      *puVar4 = CONCAT44(uVar3,0xffffffff) | 0x4000000000000000;
      *(ulonglong **)(param_1 + 0x35a8) = puVar4 + 1;
    }
  }
  else {
    param_3[2] = uVar1;
    param_3[3] = uVar1;
  }
  if ((*param_3 & 0xf) == 1) {
    uVar1 = param_3[6];
    uVar2 = uVar1 & 0xfffffffc;
    auStack_60[0] = param_3[7] & 0x3fffffc;
  }
  else {
    if ((*param_3 & 0xf) != 3) goto LAB_82630a2c;
    uVar3 = param_3[8];
    uVar1 = param_3[0xc];
    uVar2 = uVar1 & 0xfffff000;
    fn_8263B958(param_3,0,0,auStack_40,auStack_48,auStack_60,auStack_4c,auStack_50);
    fn_8262FD28(param_1,((uVar3 >> 0x14) + 0x200 & 0x1000) + (uVar3 & 0x1ffff000),auStack_60[0]);
    if ((uVar1 & 0xfffff000) == 0) goto LAB_82630a2c;
  }
  fn_8262FD28(param_1,((uVar1 >> 0x14) + 0x200 & 0x1000) + (uVar2 & 0x1fffffff),auStack_60[0]);
LAB_82630a2c:
  uVar3 = *(uint *)(param_1 + 0x30);
  *(int *)(param_1 + 0x3590) = *(int *)(param_1 + 0x3590) + -1;
  if (*(uint *)(param_1 + 0x38) < uVar3) {
    uVar3 = fn_82645110(param_1);
  }
  *(undefined4 *)(uVar3 + 4) = 0xc0004600;
  puVar5 = (undefined4 *)(uVar3 + 8);
  *puVar5 = 6;
  *(undefined4 **)(param_1 + 0x30) = puVar5;
  if ((*(int *)(param_1 + 0x3590) == 0) && (param_4 != 1)) {
    if (*(undefined4 **)(param_1 + 0x38) < puVar5) {
      puVar5 = (undefined4 *)fn_82645110(param_1);
    }
    puVar5[1] = 0x5c8;
    puVar5[2] = 0x20000;
    *(undefined4 **)(param_1 + 0x30) = puVar5 + 2;
    if (param_4 != 2) {
      fn_826303C8(param_1);
    }
  }
  else {
    fn_82630270(param_1);
  }
  uVar3 = *(uint *)(param_1 + 0x30);
  if (*(uint *)(param_1 + 0x38) < uVar3) {
    uVar3 = fn_82645110(param_1);
  }
  *(uint *)(param_1 + 0x30) = uVar3;
  if ((*(int *)(param_1 + 0x3590) != 0) || (uVar6 = 1, param_4 != 1)) {
    uVar6 = 0;
  }
  *(undefined4 *)(param_1 + 0x3594) = uVar6;
  return;
}

