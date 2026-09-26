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
extern int fn_82A1EFC0();


void fn_82266230(double param_1,double param_2,char *param_3,int param_4,undefined4 param_5,
                  undefined4 param_6,undefined4 *param_7,undefined4 *param_8)

{
  char cVar1;
  undefined4 *puVar2;
  char *pcVar4;
  ulonglong uVar3;
  int iVar5;
  undefined4 in_register_00010010;
  undefined4 in_register_00010014;
  undefined4 in_register_00010018;
  undefined4 in_vr1;
  undefined4 in_register_00010020;
  undefined4 in_register_00010024;
  undefined4 in_register_00010028;
  undefined4 in_vr2;
  undefined4 in_register_00010030;
  undefined4 in_register_00010034;
  undefined4 in_register_00010038;
  undefined4 in_vr3;
  uint *in_stack_00000064;
  uint *in_stack_0000006c;
  int *in_stack_00000074;
  undefined4 in_stack_000000a4;
  
  *(float *)(param_3 + 0x60) = (float)param_1;
  *(float *)(param_3 + 100) = (float)param_2;
  *(undefined4 *)(param_3 + 0x40) = param_5;
  *(undefined4 *)(param_3 + 0x44) = param_6;
  *(undefined4 *)(param_3 + 0xa0) = in_stack_000000a4;
  puVar2 = (undefined4 *)((uint)(param_3 + 0x50) & 0xfffffff0);
  *puVar2 = in_register_00010010;
  puVar2[1] = in_register_00010014;
  puVar2[2] = in_register_00010018;
  puVar2[3] = in_vr1;
  puVar2 = (undefined4 *)((uint)(param_3 + 0x80) & 0xfffffff0);
  *puVar2 = in_register_00010020;
  puVar2[1] = in_register_00010024;
  puVar2[2] = in_register_00010028;
  puVar2[3] = in_vr2;
  puVar2 = (undefined4 *)((uint)(param_3 + 0x90) & 0xfffffff0);
  *puVar2 = in_register_00010030;
  puVar2[1] = in_register_00010034;
  puVar2[2] = in_register_00010038;
  puVar2[3] = in_vr3;
  *(undefined4 *)(param_3 + 0x48) = *param_7;
  *(undefined4 *)(param_3 + 0x4c) = *param_8;
  pcVar4 = param_3;
  do {
    if (param_3 + 0x40 <= pcVar4) break;
    cVar1 = pcVar4[param_4 - (int)param_3];
    *pcVar4 = cVar1;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  if (pcVar4 == param_3 + 0x40) {
    pcVar4[-1] = '\0';
  }
  if (in_stack_00000064 == (uint *)0x0) {
LAB_822662f0:
    iVar5 = 0;
  }
  else {
    uVar3 = (ulonglong)*in_stack_00000064;
    if ((uVar3 == (uVar3 - 1) + (ulonglong)(uVar3 == 0)) || (in_stack_0000006c == (uint *)0x0))
    goto LAB_822662f0;
    uVar3 = (ulonglong)*in_stack_0000006c;
    iVar5 = 1;
    if (uVar3 == (uVar3 - 1) + (ulonglong)(uVar3 == 0)) goto LAB_822662f0;
  }
  *(int *)(param_3 + 0x68) = iVar5;
  if (iVar5 == 0) {
    param_3[0x6c] = '\0';
    param_3[0x6d] = '\0';
    param_3[0x6e] = '\0';
    param_3[0x6f] = '\0';
    param_3[0x70] = '\0';
    param_3[0x71] = '\0';
    param_3[0x72] = '\0';
    param_3[0x73] = '\0';
  }
  else {
    *(uint *)(param_3 + 0x6c) = *in_stack_00000064;
    *(uint *)(param_3 + 0x70) = *in_stack_0000006c;
  }
  if (in_stack_00000074 != (int *)0x0) {
    if (*in_stack_00000074 != 0) {
      *(int *)(param_3 + 0x74) = *in_stack_00000074;
      goto LAB_82266344;
    }
  }
  param_3[0x74] = '\0';
  param_3[0x75] = '\0';
  param_3[0x76] = '\0';
  param_3[0x77] = '\0';
LAB_82266344:
  fn_82A1EFC0(param_3 + 0xa4,0,0x24);
  return;
}

