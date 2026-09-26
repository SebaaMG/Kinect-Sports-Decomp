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
extern int fn_825D4FE8();
extern unsigned int lbl_821C9828;
extern unsigned int lbl_821CC160;


void fn_825D36C8(undefined8 param_1,double param_2,double param_3,double param_4,double param_5,
                  double param_6,double param_7,undefined8 param_8,undefined8 param_9,uint param_10,
                  int param_11,undefined4 param_12,undefined4 param_13)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int in_r0;
  undefined4 *puVar3;
  double extraout_f1;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  uint in_stack_0000007c;
  uint in_stack_00000084;
  
  puVar3 = (undefined4 *)fn_825D4FE8(param_8,param_9,(-((param_10 & 1) != 0) & 0xeU) + 0xe);
  *puVar3 = &lbl_821C9828;
  uVar2 = lbl_821CC160;
  puVar1 = (undefined4 *)(in_r0 + param_11 & 0xfffffff0);
  uVar4 = *puVar1;
  uVar5 = puVar1[1];
  uVar6 = puVar1[2];
  uVar7 = puVar1[3];
  puVar3[0x30] = param_10;
  puVar3[0x36] = (float)extraout_f1;
  puVar3[0x3f] = 0;
  puVar3[0x3a] = (float)param_2;
  puVar3[0x33] = in_stack_0000007c << 0x18 | in_stack_0000007c >> 8;
  puVar3[0x3c] = (float)param_2;
  puVar3[0x34] = in_stack_00000084 << 0x18 | in_stack_00000084 >> 8;
  puVar3[0x3b] = (float)param_3;
  puVar3[0x40] = in_stack_0000007c & 0xff;
  puVar3[0x37] = (float)param_4;
  puVar3[0x41] = 0;
  puVar3[0x38] = (float)(param_4 * param_5);
  puVar3[0x31] = param_12;
  puVar3[0x39] = uVar2;
  puVar3[0x32] = param_13;
  puVar3[0x35] = (float)param_6;
  puVar3[0x3d] = (float)param_7;
  puVar3[0x3e] = uVar2;
  puVar1 = (undefined4 *)((uint)(puVar3 + 8) & 0xfffffff0);
  *puVar1 = uVar4;
  puVar1[1] = uVar5;
  puVar1[2] = uVar6;
  puVar1[3] = uVar7;
  puVar1 = (undefined4 *)((uint)(puVar3 + 0x14) & 0xfffffff0);
  *puVar1 = in_register_000104d0;
  puVar1[1] = in_register_000104d4;
  puVar1[2] = in_register_000104d8;
  puVar1[3] = in_vr77;
  if ((param_10 & 2) != 0) {
    puVar3[0x10] = puVar3[0x10] | 7;
  }
  return;
}

