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
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_e0;
extern unsigned int *auStack_e8;
extern int fn_82250BD0();
extern unsigned int uStack_ab;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;
extern unsigned int uStack_b4;
extern unsigned int uStack_b8;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;
extern unsigned int uStack_c4;
extern unsigned int uStack_c8;
extern unsigned int uStack_cc;
extern unsigned int uStack_d0;
extern unsigned int uStack_ec;
extern unsigned int uStack_ef;
extern unsigned int uStack_f0;


void fn_82252678(int param_1,undefined8 param_2,int param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  int in_r0;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  undefined1 uStack_f0;
  undefined1 uStack_ef;
  undefined4 uStack_ec;
  undefined4 auStack_e8 [2];
  undefined1 auStack_e0 [16];
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined1 uStack_ac;
  undefined1 uStack_ab;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [128];
  
  uStack_f0 = 0;
  puVar2 = (undefined4 *)((uint)(auStack_a0 + in_r0) & 0xfffffff0);
  *puVar2 = in_register_000104d0;
  puVar2[1] = in_register_000104d4;
  puVar2[2] = in_register_000104d8;
  puVar2[3] = in_vr77;
  puVar2 = (undefined4 *)((uint)(auStack_e0 + in_r0) & 0xfffffff0);
  *puVar2 = in_register_000104d0;
  puVar2[1] = in_register_000104d4;
  puVar2[2] = in_register_000104d8;
  puVar2[3] = in_vr77;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  uStack_b8 = 0xffffffff;
  uStack_b4 = 0xffffffff;
  uStack_b0 = 0;
  uStack_ac = 0;
  uStack_ab = 1;
  uStack_ef = 0;
  uStack_d0 = 0;
  uStack_cc = 0xffffffff;
  uStack_c8 = 0xffffffff;
  uStack_c4 = 0;
  fn_82250BD0(auStack_80);
  (**(code **)(**(int **)(param_1 + 0x68) + 0x14))(*(int **)(param_1 + 0x68),param_2,auStack_90);
  (**(code **)(**(int **)(param_1 + 0x70) + 0x14))(*(int **)(param_1 + 0x70),param_2,&uStack_c0);
  (**(code **)(**(int **)(param_1 + 0x78) + 0x14))(*(int **)(param_1 + 0x78),param_2,&uStack_ec);
  (**(code **)(**(int **)(param_1 + 0x80) + 0x14))(*(int **)(param_1 + 0x80),param_2,&uStack_f0);
  (**(code **)(**(int **)(param_1 + 0x88) + 0x14))(*(int **)(param_1 + 0x88),param_2,auStack_e0);
  (**(code **)(**(int **)(param_1 + 0x90) + 0x14))(*(int **)(param_1 + 0x90),param_2,auStack_80);
  (**(code **)(**(int **)(param_1 + 0x98) + 0x14))(*(int **)(param_1 + 0x98),param_2,auStack_e8);
  piVar1 = *(int **)(param_3 + 0x10);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))
              (piVar1,&uStack_c0,uStack_ec,&uStack_f0,auStack_e0,auStack_80,auStack_e8[0]);
  }
  return;
}

