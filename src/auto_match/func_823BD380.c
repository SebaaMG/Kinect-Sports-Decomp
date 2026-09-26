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
extern int fn_828E5F40();
extern unsigned int lbl_82196C88;
extern unsigned int lbl_821B5F24;


undefined4 *
fn_823BD380(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 *puVar1;
  undefined4 *puVar3;
  ulonglong uVar2;
  undefined4 *puVar4;
  undefined4 in_stack_00000054;
  undefined4 in_stack_0000005c;
  undefined4 in_stack_00000064;
  
  puVar4 = (undefined4 *)0x0;
  param_1[1] = 0;
  *param_1 = &lbl_821B5F24;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  puVar3 = (undefined4 *)fn_8265C9E0(0x20);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3[1] = 0;
    *puVar3 = &lbl_82196C88;
    puVar3[2] = param_2;
    puVar3[3] = param_3;
    puVar3[4] = param_2;
    puVar3[5] = param_3;
    puVar3[6] = param_2;
    puVar3[7] = param_3;
  }
  puVar1 = (undefined4 *)param_1[2];
  if (puVar3 != puVar1) {
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    param_1[2] = puVar3;
  }
  puVar3 = (undefined4 *)fn_8265C9E0(0x20);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3[1] = 0;
    *puVar3 = &lbl_82196C88;
    puVar3[2] = param_4;
    puVar3[3] = param_5;
    puVar3[4] = param_6;
    puVar3[5] = param_7;
    puVar3[6] = param_8;
    puVar3[7] = in_stack_00000054;
  }
  puVar1 = (undefined4 *)param_1[3];
  if (puVar3 != puVar1) {
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    param_1[3] = puVar3;
  }
  uVar2 = fn_8265C9E0(0x10);
  if ((uVar2 & 0xffffffff) != 0) {
    puVar4 = (undefined4 *)fn_828E5F40(uVar2,in_stack_0000005c,in_stack_00000064);
  }
  puVar3 = (undefined4 *)param_1[4];
  if (puVar4 != puVar3) {
    if (puVar3 != (undefined4 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
    param_1[4] = puVar4;
  }
  return param_1;
}

