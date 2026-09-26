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
extern unsigned int *auStack_48;
extern unsigned int *auStack_68;
extern unsigned int *auStack_80;
extern unsigned int *auStack_98;
extern unsigned int *auStack_cc;
extern unsigned int *auStack_f8;
extern int fn_82F68CC0();
extern unsigned int lbl_821CC160;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_84;
extern unsigned int uStack_88;
extern unsigned int uStack_8a;
extern unsigned int uStack_8b;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;
extern unsigned int uStack_a0;
extern unsigned int uStack_a8;
extern unsigned int uStack_b0;
extern unsigned int uStack_b8;
extern unsigned int uStack_c0;
extern unsigned int uStack_d0;


void fn_822520E8(int param_1,undefined8 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int in_r0;
  undefined4 *puVar3;
  longlong lVar4;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  undefined1 auStack_f8 [28];
  undefined4 *puStack_dc;
  undefined4 uStack_d0;
  undefined4 auStack_cc [3];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  undefined4 uStack_90;
  undefined1 uStack_8c;
  undefined1 uStack_8b;
  undefined1 uStack_8a;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined1 auStack_80 [16];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 auStack_68 [8];
  undefined4 auStack_48 [18];
  
  puVar3 = (undefined4 *)((int)&uStack_c0 + in_r0 & 0xfffffff0);
  *puVar3 = in_register_000104d0;
  puVar3[1] = in_register_000104d4;
  puVar3[2] = in_register_000104d8;
  puVar3[3] = in_vr77;
  puVar3 = (undefined4 *)((uint)(auStack_98 + in_r0 + -8) & 0xfffffff0);
  *puVar3 = in_register_000104d0;
  puVar3[1] = in_register_000104d4;
  puVar3[2] = in_register_000104d8;
  puVar3[3] = in_vr77;
  lVar4 = 7;
  puVar3 = (undefined4 *)((int)&uStack_b0 + in_r0 & 0xfffffff0);
  *puVar3 = in_register_000104d0;
  puVar3[1] = in_register_000104d4;
  puVar3[2] = in_register_000104d8;
  puVar3[3] = in_vr77;
  puVar3 = auStack_68;
  uStack_90 = lbl_821CC160;
  uStack_8c = 0;
  uStack_8b = 0;
  uStack_8a = 0;
  uStack_88 = 0;
  uStack_84 = 3;
  uStack_70 = 0xffffffff;
  uStack_6c = 0xffffffff;
  auStack_68[0] = 0;
  do {
    puVar3 = puVar3 + 1;
    *puVar3 = 0xffffffff;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  puVar3 = auStack_48;
  auStack_48[0] = 0;
  lVar4 = 7;
  do {
    puVar3 = puVar3 + 1;
    *puVar3 = 0xffffffff;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  (**(code **)(**(int **)(param_1 + 0x68) + 0x14))(*(int **)(param_1 + 0x68),param_2,&uStack_d0);
  (**(code **)(**(int **)(param_1 + 0x70) + 0x14))(*(int **)(param_1 + 0x70),param_2,auStack_cc);
  (**(code **)(**(int **)(param_1 + 0x78) + 0x14))(*(int **)(param_1 + 0x78),param_2,auStack_80);
  (**(code **)(**(int **)(param_1 + 0x80) + 0x14))(*(int **)(param_1 + 0x80),param_2,&uStack_c0);
  (**(code **)(**(int **)(param_1 + 0x88) + 0x14))(*(int **)(param_1 + 0x88),param_2,&uStack_70);
  piVar1 = *(int **)(param_3 + 0x10);
  if (piVar1 != (int *)0x0) {
    puStack_dc = &uStack_70;
    iVar2 = *piVar1;
    fn_82F68CC0(auStack_f8,auStack_98,0x18);
    (**(code **)(iVar2 + 4))
              (piVar1,uStack_d0,auStack_cc[0],uStack_c0,uStack_b8,uStack_b0,uStack_a8,uStack_a0);
  }
  return;
}

