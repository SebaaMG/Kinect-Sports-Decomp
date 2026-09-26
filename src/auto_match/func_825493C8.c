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
extern unsigned int *auStack_a0;
extern unsigned int *auStack_f0;
extern unsigned int fStack_7c;
extern unsigned int fStack_8c;
extern unsigned int fStack_cc;
extern unsigned int fStack_dc;
extern int fn_82540438();
extern int fn_82547C80();
extern unsigned int lbl_821922D0;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int stack0x00000020;
extern unsigned int stack0x00000060;
extern unsigned int uStack00000020;
extern unsigned int uStack00000028;
extern unsigned int uStack00000030;
extern unsigned int uStack00000038;
extern unsigned int uStack00000040;
extern unsigned int uStack00000048;
extern unsigned int uStack_100;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_80;
extern unsigned int uStack_88;
extern unsigned int uStack_90;
extern unsigned int uStack_a4;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;
extern unsigned int uStack_b8;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;
extern unsigned int uStack_c4;
extern unsigned int uStack_c8;
extern unsigned int uStack_d0;
extern unsigned int uStack_d8;
extern unsigned int uStack_e0;
extern unsigned int uStack_f4;
extern unsigned int uStack_f8;
extern unsigned int uStack_fc;


void fn_825493C8(double param_1,int param_2,undefined4 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  int in_r0;
  int iVar8;
  byte bVar9;
  double dVar10;
  undefined4 in_register_000104b0;
  undefined4 in_register_000104b4;
  undefined4 in_register_000104b8;
  undefined4 in_vr75;
  undefined8 uStack00000020;
  undefined8 uStack00000028;
  undefined8 uStack00000030;
  undefined8 uStack00000038;
  undefined8 uStack00000040;
  undefined8 uStack00000048;
  uint in_stack_000000ac;
  uint in_stack_000000b4;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined1 auStack_f0 [16];
  undefined4 uStack_e0;
  float fStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d0;
  float fStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 auStack_a0 [16];
  undefined4 uStack_90;
  float fStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_80;
  float fStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  
  uVar7 = in_stack_000000ac;
  uVar1 = param_3[3];
  bVar9 = 0;
  uVar2 = *param_3;
  uVar3 = param_3[2];
  uStack00000020 = param_4;
  uStack00000028 = param_5;
  uStack00000030 = param_6;
  uStack00000038 = param_7;
  uStack00000040 = param_8;
  uStack00000048 = param_9;
  if (in_stack_000000ac != 0xffffffff) {
    iVar8 = param_2 + 0xd0;
    if (iVar8 != 0) {
      iVar6 = (in_stack_000000ac & 0xff) * 4;
      iVar4 = iVar6 >> 3;
      bVar9 = *(byte *)(iVar4 + iVar8 + 4) >> (iVar6 + iVar4 * -8 & 0x3fU) & 0xf;
      fn_82547C80(iVar8,in_stack_000000ac & 0xff,in_stack_000000b4 & 0xff);
    }
  }
  (**(code **)(**(int **)(param_2 + 0x1a8) + 0xc))(*(int **)(param_2 + 0x1a8),uVar1);
  dVar10 = (double)lbl_821CC160;
  (**(code **)(**(int **)(param_2 + 0x1a8) + 4))
            ((double)lbl_821922D0,(double)lbl_821CA460,dVar10,*(int **)(param_2 + 0x1a8),uVar1,
             &stack0x00000020,&stack0x00000060);
  puVar5 = (undefined4 *)((uint)(auStack_f0 + in_r0) & 0xfffffff0);
  *puVar5 = in_register_000104b0;
  puVar5[1] = in_register_000104b4;
  puVar5[2] = in_register_000104b8;
  puVar5[3] = in_vr75;
  puVar5 = (undefined4 *)((uint)(auStack_a0 + in_r0) & 0xfffffff0);
  *puVar5 = in_register_000104b0;
  puVar5[1] = in_register_000104b4;
  puVar5[2] = in_register_000104b8;
  puVar5[3] = in_vr75;
  fStack_cc = (float)dVar10;
  uStack_d0 = 0xffffffff;
  fStack_7c = (float)dVar10;
  uStack_80 = 0xffffffff;
  fStack_dc = (float)param_1;
  fStack_8c = (float)param_1;
  uStack_fc = 4;
  uStack_e0 = 1;
  uStack_d8 = 7;
  uStack_c8 = 0;
  uStack_c4 = 0;
  uStack_c0 = 0;
  uStack_bc = 0;
  uStack_b8 = 0xffffffff;
  uStack_ac = 8;
  uStack_90 = 1;
  uStack_88 = 7;
  uStack_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_68 = 0xffffffff;
  uStack_100 = uVar2;
  uStack_f8 = uVar3;
  uStack_f4 = uVar1;
  uStack_b0 = uVar2;
  uStack_a8 = uVar3;
  uStack_a4 = uVar1;
  fn_82540438(0,uVar2,4);
  (**(code **)(**(int **)(param_2 + 0x1ac) + 4))
            (*(int **)(param_2 + 0x1ac),&uStack_100,&stack0x00000060,1,0xffffffff82196290,0,
             0xffffffffffffffff);
  fn_82540438(0,uVar2,8);
  (**(code **)(**(int **)(param_2 + 0x1ac) + 4))
            (*(int **)(param_2 + 0x1ac),&uStack_b0,&stack0x00000060,1,0xffffffff82196290,0,
             0xffffffffffffffff);
  if ((uVar7 != 0xffffffff) && (param_2 + 0xd0 != 0)) {
    fn_82547C80(param_2 + 0xd0,uVar7 & 0xff,bVar9);
  }
  return;
}

