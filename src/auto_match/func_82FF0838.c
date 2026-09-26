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
extern int fn_82F68CC0();
extern unsigned int lbl_8216CBE4;
extern unsigned int lbl_8217BB40;
extern unsigned int lbl_8217BB44;
extern unsigned int lbl_8217BB48;
extern unsigned int lbl_8217BB50;
extern unsigned int lbl_8217D264;
extern unsigned int lbl_821968A4;
extern unsigned int lbl_821AAD20;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
fn_82FF0838(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4,int param_5,
             undefined8 param_6,undefined4 param_7,undefined4 *param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  longlong lVar6;
  byte in_stack_00000057;
  int in_stack_0000005c;
  
  param_1[2] = 0;
  param_1[1] = &lbl_8216CBE4;
  param_1[3] = &lbl_821968A4;
  param_1[6] = 0;
  param_1[3] = &lbl_8217D264;
  *param_1 = &lbl_8217BB50;
  uVar3 = lbl_821AAD20;
  param_1[1] = &lbl_8217BB48;
  lVar6 = 6;
  param_1[7] = 0;
  puVar4 = param_1 + 0xf;
  param_1[8] = 0;
  puVar5 = (undefined4 *)(param_5 + -4);
  param_1[9] = 0;
  param_1[10] = uVar3;
  param_1[0xb] = uVar3;
  param_1[0xc] = uVar3;
  param_1[0xd] = uVar3;
  param_1[0xe] = 0;
  do {
    puVar5 = puVar5 + 1;
    puVar4 = puVar4 + 1;
    *puVar4 = *puVar5;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) & 0x3f;
  param_1[0x1d] = uVar3;
  param_1[0x19] = param_7;
  param_1[0x1e] = uVar3;
  param_1[0x1c] = param_4;
  param_1[0x1f] = uVar3;
  param_1[0x1b] = param_3;
  param_1[0x20] = uVar3;
  param_1[0x21] = uVar3;
  param_1[0x1a] = param_2;
  param_1[0x22] = uVar3;
  param_1[0x23] = 0;
  param_1[0x34] = in_stack_0000005c;
  *(byte *)((int)param_1 + 0xda) = (in_stack_00000057 & 1) << 1;
  *(undefined2 *)(param_1 + 0x35) = 1;
  *(undefined1 *)((int)param_1 + 0xd6) = 0xff;
  *(undefined1 *)((int)param_1 + 0xd7) = 0xff;
  *(undefined1 *)(param_1 + 0x36) = 0;
  *(undefined1 *)((int)param_1 + 0xd9) = 0;
  *(byte *)((int)param_1 + 0xdb) =
       (in_stack_0000005c != 0) << 7 | *(byte *)((int)param_1 + 0xdb) & 0x7f;
  uVar2 = lbl_8217BB40;
  param_1[0x37] = *param_8;
  param_1[0x38] = param_8[1];
  uVar1 = param_8[2];
  param_1[0x50] = uVar3;
  param_1[0x39] = uVar1;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x52] = 0;
  *(undefined2 *)(param_1 + 0x53) = 0;
  *(undefined1 *)((int)param_1 + 0x14e) = 1;
  *(undefined1 *)((int)param_1 + 0x14f) = 0x1f;
  param_1[0x57] = uVar2;
  param_1[0x51] = &lbl_8217BB44;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x4a] = 0xffffffff;
  param_1[0x4b] = 0;
  param_1[0x3a] = 0xffffffff;
  param_1[0x3c] = 0;
  param_1[0x44] = 0;
  *(undefined1 *)(param_1 + 0x3d) = 0;
  param_1[0x3b] = 0;
  *(undefined1 *)(param_1 + 0x41) = 0;
  param_1[0x3e] = 0xffffffff;
  param_1[0x40] = 0;
  param_1[0x3f] = 0;
  *(undefined1 *)(param_1 + 0x45) = 0;
  param_1[0x42] = 0xffffffff;
  param_1[0x43] = 0;
  *(undefined1 *)(param_1 + 0x49) = 0;
  param_1[0x46] = 0xffffffff;
  param_1[0x48] = 0;
  param_1[0x47] = 0;
  *(int *)(param_1[0x1c] + 0x5c) = *(int *)(param_1[0x1c] + 0x5c) + 1;
  (**(code **)(*param_2 + 4))(param_2);
  if (param_2[0x1f] == 0) {
    param_2[0x1f] = (int)param_1;
    param_1[5] = 0;
  }
  else {
    param_1[5] = param_2[0x1f];
    param_2[0x1f] = (int)param_1;
  }
  fn_82F68CC0(param_1 + 0x23,param_6,0x44);
  return param_1;
}

