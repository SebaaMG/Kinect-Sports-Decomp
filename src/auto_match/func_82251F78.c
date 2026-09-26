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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern unsigned int *auStack_b8;
extern unsigned int *auStack_c0;
extern int fn_82250BD0();
extern unsigned int uStack_94;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;
extern unsigned int uStack_a8;
extern unsigned int uStack_b0;
extern unsigned int uStack_b4;
extern unsigned int uStack_bc;


void fn_82251F78(int param_1,undefined8 param_2,int param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  int in_r0;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  undefined2 auStack_c0 [2];
  undefined4 uStack_bc;
  undefined1 auStack_b8 [4];
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [128];
  
  auStack_c0[0] = 0;
  puVar2 = (undefined4 *)((int)&uStack_b0 + in_r0 & 0xfffffff0);
  *puVar2 = in_register_000104d0;
  puVar2[1] = in_register_000104d4;
  puVar2[2] = in_register_000104d8;
  puVar2[3] = in_vr77;
  uStack_a0 = 0;
  uStack_9c = 0xffffffff;
  uStack_98 = 0xffffffff;
  uStack_94 = 0;
  fn_82250BD0(auStack_80);
  (**(code **)(**(int **)(param_1 + 0x68) + 0x14))(*(int **)(param_1 + 0x68),param_2,&uStack_bc);
  (**(code **)(**(int **)(param_1 + 0x70) + 0x14))(*(int **)(param_1 + 0x70),param_2,&uStack_b4);
  (**(code **)(**(int **)(param_1 + 0x78) + 0x14))(*(int **)(param_1 + 0x78),param_2,auStack_90);
  (**(code **)(**(int **)(param_1 + 0x80) + 0x14))(*(int **)(param_1 + 0x80),param_2,&uStack_b0);
  (**(code **)(**(int **)(param_1 + 0x88) + 0x14))(*(int **)(param_1 + 0x88),param_2,auStack_c0);
  (**(code **)(**(int **)(param_1 + 0x90) + 0x14))(*(int **)(param_1 + 0x90),param_2,auStack_b8);
  (**(code **)(**(int **)(param_1 + 0x98) + 0x14))(*(int **)(param_1 + 0x98),param_2,auStack_80);
  piVar1 = *(int **)(param_3 + 0x10);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))
              (piVar1,uStack_bc,uStack_b4,uStack_b0,uStack_a8,CONCAT44(uStack_a0,uStack_9c),
               CONCAT44(uStack_98,uStack_94),auStack_c0[0]);
  }
  return;
}

