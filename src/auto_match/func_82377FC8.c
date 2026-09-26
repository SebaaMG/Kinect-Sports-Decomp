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
extern unsigned int *auStack_70;
extern unsigned int fStack_6c;
extern int fn_822315A0();
extern int fn_82365BD8();
extern int fn_823730C0();
extern int fn_82379498();
extern int fn_82379A60();
extern int fn_8237AFE8();
extern unsigned int iStack_7c;
extern unsigned int iStack_80;


void fn_82377FC8(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  char param_5)

{
  undefined4 *puVar1;
  int in_r0;
  uint *puVar2;
  double dVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 in_register_00010020;
  undefined4 in_register_00010024;
  undefined4 in_register_00010028;
  undefined4 in_vr2;
  undefined4 in_register_00010030;
  undefined4 in_register_00010034;
  undefined4 in_register_00010038;
  undefined4 in_vr3;
  int iStack_80;
  int iStack_7c;
  undefined1 auStack_70 [4];
  float fStack_6c;
  
  fn_823730C0(&iStack_80,param_2);
  fn_8237AFE8(iStack_80);
  puVar1 = (undefined4 *)(in_r0 + iStack_80 + 0x30 & 0xfffffff0);
  *puVar1 = in_register_00010020;
  puVar1[1] = in_register_00010024;
  puVar1[2] = in_register_00010028;
  puVar1[3] = in_vr2;
  *(float *)(iStack_80 + 0x118) = (float)param_1;
  *(float *)(iStack_80 + 0x11c) = (float)param_1;
  puVar1 = (undefined4 *)(iStack_80 + 400U & 0xfffffff0);
  *puVar1 = in_register_00010030;
  puVar1[1] = in_register_00010034;
  puVar1[2] = in_register_00010038;
  puVar1[3] = in_vr3;
  *(undefined4 *)(iStack_80 + 0x2130) = 0;
  *(undefined4 *)(iStack_80 + 0x2134) = 0;
  puVar1 = (undefined4 *)(in_r0 + iStack_80 + 0x30 & 0xfffffff0);
  uVar4 = *puVar1;
  uVar5 = puVar1[1];
  uVar6 = puVar1[2];
  uVar7 = puVar1[3];
  *(undefined4 *)(iStack_80 + 0x2138) = 0;
  puVar1 = (undefined4 *)((uint)(auStack_70 + in_r0) & 0xfffffff0);
  *puVar1 = uVar4;
  puVar1[1] = uVar5;
  puVar1[2] = uVar6;
  puVar1[3] = uVar7;
  *(undefined4 *)(iStack_80 + 0x2148) = 0x18;
  *(undefined4 *)(iStack_80 + 0xdc) = 0;
  dVar3 = (double)fn_82379A60(iStack_80);
  *(float *)(iStack_80 + 0x120) = (float)(-(double)fStack_6c / dVar3);
  puVar2 = (uint *)fn_82365BD8(auStack_70,&iStack_80);
  if (*(int *)(*puVar2 + 0xa4) == 0) {
    *(undefined4 *)(*puVar2 + 0xa4) = 1;
    fn_82379498((ulonglong)*puVar2,(ulonglong)*puVar2 + 0xec);
  }
  if (puVar2[1] != 0) {
    fn_822315A0();
  }
  if (param_5 != '\0') {
    *(undefined4 *)(iStack_80 + 0xc0) = 1;
  }
  if (iStack_7c != 0) {
    fn_822315A0();
  }
  return;
}

