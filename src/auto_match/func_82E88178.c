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
#define _iStack00000020 ((*(U64*)&iStack00000020))
#define _iStack00000038 ((*(U64*)&iStack00000038))
#define _iStack00000040 ((*(U64*)&iStack00000040))
#define _iStack00000048 ((*(U64*)&iStack00000048))
#define _iStack00000050 ((*(U64*)&iStack00000050))
extern unsigned int *auStack_a8;
extern int fn_82E81818();
extern int fn_82E81948();
extern int fn_82E81AE0();
extern int fn_82E81C50();
extern int fn_82E81D40();
extern int fn_82E81E40();
extern int fn_82E81FC8();
extern int fn_82E82358();
extern int fn_82E82598();
extern int fn_82E84B30();
extern int fn_82F68CC0();
extern unsigned int iStack00000020;
extern unsigned int iStack00000038;
extern unsigned int iStack0000003c;
extern unsigned int iStack00000040;
extern unsigned int iStack00000044;
extern unsigned int iStack00000048;
extern unsigned int iStack0000004c;
extern unsigned int iStack00000050;
extern unsigned int iStack00000054;
extern unsigned int lbl_82005730;
extern unsigned int lbl_8214C330;
extern unsigned int lbl_8215F6D8;
extern unsigned int lbl_831A7DC0;
extern unsigned int lbl_831A7EC0;
extern unsigned int lbl_831A80C0;
extern unsigned int lbl_831A81C0;
extern unsigned int lbl_831A82C8;
extern unsigned int lbl_831A83D0;
extern unsigned int lbl_831A84D0;
extern unsigned int lbl_831A85D0;
extern unsigned int lbl_831A86D8;
extern unsigned int lbl_831A87D8;
extern unsigned int lbl_831A8860;
extern unsigned int lbl_831A88E8;
extern unsigned int lbl_831A8970;
extern unsigned int lbl_831A89F8;
extern unsigned int lbl_831A8A40;
extern unsigned int lbl_831A8A88;
extern unsigned int lbl_831A8B90;
extern unsigned int lbl_831A8C90;
extern unsigned int lbl_831A8D18;
extern unsigned int lbl_831A8DA0;
extern unsigned int lbl_831A8E28;
extern unsigned int lbl_831A8EB0;
extern unsigned int lbl_831A8EF8;
extern unsigned int lbl_831A8F40;
extern unsigned int lbl_831A8FC8;
extern unsigned int lbl_831A9050;
extern unsigned int lbl_831A90D8;
extern unsigned int lbl_831A9270;
extern unsigned int lbl_831A92B8;
extern unsigned int lbl_831A9798;
extern unsigned int lbl_83248E44;
extern unsigned int lbl_83248E48;
extern unsigned int stack0x00000058;
extern unsigned int uStack00000028;
extern unsigned int uStack00000030;


