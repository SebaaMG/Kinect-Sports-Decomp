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
extern unsigned int *auStack_70;
extern int fn_8253B8E8();
extern int fn_8253BAB8();
extern int fn_8253BC88();


void fn_8280D310(int param_1,char param_2)

{
  undefined4 *puVar1;
  int in_r0;
  int iVar2;
  undefined4 in_register_00010000;
  undefined4 in_ACC;
  undefined4 in_register_00010008;
  undefined4 in_vr0;
  undefined4 in_register_000100b0;
  undefined4 in_register_000100b4;
  undefined4 in_register_000100b8;
  undefined4 in_vr11;
  undefined4 in_register_000100c0;
  undefined4 in_register_000100c4;
  undefined4 in_register_000100c8;
  undefined4 in_vr12;
  undefined4 in_register_000100d0;
  undefined4 in_register_000100d4;
  undefined4 in_register_000100d8;
  undefined4 in_vr13;
  undefined1 auStack_70 [112];
  
  if (param_2 == 'X') {
LAB_8280d378:
    iVar2 = fn_8253BC88(auStack_70);
  }
  else if (param_2 == 'Y') {
LAB_8280d36c:
    iVar2 = fn_8253BAB8(auStack_70);
  }
  else {
    if (param_2 != 'Z') {
      if (param_2 == 'x') goto LAB_8280d378;
      if (param_2 == 'y') goto LAB_8280d36c;
      if (param_2 != 'z') goto LAB_8280d390;
    }
    iVar2 = fn_8253B8E8(auStack_70);
  }
  puVar1 = (undefined4 *)(in_r0 + iVar2 & 0xfffffff0);
  in_register_00010000 = *puVar1;
  in_ACC = puVar1[1];
  in_register_00010008 = puVar1[2];
  in_vr0 = puVar1[3];
  puVar1 = (undefined4 *)(iVar2 + 0x10U & 0xfffffff0);
  in_register_000100d0 = *puVar1;
  in_register_000100d4 = puVar1[1];
  in_register_000100d8 = puVar1[2];
  in_vr13 = puVar1[3];
  puVar1 = (undefined4 *)(iVar2 + 0x20U & 0xfffffff0);
  in_register_000100c0 = *puVar1;
  in_register_000100c4 = puVar1[1];
  in_register_000100c8 = puVar1[2];
  in_vr12 = puVar1[3];
  puVar1 = (undefined4 *)(iVar2 + 0x30U & 0xfffffff0);
  in_register_000100b0 = *puVar1;
  in_register_000100b4 = puVar1[1];
  in_register_000100b8 = puVar1[2];
  in_vr11 = puVar1[3];
LAB_8280d390:
  puVar1 = (undefined4 *)(in_r0 + param_1 & 0xfffffff0);
  *puVar1 = in_register_00010000;
  puVar1[1] = in_ACC;
  puVar1[2] = in_register_00010008;
  puVar1[3] = in_vr0;
  puVar1 = (undefined4 *)(param_1 + 0x10U & 0xfffffff0);
  *puVar1 = in_register_000100d0;
  puVar1[1] = in_register_000100d4;
  puVar1[2] = in_register_000100d8;
  puVar1[3] = in_vr13;
  puVar1 = (undefined4 *)(param_1 + 0x20U & 0xfffffff0);
  *puVar1 = in_register_000100c0;
  puVar1[1] = in_register_000100c4;
  puVar1[2] = in_register_000100c8;
  puVar1[3] = in_vr12;
  puVar1 = (undefined4 *)(param_1 + 0x30U & 0xfffffff0);
  *puVar1 = in_register_000100b0;
  puVar1[1] = in_register_000100b4;
  puVar1[2] = in_register_000100b8;
  puVar1[3] = in_vr11;
  return;
}

