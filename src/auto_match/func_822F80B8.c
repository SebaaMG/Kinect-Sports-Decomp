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
extern int fn_8265C9E0();
extern unsigned int lbl_821AE598;


undefined4 *
fn_822F80B8(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
             undefined4 *param_5,undefined4 *param_6,undefined4 *param_7,undefined4 *param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined4 *in_stack_00000054;
  
  puVar11 = (undefined4 *)fn_8265C9E0(0x38);
  if (puVar11 == (undefined4 *)0x0) {
    puVar11 = (undefined4 *)0x0;
  }
  else {
    puVar11[1] = 1;
    *puVar11 = &lbl_821AE598;
    puVar11[2] = 1;
    if (puVar11 + 3 != (undefined4 *)0x0) {
      uVar3 = *param_7;
      uVar4 = param_7[1];
      uVar5 = param_7[2];
      uVar1 = *param_8;
      uVar6 = param_7[3];
      uVar2 = *in_stack_00000054;
      uVar7 = *param_5;
      uVar8 = *param_4;
      uVar9 = *param_3;
      uVar10 = *param_2;
      puVar11[7] = *param_6;
      puVar11[0xc] = uVar1;
      puVar11[0xb] = uVar6;
      puVar11[0xd] = uVar2;
      puVar11[6] = uVar7;
      puVar11[5] = uVar8;
      puVar11[4] = uVar9;
      puVar11[3] = uVar10;
      puVar11[10] = uVar5;
      puVar11[9] = uVar4;
      puVar11[8] = uVar3;
    }
  }
  param_1[1] = puVar11;
  *param_1 = puVar11 + 3;
  return param_1;
}

