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
extern int fn_82590DB8();
extern unsigned int stack0x00000020;
extern unsigned int stack0x00000030;
extern unsigned int stack0x00000040;
extern unsigned int stack0x00000050;
extern unsigned int uStack00000020;
extern unsigned int uStack00000028;
extern unsigned int uStack00000030;
extern unsigned int uStack00000038;
extern unsigned int uStack00000040;
extern unsigned int uStack00000048;
extern unsigned int uStack00000050;


undefined8
fn_82533428(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_r0;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined8 uStack00000020;
  undefined8 uStack00000028;
  undefined8 uStack00000030;
  undefined8 uStack00000038;
  undefined8 uStack00000040;
  undefined8 uStack00000048;
  undefined8 uStack00000050;
  undefined4 in_stack_00000064;
  int in_stack_0000006c;
  
  puVar1 = (undefined4 *)((uint)((int)&stack0x00000040 + in_r0) & 0xfffffff0);
  uVar12 = *puVar1;
  uVar13 = puVar1[1];
  uVar14 = puVar1[2];
  uVar15 = puVar1[3];
  puVar1 = (undefined4 *)((uint)((int)&stack0x00000030 + in_r0) & 0xfffffff0);
  uVar16 = *puVar1;
  uVar17 = puVar1[1];
  uVar18 = puVar1[2];
  uVar19 = puVar1[3];
  puVar1 = (undefined4 *)((uint)((int)&stack0x00000020 + in_r0) & 0xfffffff0);
  uVar3 = *puVar1;
  uVar4 = puVar1[1];
  uVar6 = puVar1[2];
  uVar7 = puVar1[3];
  puVar1 = (undefined4 *)((uint)((int)&stack0x00000050 + in_r0) & 0xfffffff0);
  uVar8 = *puVar1;
  uVar9 = puVar1[1];
  uVar10 = puVar1[2];
  uVar11 = puVar1[3];
  uVar5 = *(undefined4 *)(param_1 + 0x1b0);
  *(undefined1 *)(param_1 + 0xe3) = 1;
  puVar1 = (undefined4 *)(param_1 + 0x80U & 0xfffffff0);
  *puVar1 = uVar12;
  puVar1[1] = uVar13;
  puVar1[2] = uVar14;
  puVar1[3] = uVar15;
  puVar1 = (undefined4 *)(in_r0 + param_1 + 0x60 & 0xfffffff0);
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  puVar1[2] = uVar6;
  puVar1[3] = uVar7;
  puVar1 = (undefined4 *)(param_1 + 0x70U & 0xfffffff0);
  *puVar1 = uVar16;
  puVar1[1] = uVar17;
  puVar1[2] = uVar18;
  puVar1[3] = uVar19;
  puVar1 = (undefined4 *)(param_1 + 0x90U & 0xfffffff0);
  *puVar1 = uVar8;
  puVar1[1] = uVar9;
  puVar1[2] = uVar10;
  puVar1[3] = uVar11;
  uStack00000020 = param_2;
  uStack00000028 = param_3;
  uStack00000030 = param_4;
  uStack00000038 = param_5;
  uStack00000040 = param_6;
  uStack00000048 = param_7;
  uStack00000050 = param_8;
  fn_82590DB8(uVar5,in_stack_00000064,1);
  if (in_stack_0000006c != 0) {
    puVar1 = (undefined4 *)(param_1 + 0xa0U & 0xfffffff0);
    uVar5 = puVar1[1];
    uVar3 = puVar1[2];
    uVar4 = puVar1[3];
    puVar2 = (undefined4 *)(in_r0 + in_stack_0000006c & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar5;
    puVar2[2] = uVar3;
    puVar2[3] = uVar4;
  }
  return 1;
}

