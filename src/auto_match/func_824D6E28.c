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
extern unsigned int *auStack_20;
extern unsigned int *auStack_30;
extern unsigned int fStack_38;
extern unsigned int fStack_3c;
extern unsigned int fStack_40;
extern unsigned int fStack_48;
extern unsigned int fStack_4c;
extern unsigned int fStack_50;
extern int fn_822B6A58();
extern int fn_822CEEC8();
extern int fn_8253A918();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_831D4254;
extern unsigned int lbl_831D4258;
extern unsigned int lbl_831D425C;
extern unsigned int lbl_831D4260;
extern unsigned int stack0x00000020;
extern unsigned int uStack_34;
extern V16 vectorAddFloatingPoint();


void fn_824D6E28(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_r0;
  int iVar3;
  undefined1 in_vs32 [16];
  undefined1 in_vs44 [16];
  undefined1 in_vs45 [16];
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  undefined4 uStack_34;
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [16];
  
  fn_822B6A58(auStack_30,*(undefined4 *)(param_1 + 0x164),4);
  iVar3 = fn_822CEEC8(*(undefined4 *)(param_1 + 0x164));
  fStack_38 = lbl_831D425C;
  fStack_48 = lbl_831D4260;
  if (iVar3 != 0) {
    fStack_38 = lbl_831D4260;
    fStack_48 = lbl_831D425C;
  }
  fStack_38 = -fStack_38;
  fStack_50 = lbl_831D4258 * lbl_8218E8E8;
  fStack_4c = lbl_831D4254 * lbl_8218E8E8;
  puVar1 = (undefined4 *)((uint)(auStack_30 + in_r0) & 0xfffffff0);
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];
  fStack_40 = -fStack_50;
  fStack_3c = -fStack_4c;
  uStack_34 = 0;
  puVar2 = (undefined4 *)((int)&fStack_50 + in_r0 & 0xfffffff0);
  uVar7 = *puVar2;
  uVar8 = puVar2[1];
  uVar9 = puVar2[2];
  uVar10 = puVar2[3];
  vectorAddFloatingPoint(in_vs32,in_vs45);
  vectorAddFloatingPoint(in_vs32,in_vs44);
  puVar2 = (undefined4 *)((uint)(auStack_20 + in_r0) & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar4;
  puVar2[2] = uVar5;
  puVar2[3] = uVar6;
  puVar1 = (undefined4 *)((uint)(auStack_30 + in_r0) & 0xfffffff0);
  *puVar1 = uVar7;
  puVar1[1] = uVar8;
  puVar1[2] = uVar9;
  puVar1[3] = uVar10;
  fn_8253A918(&stack0x00000020,auStack_20,auStack_30);
  return;
}

