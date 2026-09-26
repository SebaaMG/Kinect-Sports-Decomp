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
extern unsigned int fStack_7c;
extern int fn_822315A0();
extern int fn_822ABA88();
extern int fn_823730C0();
extern int fn_82379A60();
extern int fn_8237AFE8();
extern int fn_82F63108();
extern unsigned int iStack_8c;
extern unsigned int iStack_90;
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821CC160;


void fn_82377D58(double param_1,double param_2,int param_3,undefined8 param_4,undefined8 param_5,
                  int param_6,undefined8 param_7)

{
  int *piVar1;
  float fVar2;
  int in_r0;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  double dVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 in_register_00010020;
  undefined4 in_register_00010024;
  undefined4 in_register_00010028;
  undefined4 in_vr2;
  undefined4 in_register_00010030;
  undefined4 in_register_00010034;
  undefined4 in_register_00010038;
  undefined4 in_vr3;
  int iStack_90;
  int iStack_8c;
  undefined1 auStack_80 [4];
  float fStack_7c;
  
  fn_823730C0(&iStack_90,param_3);
  puVar5 = (undefined4 *)(iStack_90 + 0x17a4);
  if ((double)lbl_8218E8E8 <= param_2) {
    puVar5 = (undefined4 *)(iStack_90 + 0x1848);
  }
  *(undefined4 *)(iStack_90 + 0x124) = *puVar5;
  fn_8237AFE8(iStack_90);
  iVar4 = iStack_90 + 0x30;
  puVar5 = (undefined4 *)(in_r0 + iVar4 & 0xfffffff0);
  *puVar5 = in_register_00010020;
  puVar5[1] = in_register_00010024;
  puVar5[2] = in_register_00010028;
  puVar5[3] = in_vr2;
  puVar5 = (undefined4 *)(iStack_90 + 400U & 0xfffffff0);
  *puVar5 = in_register_00010030;
  puVar5[1] = in_register_00010034;
  puVar5[2] = in_register_00010038;
  puVar5[3] = in_vr3;
  *(float *)(iStack_90 + 0x118) = (float)param_1;
  *(float *)(iStack_90 + 0x11c) = (float)param_1;
  piVar1 = *(int **)(**(int **)(param_3 + 8) + param_6 * 4);
  uVar3 = fn_822ABA88(*(undefined4 *)(piVar1[4] * 4 + *piVar1),param_7);
  *(undefined4 *)(iStack_90 + 0x2130) = uVar3;
  puVar5 = (undefined4 *)(in_r0 + iVar4 & 0xfffffff0);
  uVar3 = *puVar5;
  uVar7 = puVar5[1];
  uVar8 = puVar5[2];
  uVar9 = puVar5[3];
  *(undefined4 *)(iStack_90 + 0x2134) = 0;
  *(undefined4 *)(iStack_90 + 0x2138) = 0;
  *(undefined4 *)(iStack_90 + 0x2148) = 0x11;
  *(undefined4 *)(iStack_90 + 0xdc) = 0;
  puVar5 = (undefined4 *)((uint)(auStack_80 + in_r0) & 0xfffffff0);
  *puVar5 = uVar3;
  puVar5[1] = uVar7;
  puVar5[2] = uVar8;
  puVar5[3] = uVar9;
  dVar6 = (double)fn_82379A60(iStack_90);
  fVar2 = lbl_821CC160;
  *(float *)(iStack_90 + 0x120) = (float)(-(double)fStack_7c / dVar6);
  if (*(int *)(iStack_90 + 0x2160) == 0) {
                    /* WARNING: Subroutine does not return */
    fn_82F63108();
  }
  (**(code **)(**(int **)(iStack_90 + 0x2160) + 4))
            (*(int **)(iStack_90 + 0x2160),*(float *)(iStack_90 + 0x38) < fVar2,1);
  *(undefined4 *)(iStack_90 + 0xb4) = 0;
  *(undefined4 *)(iStack_90 + 0xd0) = 1;
  *(undefined4 *)(iStack_90 + 0xb8) = 0;
  if (iStack_8c != 0) {
    fn_822315A0();
  }
  return;
}

