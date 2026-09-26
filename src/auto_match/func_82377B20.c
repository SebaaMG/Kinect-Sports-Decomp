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
extern unsigned int *auStack_60;
extern unsigned int fStack_5c;
extern int fn_822315A0();
extern int fn_823730C0();
extern int fn_82379A60();
extern int fn_8237AFE8();
extern int fn_82F63108();
extern unsigned int iStack_6c;
extern unsigned int iStack_70;
extern unsigned int lbl_821CC160;


void fn_82377B20(double param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  float fVar2;
  int in_r0;
  undefined8 uVar3;
  double dVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 in_register_00010020;
  undefined4 in_register_00010024;
  undefined4 in_register_00010028;
  undefined4 in_vr2;
  undefined4 in_register_00010030;
  undefined4 in_register_00010034;
  undefined4 in_register_00010038;
  undefined4 in_vr3;
  int iStack_70;
  int iStack_6c;
  undefined1 auStack_60 [4];
  float fStack_5c;
  
  fn_823730C0(&iStack_70,param_2);
  fn_8237AFE8(iStack_70);
  uVar3 = 0;
  puVar1 = (undefined4 *)(in_r0 + iStack_70 + 0x30 & 0xfffffff0);
  *puVar1 = in_register_00010020;
  puVar1[1] = in_register_00010024;
  puVar1[2] = in_register_00010028;
  puVar1[3] = in_vr2;
  *(float *)(iStack_70 + 0x118) = (float)param_1;
  *(float *)(iStack_70 + 0x11c) = (float)param_1;
  puVar1 = (undefined4 *)(iStack_70 + 400U & 0xfffffff0);
  *puVar1 = in_register_00010030;
  puVar1[1] = in_register_00010034;
  puVar1[2] = in_register_00010038;
  puVar1[3] = in_vr3;
  *(undefined4 *)(iStack_70 + 0x2130) = 0;
  *(undefined4 *)(iStack_70 + 0x2134) = 0;
  puVar1 = (undefined4 *)(in_r0 + iStack_70 + 0x30 & 0xfffffff0);
  uVar5 = *puVar1;
  uVar6 = puVar1[1];
  uVar7 = puVar1[2];
  uVar8 = puVar1[3];
  *(undefined4 *)(iStack_70 + 0x2138) = 0;
  puVar1 = (undefined4 *)((uint)(auStack_60 + in_r0) & 0xfffffff0);
  *puVar1 = uVar5;
  puVar1[1] = uVar6;
  puVar1[2] = uVar7;
  puVar1[3] = uVar8;
  *(undefined4 *)(iStack_70 + 0x2148) = 0x18;
  *(undefined4 *)(iStack_70 + 0xdc) = 0;
  dVar4 = (double)fn_82379A60(iStack_70);
  fVar2 = lbl_821CC160;
  *(float *)(iStack_70 + 0x120) = (float)(-(double)fStack_5c / dVar4);
  if (fVar2 <= *(float *)(iStack_70 + 0x38)) {
    uVar3 = 1;
  }
  if (*(int *)(iStack_70 + 0x2160) == 0) {
                    /* WARNING: Subroutine does not return */
    fn_82F63108();
  }
  (**(code **)(**(int **)(iStack_70 + 0x2160) + 4))(*(int **)(iStack_70 + 0x2160),uVar3,0);
  *(undefined4 *)(iStack_70 + 0xcc) = 1;
  if (iStack_6c != 0) {
    fn_822315A0();
  }
  return;
}

