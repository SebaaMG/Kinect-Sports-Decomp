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
#define CONCAT11(h,l) ((U16)((((U8)(h)) << 8) | ((U8)(l))))
#define CONCAT21(h,l) ((U32)((((U16)(h)) << 8) | ((U8)(l))))
#define CONCAT31(h,l) ((U32)((((U32)(h)) << 8) | ((U8)(l))))
extern unsigned int *auStack_3c;
extern int fn_8267BE38();
extern int fn_8268B330();
extern int fn_826C8C70();
extern int fn_826E3F28();
extern int fn_826E7800();
extern int fn_826E8660();
extern unsigned int uStack_40;
extern U64 storeWordConditionalIndexed();


void fn_826E4EA8(undefined8 param_1,int param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  uint uVar7;
  ushort uVar8;
  undefined2 uVar9;
  longlong lVar10;
  uint *puVar11;
  int iVar12;
  undefined1 *puVar14;
  ulonglong uVar13;
  undefined4 uVar15;
  char in_RESERVE;
  byte in_cr0;
  byte bVar16;
  uint uStack_40;
  uint auStack_3c [15];
  
  *(undefined1 *)(param_2 + 0x15) = 0;
  uVar15 = 0;
  if (*(int *)(param_2 + 0x30) - *(int *)(param_2 + 0x2c) < 2) {
    fn_826E7800(param_2,2);
  }
  iVar12 = *(int *)(param_2 + 0x2c) + 2;
  puVar14 = (undefined1 *)(*(int *)(param_2 + 0x3c) + *(int *)(param_2 + 0x2c));
  uVar1 = puVar14[1];
  uVar2 = *puVar14;
  *(int *)(param_2 + 0x2c) = iVar12;
  uVar8 = CONCAT11(uVar1,uVar2);
  if (0x109 < uVar8) {
    *(undefined1 *)(param_2 + 0x15) = 0;
    if (*(int *)(param_2 + 0x30) - iVar12 < 4) {
      fn_826E7800(param_2,4);
    }
    puVar14 = (undefined1 *)(*(int *)(param_2 + 0x3c) + *(int *)(param_2 + 0x2c));
    uVar3 = puVar14[3];
    uVar4 = puVar14[2];
    uVar5 = puVar14[1];
    uVar6 = *puVar14;
    *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 4;
    uVar15 = CONCAT31(CONCAT21(CONCAT11(uVar3,uVar4),uVar5),uVar6);
  }
  *(undefined1 *)(param_2 + 0x15) = 0;
  if (*(int *)(param_2 + 0x30) - *(int *)(param_2 + 0x2c) < 2) {
    fn_826E7800(param_2,2);
  }
  puVar14 = (undefined1 *)(*(int *)(param_2 + 0x3c) + *(int *)(param_2 + 0x2c));
  uVar3 = puVar14[1];
  uVar4 = *puVar14;
  *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 2;
  uVar9 = CONCAT11(uVar3,uVar4);
  fn_8268B330(auStack_3c);
  fn_8268B330(&uStack_40);
  fn_826E8660(param_2,auStack_3c);
  fn_826E8660(param_2,&uStack_40);
  fn_826C8C70(param_2,0xffffffff8200d3c0,param_3,uVar1,uVar2,uVar9,
                    ((ulonglong)auStack_3c[0] & 0xfffffffc) + 8,
                    ((ulonglong)uStack_40 & 0xfffffffc) + 8);
  fn_826E3F28(param_1,uVar8,uVar9,((ulonglong)uStack_40 & 0xfffffffc) + 8,
                ((ulonglong)auStack_3c[0] & 0xfffffffc) + 8,uVar15);
  lVar10 = ((ulonglong)uStack_40 & 0xfffffffc) + 4;
  do {
    puVar11 = (uint *)lVar10;
    uVar13 = (ulonglong)*puVar11;
    if (in_RESERVE != '\0') {
      uVar7 = storeWordConditionalIndexed(uVar13 - 1,0,lVar10);
      *puVar11 = uVar7;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  bVar16 = (uVar13 == 1) << 1;
  if (uVar13 == 1) {
    fn_8267BE38();
  }
  lVar10 = ((ulonglong)auStack_3c[0] & 0xfffffffc) + 4;
  do {
    puVar11 = (uint *)lVar10;
    uVar13 = (ulonglong)*puVar11;
    if (in_RESERVE != '\0') {
      uVar7 = storeWordConditionalIndexed(uVar13 - 1,0,lVar10);
      *puVar11 = uVar7;
      bVar16 = 2;
    }
  } while (!(bool)(bVar16 >> 1 & 1));
  if (uVar13 == 1) {
    fn_8267BE38();
  }
  return;
}

