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
extern unsigned int lbl_82137484;


void fn_82D4D998(int param_1,int param_2,undefined4 *param_3)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int in_r0;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 in_register_000100d0;
  undefined4 in_register_000100d4;
  undefined4 in_register_000100d8;
  undefined4 in_vr13;
  
  if (param_3 == (undefined4 *)0x0) {
    param_3 = (undefined4 *)0x0;
  }
  else {
    uVar1 = *(undefined1 *)(param_1 + 0x30);
    uVar2 = *(undefined2 *)(param_2 * 0x10 + *(int *)(param_1 + 0x14) + 0xc);
    param_3[4] = *(undefined4 *)(param_1 + 0x2c);
    *(undefined2 *)((int)param_3 + 6) = 1;
    param_3[2] = 0;
    param_3[3] = 3;
    *param_3 = &lbl_82137484;
    *(undefined2 *)(param_3 + 5) = uVar2;
    *(undefined1 *)((int)param_3 + 0x16) = uVar1;
    puVar3 = (undefined4 *)((int)param_3 + in_r0 + 0x50 & 0xfffffff0);
    *puVar3 = in_register_000100d0;
    puVar3[1] = in_register_000100d4;
    puVar3[2] = in_register_000100d8;
    puVar3[3] = in_vr13;
    *(undefined1 *)((int)param_3 + 0x17) = 0;
  }
  param_2 = param_2 * 0x10;
  puVar3 = (undefined4 *)
           (*(int *)(param_2 + *(int *)(param_1 + 0x14)) * 0x10 + *(int *)(param_1 + 8) & 0xfffffff0
           );
  uVar5 = puVar3[1];
  uVar6 = puVar3[2];
  uVar7 = puVar3[3];
  puVar4 = (undefined4 *)((uint)(param_3 + 8) & 0xfffffff0);
  *puVar4 = *puVar3;
  puVar4[1] = uVar5;
  puVar4[2] = uVar6;
  puVar4[3] = uVar7;
  puVar3 = (undefined4 *)
           (*(int *)(param_2 + *(int *)(param_1 + 0x14) + 4) * 0x10 + *(int *)(param_1 + 8) &
           0xfffffff0);
  uVar5 = puVar3[1];
  uVar6 = puVar3[2];
  uVar7 = puVar3[3];
  puVar4 = (undefined4 *)((uint)(param_3 + 0xc) & 0xfffffff0);
  *puVar4 = *puVar3;
  puVar4[1] = uVar5;
  puVar4[2] = uVar6;
  puVar4[3] = uVar7;
  puVar3 = (undefined4 *)
           (*(int *)(param_2 + *(int *)(param_1 + 0x14) + 8) * 0x10 + *(int *)(param_1 + 8) &
           0xfffffff0);
  uVar5 = puVar3[1];
  uVar6 = puVar3[2];
  uVar7 = puVar3[3];
  puVar4 = (undefined4 *)((uint)(param_3 + 0x10) & 0xfffffff0);
  *puVar4 = *puVar3;
  puVar4[1] = uVar5;
  puVar4[2] = uVar6;
  puVar4[3] = uVar7;
  return;
}

