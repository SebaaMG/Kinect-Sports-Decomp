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
extern unsigned int *auStack_40;
extern int fn_82230218();
extern int fn_828B3948();
extern int fn_82F68CC0();
extern int iRam832144f0;
extern unsigned int lbl_8202751C;
extern unsigned int lbl_821AAD20;
extern unsigned int stack0x00000040;
extern unsigned int uStack00000040;
extern unsigned int uStack00000048;
extern unsigned int uStack00000050;


undefined4 *
fn_828EBA58(undefined4 *param_1,undefined1 param_2,undefined1 param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined8 uStack00000040;
  undefined8 uStack00000048;
  undefined8 uStack00000050;
  undefined4 in_stack_0000006c;
  undefined4 in_stack_00000074;
  undefined1 in_stack_0000007f;
  undefined4 in_stack_00000084;
  undefined4 in_stack_0000008c;
  undefined4 in_stack_00000094;
  undefined4 in_stack_0000009c;
  undefined1 in_stack_000000a7;
  undefined1 in_stack_000000af;
  undefined1 auStack_40 [64];
  
  *(undefined1 *)(param_1 + 2) = param_2;
  *param_1 = &lbl_8202751C;
  param_1[8] = 0xf;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  uStack00000040 = param_6;
  uStack00000048 = param_7;
  uStack00000050 = param_8;
  fn_82230218(param_1 + 3,in_stack_0000006c,0,0xffffffffffffffff);
  *(undefined8 *)(param_1 + 10) = 0;
  fn_82F68CC0(param_1 + 0xc,&stack0x00000040,0x24);
  param_1[0x15] = iRam832144f0;
  iRam832144f0 = iRam832144f0 + 1;
  *(undefined1 *)(param_1 + 0x16) = 1;
  *(undefined1 *)((int)param_1 + 0x59) = param_3;
  fn_828B3948(param_1 + 0x17,auStack_40,auStack_40);
  puVar2 = param_1 + 0x2e;
  lVar3 = 5;
  param_1[0x1b] = in_stack_00000074;
  *(undefined1 *)(param_1 + 0x36) = in_stack_000000a7;
  param_1[0x1c] = param_4;
  *(undefined1 *)(param_1 + 0x1d) = in_stack_0000007f;
  param_1[0x1e] = in_stack_00000084;
  param_1[0x1f] = in_stack_0000008c;
  uVar1 = lbl_821AAD20;
  param_1[0x20] = in_stack_00000094;
  param_1[0x21] = in_stack_0000009c;
  *(undefined1 *)(param_1 + 0x22) = in_stack_000000af;
  *(undefined1 *)((int)param_1 + 0x89) = 0;
  param_1[0x23] = 2;
  param_1[0x24] = 1;
  *(undefined1 *)(param_1 + 0x34) = 0;
  param_1[0x35] = 0;
  do {
    puVar2[-4] = uVar1;
    puVar2[-9] = 0;
    puVar2 = puVar2 + 1;
    *puVar2 = uVar1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  *(undefined8 *)(param_1 + 10) = param_5;
  return param_1;
}

