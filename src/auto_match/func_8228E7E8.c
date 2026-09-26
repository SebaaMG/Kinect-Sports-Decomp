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
extern unsigned int *auStack_88;
extern int fn_82230040();
extern int fn_822315A0();
extern int fn_82266D28();
extern int fn_8228EDD0();
extern int fn_8228F108();
extern int fn_8239DD40();
extern int fn_823F2E20();
extern int fn_82512C30();
extern int fn_82512CC8();
extern int fn_82512E18();
extern int fn_8251F720();
extern int fn_82554D38();
extern int fn_82554E20();
extern int fn_8265C9E0();
extern int fn_8266E408();
extern int fn_8266EC60();
extern int fn_8266ECF0();
extern int fn_8266F628();
extern int fn_8266F660();
extern int fn_8266F678();
extern int fn_82673A28();
extern int fn_82673BC0();
extern int fn_82673C58();
extern int fn_82BFEB90();
extern unsigned int iStack_84;
extern unsigned int lbl_82002B04;
extern unsigned int lbl_82193A34;
extern unsigned int lbl_821A9C90;
extern unsigned int lbl_821CC160;
extern int (*lbl_83276778)();
extern unsigned int lbl_832961C8;
extern unsigned int uStack_8c;


undefined4 *
fn_8228E7E8(double param_1,undefined4 *param_2,undefined4 param_3,undefined8 param_4,
             undefined4 *param_5,int *param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar2;
  longlong lVar5;
  undefined4 *puVar6;
  undefined4 in_stack_00000054;
  undefined4 in_stack_0000005c;
  undefined4 in_stack_00000064;
  undefined4 in_stack_0000006c;
  undefined4 in_stack_00000074;
  undefined4 in_stack_0000007c;
  int in_stack_00000084;
  undefined **ppuStack_90;
  undefined4 uStack_8c;
  undefined1 auStack_88 [4];
  int iStack_84;
  int aiStack_80 [32];
  
  param_2[4] = param_3;
  param_2[2] = 0;
  *param_2 = &lbl_821A9C90;
  puVar6 = param_2 + 5;
  param_2[1] = 1;
  param_2[3] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  fn_82266D28(puVar6,0);
  param_2[7] = 0;
  param_2[0xb] = 0;
  iVar3 = fn_8265C9E0(0x30);
  if (iVar3 != 0) {
    param_2[10] = iVar3;
    *(int *)iVar3 = iVar3;
    *(undefined4 *)(param_2[10] + 4) = param_2[10];
    uVar4 = lbl_821CC160;
    *(undefined4 *)(param_2[10] + 8) = param_2[10];
    *(undefined1 *)(param_2[10] + 0x2c) = 1;
    *(undefined1 *)(param_2[10] + 0x2d) = 1;
    param_2[0xd] = 0;
    param_2[0xe] = 0;
    param_2[0xf] = 0;
    param_2[0x10] = 0;
    param_2[0x12] = (float)param_1;
    param_2[0x25] = uVar4;
    param_2[0x13] = in_stack_00000064;
    param_2[0x14] = 0;
    param_2[0x15] = 0;
    param_2[0x16] = in_stack_00000074;
    param_2[0x17] = in_stack_0000007c;
    param_2[0x18] = 0;
    param_2[0x19] = 0;
    param_2[0x1a] = 0;
    param_2[0x1b] = 0;
    param_2[0x1c] = 0;
    param_2[0x1d] = 1;
    param_2[0x1e] = in_stack_0000006c;
    param_2[0x1f] = 0;
    param_2[0x20] = 0;
    param_2[0x21] = 0;
    param_2[0x22] = 0;
    param_2[0x23] = 0;
    param_2[0x24] = 0;
    param_2[8] = *param_5;
    if (*param_6 != 0) {
      uVar4 = fn_8251F720(param_6,0);
      param_2[0xd] = uVar4;
    }
    fn_8239DD40(param_2 + 0xe,2);
    uVar2 = fn_8266EC60();
    uVar2 = fn_8266ECF0(auStack_88,uVar2,param_4,1,0,0xffffffffffffffff,0,0x18280143);
    fn_823F2E20(puVar6,uVar2);
    if (iStack_84 != 0) {
      fn_822315A0();
    }
    fn_8266F660(*puVar6,1);
    if (in_stack_00000084 != 0) {
      fn_8266F628(*puVar6,1);
    }
    fn_8228F108(param_2,param_8);
    fn_8228EDD0(param_2,in_stack_00000054,in_stack_0000005c,param_7);
    fn_8266F678(*puVar6,1);
    fn_82673A28(*puVar6,0xffffffff8228f800,param_2);
    fn_82673BC0(*puVar6,0xffffffff82291208,param_2);
    fn_82673C58(*puVar6,0xffffffff8228fa20,param_2,1);
    if ((param_2[0x16] != 0) && (param_2[0x18] == 0)) {
      if ((param_2[0x17] == 0) && (lbl_83276778 != (code *)0x0)) {
        (*lbl_83276778)(0,0,1,0xffffffff821a9b0c,0xffffffff821a9ac0,0x2b5);
      }
      param_2[0x18] = 1;
    }
    if (param_2[0x19] == 0) {
      iVar3 = fn_82512C30();
      uVar1 = *(uint *)(iVar3 + 0x10);
      aiStack_80[1] = 0;
      lVar5 = (ulonglong)uVar1 + 1;
      aiStack_80[2] = 1;
      aiStack_80[0] = (int)lVar5;
      *(int *)(iVar3 + 0x10) = aiStack_80[0];
      if (lVar5 == 0) {
        aiStack_80[0] = uVar1 + 2;
        *(int *)(iVar3 + 0x10) = aiStack_80[0];
      }
      fn_82512E18(iVar3 + 0x24,aiStack_80);
      fn_82512CC8(iVar3);
      param_2[0x19] = aiStack_80[0];
    }
    uVar4 = fn_82554D38();
    param_2[7] = uVar4;
    if (param_2[0x23] == 0) {
      lbl_832961C8 = lbl_832961C8 + 1;
      param_2[0x23] = 1;
    }
    if (param_2[0x24] == 0) {
      fn_8266EC60();
      uVar4 = fn_8266E408((double)lbl_82193A34);
      param_2[0x24] = uVar4;
    }
    fn_82554E20(param_2[7],param_2 + 8);
    iVar3 = param_2[7];
    *(undefined4 *)(iVar3 + 0x20) = 0;
    *(undefined4 *)(iVar3 + 0x1c) = 0;
    *(undefined4 *)(iVar3 + 0x24) = 0x500;
    *(undefined4 *)(iVar3 + 0x28) = 0x2d0;
    if (*(int *)(iVar3 + 0x18) != 0) {
      fn_82BFEB90(*(int *)(iVar3 + 0x18),iVar3 + 0x1c);
    }
    return param_2;
  }
  uStack_8c = 0;
  ppuStack_90 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_90);
}

