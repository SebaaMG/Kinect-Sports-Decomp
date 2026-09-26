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
extern unsigned int *auStack_80;
extern int fn_8267BE38();
extern int fn_82683D70();
extern int fn_82684A58();
extern int fn_8268C510();
extern int fn_826C8C70();
extern int fn_826C8EB8();
extern int fn_826CD260();
extern int fn_826E7408();
extern int fn_826E7800();
extern int fn_826E7BA8();
extern int fn_826E8858();
extern int fn_826F4EC0();
extern unsigned int uStack_90;
extern U64 storeWordConditionalIndexed();


void fn_826CDAB8(int param_1,int param_2,uint *param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  bool bVar3;
  uint uVar5;
  undefined8 uVar4;
  char cVar6;
  longlong lVar7;
  uint *puVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  char in_RESERVE;
  byte in_cr0;
  uint uStack_90;
  code *apcStack_8c [3];
  undefined1 auStack_80 [128];
  
  iVar13 = *(int *)(param_2 + 0x314);
  if (iVar13 == 0) {
    iVar13 = param_2 + 0x28;
  }
  uVar5 = fn_826E7408(iVar13);
  *(int *)(param_2 + 0x2ec) = param_1;
  *(undefined4 *)(param_2 + 0x2e8) = 1;
  *(undefined1 *)(iVar13 + 0x15) = 0;
  if (*(int *)(iVar13 + 0x30) - *(int *)(iVar13 + 0x2c) < 2) {
    fn_826E7800(iVar13,2);
  }
  puVar10 = (undefined1 *)(*(int *)(iVar13 + 0x3c) + *(int *)(iVar13 + 0x2c));
  uVar1 = puVar10[1];
  uVar2 = *puVar10;
  *(int *)(iVar13 + 0x2c) = *(int *)(iVar13 + 0x2c) + 2;
  uVar11 = (uint)CONCAT11(uVar1,uVar2);
  *(uint *)(param_1 + 0x18) = uVar11;
  if (uVar11 == 0) {
    *(undefined4 *)(param_1 + 0x18) = 1;
  }
  iVar12 = param_1 + 0x20;
  fn_826CD260(iVar12,*(undefined4 *)(param_1 + 0x18));
  fn_826C8C70(iVar13,0xffffffff8200c050,*(undefined4 *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x1c) = 0;
  uVar11 = (*(int *)(iVar13 + 0x34) - *(int *)(iVar13 + 0x30)) + *(int *)(iVar13 + 0x2c);
  while (uVar11 < uVar5) {
    uVar4 = fn_826E8858(iVar13,auStack_80);
    apcStack_8c[0] = (code *)0x0;
    fn_8268C510(&uStack_90,
                      ((ulonglong)*(uint *)(*(int *)(param_2 + 0x20) + 0x24) & 0xfffffffc) + 8);
    fn_826C8EB8(param_2,&uStack_90,auStack_80,1);
    lVar7 = ((ulonglong)uStack_90 & 0xfffffffc) + 4;
    do {
      puVar8 = (uint *)lVar7;
      uVar9 = (ulonglong)*puVar8;
      if (in_RESERVE != '\0') {
        uVar11 = storeWordConditionalIndexed(uVar9 - 1,0,lVar7);
        *puVar8 = uVar11;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    in_cr0 = (uVar9 == 1) << 1;
    if (uVar9 == 1) {
      fn_8267BE38();
    }
    if ((int)uVar4 == 1) {
      if (*(uint *)(param_1 + 0x1c) == *(uint *)(param_1 + 0x24)) {
        fn_826CD260(iVar12,(ulonglong)*(uint *)(param_1 + 0x24) + 1);
        fn_82684A58(iVar13,0xffffffff8200c000,*param_3 & 0xffff,
                          *(undefined4 *)(param_1 + 0x18),(ulonglong)*(uint *)(param_1 + 0x1c) + 1);
      }
      fn_826F4EC0(param_2);
      fn_826C8C70(iVar13,0xffffffff8200bfbc,(short)*param_3);
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    }
    else {
      cVar6 = fn_82683D70(uVar4,apcStack_8c);
      in_cr0 = (cVar6 == '\0') << 1;
      if (cVar6 == '\0') {
        fn_826C8C70(iVar13,0xffffffff8200bfe0,uVar4);
      }
      else {
        (*apcStack_8c[0])(param_2,auStack_80);
      }
    }
    fn_826E7BA8(iVar13);
    uVar11 = (*(int *)(iVar13 + 0x34) - *(int *)(iVar13 + 0x30)) + *(int *)(iVar13 + 0x2c);
  }
  if ((*(int *)((*(int *)(param_2 + 0x2e8) + 0x3f) * 0xc + param_2) == 0) &&
     ((*(int *)(param_2 + 0x2e8) != 0 || (*(int *)(param_2 + 0x30c) == 0)))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    if (*(uint *)(param_1 + 0x1c) == *(uint *)(param_1 + 0x24)) {
      fn_826CD260(iVar12,(ulonglong)*(uint *)(param_1 + 0x24) + 1);
      fn_82684A58(iVar13,0xffffffff8200c000,*param_3 & 0xffff,*(undefined4 *)(param_1 + 0x18),
                        (ulonglong)*(uint *)(param_1 + 0x1c) + 1);
    }
    fn_826F4EC0(param_2);
  }
  *(undefined4 *)(param_2 + 0x2e8) = 0;
  *(undefined4 *)(param_2 + 0x2ec) = 0;
  fn_826C8C70(iVar13,0xffffffff8200bf98,(short)*param_3);
  return;
}

