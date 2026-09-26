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
extern unsigned int *auStack_b0;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_d0;
extern int fn_82579288();
extern int fn_825795A8();
extern int fn_82A1DD38();
extern unsigned int uStack_8d;


undefined8 fn_8242E320(int param_1,int param_2,undefined1 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_r0;
  int *piVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 in_register_00010010;
  undefined4 in_register_00010014;
  undefined4 in_register_00010018;
  undefined4 in_vr1;
  undefined4 in_register_00010020;
  undefined4 in_register_00010024;
  undefined4 in_register_00010028;
  undefined4 in_vr2;
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [35];
  undefined1 uStack_8d;
  
  iVar4 = *(int *)(*(int *)(param_1 + 0x174) + 0x9c);
  puVar1 = (undefined4 *)((uint)(auStack_c0 + in_r0) & 0xfffffff0);
  *puVar1 = in_register_00010020;
  puVar1[1] = in_register_00010024;
  puVar1[2] = in_register_00010028;
  puVar1[3] = in_vr2;
  puVar1 = (undefined4 *)((uint)(auStack_d0 + in_r0) & 0xfffffff0);
  *puVar1 = in_register_00010010;
  puVar1[1] = in_register_00010014;
  puVar1[2] = in_register_00010018;
  puVar1[3] = in_vr1;
  piVar3 = (int *)fn_82579288(*(undefined4 *)(iVar4 + 0x6d0));
  uVar5 = 0;
  iVar4 = fn_825795A8(piVar3,auStack_d0,auStack_c0,0xffffffffffffffff);
  if (iVar4 == 1) {
    fn_82A1DD38(auStack_b0,*(undefined4 *)(piVar3[4] + 4),0x80);
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = uStack_8d;
    }
    if (param_2 != 0) {
      puVar1 = (undefined4 *)((uint)(auStack_b0 + in_r0) & 0xfffffff0);
      uVar6 = puVar1[1];
      uVar7 = puVar1[2];
      uVar8 = puVar1[3];
      puVar2 = (undefined4 *)(in_r0 + param_2 & 0xfffffff0);
      *puVar2 = *puVar1;
      puVar2[1] = uVar6;
      puVar2[2] = uVar7;
      puVar2[3] = uVar8;
    }
    uVar5 = 1;
  }
  *(undefined2 *)(piVar3 + 0x67) = 0;
  piVar3[100] = piVar3[99];
  *(undefined1 *)(piVar3[0x62] + *piVar3 + 0x754) = 0;
  return uVar5;
}

