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
extern int fn_827EFC90();
extern unsigned int lbl_821A8D8C;
extern unsigned int lbl_821C52DC;
extern unsigned int lbl_821CC160;


undefined4 *
fn_825661E0(undefined4 *param_1,undefined4 param_2,uint *param_3,undefined4 *param_4,
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
  uint uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined4 *in_stack_00000054;
  undefined4 *in_stack_0000005c;
  undefined4 *in_stack_00000064;
  
  param_1[1] = 1;
  puVar11 = param_1 + 4;
  *param_1 = &lbl_821A8D8C;
  param_1[2] = 1;
  if (puVar11 != (undefined4 *)0x0) {
    uVar9 = *param_3;
    uVar1 = *param_8;
    uVar2 = *in_stack_00000064;
    uVar3 = *in_stack_0000005c;
    uVar4 = *in_stack_00000054;
    uVar5 = *param_7;
    uVar6 = *param_6;
    uVar7 = *param_5;
    uVar8 = *param_4;
    param_1[5] = param_2;
    uVar10 = lbl_821CC160;
    *puVar11 = &lbl_821C52DC;
    param_1[6] = uVar10;
    param_1[7] = 0;
    param_1[8] = uVar10;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = uVar10;
    param_1[0x1d] = uVar9;
    param_1[0x11] = uVar10;
    param_1[0x12] = uVar8;
    param_1[0x13] = uVar7;
    param_1[0x14] = uVar6;
    param_1[0x15] = uVar10;
    param_1[0x16] = uVar10;
    param_1[0x17] = uVar5;
    param_1[0x18] = uVar1;
    param_1[0x19] = uVar10;
    param_1[0x1a] = uVar4;
    param_1[0x1b] = uVar3;
    param_1[0x1c] = uVar2;
    fn_827EFC90(*(undefined4 *)(param_1[5] + 0x24),uVar9 & 0xffff,puVar11,0);
  }
  return param_1;
}