void fn_82E88178(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar9;
  int iVar10;
  ulonglong uVar8;
  int iVar11;
  longlong lVar12;
  int iStack00000020;
  undefined8 uStack00000028;
  undefined8 uStack00000030;
  int iStack00000038;
  int iStack0000003c;
  int iStack00000040;
  int iStack00000044;
  int iStack00000048;
  int iStack0000004c;
  int iStack00000050;
  int iStack00000054;
  int in_stack_00000058;
  int in_stack_0000005c;
  int in_stack_00000060;
  int in_stack_00000064;
  int in_stack_00000068;
  int in_stack_0000006c;
  int in_stack_00000070;
  int in_stack_00000074;
  undefined1 auStack_a8 [56];
  longlong lStack_70;
  
  _iStack00000020 = param_2;
  uStack00000028 = param_3;
  uStack00000030 = param_4;
  _iStack00000038 = param_5;
  _iStack00000040 = param_6;
  _iStack00000048 = param_7;
  _iStack00000050 = param_8;
  fn_82F68CC0(auStack_a8,&stack0x00000058,0x30);
  fn_82E81948(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  fn_82E81818();
  param_1[0x8e] = (int)&lbl_831A82C8;
  param_1[0x8f] = (int)&lbl_831A83D0;
  param_1[0x181] = 0;
  param_1[0x90] = (int)&lbl_831A84D0;
  param_1[0x92] = (int)&lbl_831A7DC0;
  param_1[0x93] = (int)&lbl_831A7EC0;
  if (param_1[1] == 8) {
    if (param_1[0x1b55] == 0) {
      puVar1 = &lbl_831A85D0;
      puVar9 = &lbl_831A87D8;
      puVar7 = &lbl_831A88E8;
      puVar6 = &lbl_831A89F8;
      puVar5 = &lbl_831A86D8;
      puVar4 = &lbl_831A8860;
      puVar3 = &lbl_831A8970;
      puVar2 = &lbl_831A8A40;
    }
    else {
      puVar1 = &lbl_831A8A88;
      puVar9 = &lbl_831A8C90;
      puVar7 = &lbl_831A8DA0;
      puVar6 = &lbl_831A8EB0;
      puVar5 = &lbl_831A8B90;
      puVar4 = &lbl_831A8D18;
      puVar3 = &lbl_831A8E28;
      puVar2 = &lbl_831A8EF8;
    }
  }
  else {
    puVar1 = &lbl_831A81C0;
    puVar9 = &lbl_831A8F40;
    puVar7 = &lbl_831A8FC8;
    puVar6 = &lbl_831A9270;
    puVar5 = &lbl_831A80C0;
    puVar4 = &lbl_831A9050;
    puVar3 = &lbl_831A90D8;
    puVar2 = &lbl_831A92B8;
  }
  param_1[0x96] = (int)puVar9;
  param_1[0x95] = (int)puVar1;
  param_1[0x97] = (int)puVar7;
  param_1[0x9a] = (int)puVar6;
  param_1[0x94] = (int)puVar5;
  param_1[0x98] = (int)puVar4;
  param_1[0x99] = (int)puVar3;
  param_1[0x9b] = (int)puVar2;
  if ((1 < param_1[0x7ea]) ||
     (iVar10 = 1,
     (double)(longlong)param_1[200] * (double)(longlong)param_1[199] * *(double *)(param_1 + 0x782)
     <= lbl_8215F6D8)) {
    iVar10 = 0;
  }
  param_1[0x7de] = iVar10;
  lStack_70 = (longlong)(int)(*(double *)(param_1 + 0x782) + lbl_82005730);
  lVar12 = (longlong)((int)(*(double *)(param_1 + 0x782) + lbl_82005730) * param_1[199]) *
           (longlong)param_1[200];
  if (*param_1 != 0) {
    uVar8 = (longlong)param_1[199] * (longlong)param_1[200];
    lVar12 = (uVar8 + (uVar8 & 0x7fffffff) * 2 & 0x1fffffff) << 3;
  }
  if ((param_1[0x1db3] == 0) && (param_1[0x1db2] == 0)) {
    fn_82E82598(param_1,lVar12);
  }
  else {
    fn_82E81D40(param_1);
  }
  if (param_1[0x1d98] != 0) {
    if (((((int)lVar12 < 0x465001) && (*(double *)(param_1 + 0x7b4) <= lbl_8214C330)) &&
        (param_1[0x222] != 0)) && (param_1[0x705] != 2)) {
      param_1[0x2bf] = 1;
    }
    param_1[0x1d85] = 1;
  }
  iVar10 = param_1[0x213];
  param_1[0x149a] = 1;
  param_1[0x193] = 0;
  param_1[0x165] = 0;
  param_1[0x167] = 0;
  param_1[0x168] = 0;
  param_1[0x166] = 0;
  if (0 < iVar10) {
    if (*param_1 == 0) {
      param_1[0x7a8] = iVar10;
      param_1[0x214] = (&lbl_831A9798)[iVar10];
    }
    else {
      param_1[0x7a8] = 0;
      param_1[0x213] = 0;
      param_1[0x214] = lbl_831A9798;
    }
  }
  fn_82E81C50(param_1,lVar12);
  fn_82E81AE0();
  fn_82E81E40();
  param_1[1999] = (int)(((param_1[200] + -1) * 2 & 0x10U) + (param_1[199] - 1U & 8) ^ 0x18) >> 3;
  if (0 < param_1[0x213]) {
    param_1[0x193] = 0;
  }
  param_1[0x7a3] = 0;
  param_1[0x7ad] = 0;
  param_1[0x7a5] = 4;
  param_1[700] = 0;
  if ((lbl_83248E44 != 0) || (lbl_83248E48 != 0)) {
    param_1[0x193] = 0;
    param_1[0x191] = 1;
    param_1[0x1495] = 0;
    param_1[0x1494] = 0;
    param_1[0x6ea] = 0;
  }
  iVar10 = param_1[0x7fc];
  if (iVar10 != 0) {
    if (*(int *)(param_1[0x7fd] + 0xb8) != 0) {
      param_1[0x191] = *(int *)(param_1[0x7fd] + 0x4c);
    }
    if (iVar10 != 0) {
      if (*(int *)(param_1[0x7fd] + 0xb0) != 0) {
        param_1[0x7ca] = (uint)(*(int *)(param_1[0x7fd] + 0x44) == 0);
      }
      if ((iVar10 != 0) && (*(int *)(param_1[0x7fd] + 0xd4) != 0)) {
        param_1[0x248] = *(int *)(param_1[0x7fd] + 0x5c);
      }
    }
  }
  param_1[0x189] = 1;
  fn_82E84B30(param_1);
  param_1[0x288] = 0;
  param_1[0x6bc] = 0x20;
  param_1[0x6bd] = 0x20;
  param_1[0x287] = 0;
  param_1[0x289] = 9;
  param_1[0x28a] = 8;
  param_1[0x28b] = 0x100;
  param_1[0x28c] = 0x80;
  param_1[0x28d] = 0x1ff;
  param_1[0x28e] = 0xff;
  param_1[0x6bb] = 0x40;
  param_1[0x6be] = 0x10;
  if ((param_1[0x222] == 0) || (param_1[0x2c2] != 0)) {
    param_1[0x149a] = 0;
  }
  if ((((param_1[0x1db2] == 0) && (param_1[0x7fc] != 0)) && (*(int *)(param_1[0x7fd] + 0x94) != 0))
     && ((iVar10 = *(int *)(param_1[0x7fd] + 0x24), -1 < iVar10 && (iVar10 < 0x1f)))) {
    param_1[0x21a] = iVar10;
  }
  fn_82E81FC8(param_1);
  if ((param_1[0x69d] != 0) && (param_1[1] == 8)) {
    fn_82E82358(param_1);
    param_1[0x6a1] = 1;
  }
  if (iStack00000020 != 0) {
    param_1[0x191] = (((U64)(uStack00000030) >> 32) & 0xFFFFFFFF);
    param_1[0x18b] = iStack00000038;
    param_1[0x193] = iStack0000003c;
    param_1[0x18a] = iStack00000040;
    param_1[0xc5] = iStack00000044;
    param_1[0x281] = iStack00000048;
    param_1[0x25e] = iStack0000004c;
    param_1[0x192] = iStack00000050;
    param_1[0x181] = iStack00000054;
    param_1[0x248] = in_stack_00000058;
    param_1[0x235] = in_stack_0000005c;
    param_1[0x2bf] = in_stack_00000060;
    param_1[0x166] = in_stack_00000068;
    param_1[0x167] = in_stack_0000006c;
    param_1[0x165] = in_stack_00000070;
    param_1[0x168] = in_stack_00000074;
    if ((param_1[1] != 8) && (*param_1 == 0)) {
      param_1[0x213] = in_stack_00000064;
      param_1[0x7a8] = in_stack_00000064;
    }
  }
  if (2 < (uint)param_1[0x196]) {
    param_1[0x248] = 0;
  }
  iVar10 = param_1[0x7fc];
  if (iVar10 != 0) {
    if (*(int *)(param_1[0x7fd] + 0x84) != 0) {
      iVar11 = *(int *)(param_1[0x7fd] + 0x10);
      if ((iVar11 < 1) || (3 < iVar11)) {
        if (iVar11 == -1) goto LAB_82e887b0;
      }
      else {
        if (iVar11 == -1) {
LAB_82e887b0:
          iVar11 = 1;
          param_1[0x296] = 1;
        }
        param_1[0x288] = iVar11;
        param_1[0x287] = iVar11;
        param_1[0x281] = 1;
      }
    }
    if ((((iVar10 != 0) && (*(int *)(param_1[0x7fd] + 0x88) != 0)) &&
        (iVar11 = *(int *)(param_1[0x7fd] + 0x14), 0 < iVar11)) && (iVar11 < 4)) {
      param_1[0x284] = iVar11;
      param_1[0x282] = 1;
    }
  }
  if (((param_1[0x1db2] == 0) && (iVar10 != 0)) && (*(int *)(param_1[0x7fd] + 0x90) != 0)) {
    param_1[0x1b61] = *(int *)(param_1[0x7fd] + 0x1c);
  }
  param_1[0x69c] = 0;
  if ((param_1[0x7fc] != 0) && (*(int *)(param_1[0x7fd] + 0xc0) != 0)) {
    param_1[0x69c] = *(int *)(param_1[0x7fd] + 0x54);
  }
  iVar10 = param_1[0x1db2];
  if (iVar10 == 0) {
    if ((param_1[0x7fc] != 0) && (*(int *)(param_1[0x7fd] + 200) != 0)) {
      param_1[0x1b63] = *(int *)(param_1[0x7fd] + 0x20);
    }
    if ((param_1[0x7fc] != 0) && (*(int *)(param_1[0x7fd] + 0xcc) != 0)) {
      param_1[0x1b65] = *(int *)(param_1[0x7fd] + 0x60);
    }
    if ((param_1[0x7fc] != 0) && (*(int *)(param_1[0x7fd] + 0xd8) != 0)) {
      param_1[0x1b71] = *(int *)(param_1[0x7fd] + 100);
    }
  }
  if (lbl_83248E44 == 0) {
    if (iVar10 != 0) goto LAB_82e8896c;
    if ((param_1[0x7fc] != 0) && (*(int *)(param_1[0x7fd] + 0xdc) != 0)) {
      param_1[0x1b68] = *(int *)(param_1[0x7fd] + 0x68);
    }
  }
  else {
    param_1[0x1b68] = 0;
  }
  if (iVar10 == 0) {
    if ((param_1[0x7fc] != 0) && (*(int *)(param_1[0x7fd] + 0xe4) != 0)) {
      param_1[0x1b6e] = *(int *)(param_1[0x7fd] + 0x70);
    }
    if ((param_1[0x7fc] != 0) && (*(int *)(param_1[0x7fd] + 0xe8) != 0)) {
      param_1[0x1b69] = *(int *)(param_1[0x7fd] + 0x74);
    }
  }
LAB_82e8896c:
  if (param_1[0x194] != 0) {
    param_1[0x193] = 1;
  }
  return;
}

