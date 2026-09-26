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
extern unsigned int *auStack_120;
extern unsigned int *auStack_130;
extern unsigned int *auStack_140;
extern int fn_8265CA60();
extern int fn_8305C3F8();
extern int fn_83061508();
extern int fn_83061BC8();
extern int fn_830625A0();
extern int fn_83063D30();
extern int fn_830646D8();
extern int fn_83064A38();


void fn_8285B910(int param_1,uint *param_2)

{
  ushort uVar1;
  uint uVar2;
  longlong lVar3;
  uint *puVar4;
  ulonglong uVar5;
  uint *puVar6;
  ulonglong uVar7;
  int iVar8;
  undefined1 auStack_140 [16];
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [288];
  
  uVar1 = *(ushort *)(param_1 + 0x44);
  uVar7 = (ulonglong)uVar1;
  lVar3 = -1;
  *param_2 = (uint)uVar1;
  uVar5 = uVar7 * 0x30;
  if (0x5555555 < uVar7) {
    uVar5 = 0xffffffffffffffff;
  }
  if ((uVar5 & 0xffffffff) < 0xfffffffc) {
    lVar3 = uVar5 + 4;
  }
  puVar4 = (uint *)fn_8265CA60(lVar3);
  if (puVar4 == (uint *)0x0) {
    puVar6 = (uint *)0x0;
  }
  else {
    puVar6 = puVar4 + 1;
    *puVar4 = (uint)uVar1;
    puVar4 = puVar6;
    while (uVar7 = uVar7 - 1, -1 < (longlong)uVar7) {
      fn_83061508(puVar4);
      puVar4 = puVar4 + 0xc;
    }
  }
  param_2[1] = (uint)puVar6;
  fn_830646D8(auStack_120,param_1 + 0x6c,0);
  fn_8305C3F8(param_1 + 0x6c,auStack_140,auStack_130);
  fn_83064A38(auStack_120,param_2[1],auStack_140,auStack_130,0);
  iVar8 = 0;
  if (0 < (int)*param_2) {
    lVar3 = 0;
    do {
      uVar2 = param_2[1];
      fn_83061BC8((double)*(float *)(param_1 + 0x74),(ulonglong)uVar2 + lVar3);
      fn_830625A0((ulonglong)uVar2 + lVar3,1,0,0);
      iVar8 = iVar8 + 1;
      lVar3 = lVar3 + 0x30;
    } while (iVar8 < (int)*param_2);
  }
  fn_83063D30(auStack_120);
  return;
}

