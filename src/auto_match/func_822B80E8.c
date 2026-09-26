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
extern unsigned int *auStack_100;
extern unsigned int *auStack_80;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_f0;
extern unsigned int *auStack_f8;
extern int fn_822315A0();
extern int fn_8234C000();
extern int fn_8234D5A0();
extern int fn_8250DA48();
extern int fn_82511558();
extern int fn_8255F0B8();
extern int fn_827F04B0();
extern int fn_827F0FB8();
extern int fn_827F1148();
extern int fn_827F2DD0();
extern int fn_827F46E8();
extern int fn_827F4818();
extern int fn_827F5AF8();
extern int fn_82811080();
extern int fn_82811400();
extern unsigned int iStack_f4;
extern unsigned int lbl_821B1C88;
extern unsigned int lbl_821CC160;
extern unsigned int stack0x00000000;


void fn_822B80E8(int param_1)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  undefined4 uVar4;
  undefined8 uVar3;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 auStack_100 [2];
  undefined1 auStack_f8 [4];
  int iStack_f4;
  undefined1 auStack_f0 [64];
  undefined1 auStack_b0 [48];
  undefined1 auStack_80 [128];
  
  uVar7 = *(undefined4 *)(param_1 + 4);
  uVar2 = fn_827F04B0(0x18c);
  if ((uVar2 & 0xffffffff) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = fn_827F1148(uVar2,uVar7,0);
  }
  *(undefined4 *)(param_1 + 8) = uVar4;
  fn_827F2DD0((double)lbl_821CC160,uVar7);
  uVar3 = fn_82811400(&stack0x00000000 + -0xb0,8);
  uVar2 = fn_82811080(0xffffffff8320a3e0,0x1b0,uVar3);
  if ((uVar2 & 0xffffffff) == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = fn_8255F0B8(uVar2,uVar7,0);
  }
  *(int *)(param_1 + 0xc) = iVar5;
  *(undefined4 *)(iVar5 + 0x174) = 0;
  *(int *)(iVar5 + 0x178) = param_1 + 0x14;
  *(code **)(iVar5 + 0x170) = fn_82511558;
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x1a8) = 1;
  fn_827F0FB8(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),1);
  fn_827F0FB8(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x2c),1);
  fn_827F4818(&stack0x00000000 + -0x80,0,*(undefined4 *)(param_1 + 0xc),
               *(undefined4 *)(param_1 + 0x2c));
  uVar2 = fn_827F46E8(0x118);
  if ((uVar2 & 0xffffffff) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = fn_8250DA48(uVar2,&stack0x00000000 + -0x80);
  }
  *(int *)(param_1 + 0x10) = (int)uVar3;
  fn_827F0FB8(*(undefined4 *)(param_1 + 8),uVar3,1);
  uVar7 = *(undefined4 *)(param_1 + 0x10);
  uVar4 = *(undefined4 *)(param_1 + 8);
  if (*(int *)(param_1 + 0x2e0) != 0) {
    fn_827F4818(&stack0x00000000 + -0xf0,2,uVar7);
    puVar6 = (undefined4 *)fn_827F46E8(0xf4);
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      fn_827F5AF8(puVar6,&stack0x00000000 + -0xf0);
      puVar6[0x3a] = 0;
      *puVar6 = &lbl_821B1C88;
      puVar6[0x3b] = 1;
      puVar6[0x3c] = 0x41600000;
    }
    puVar1 = *(undefined4 **)(param_1 + 0x2e4);
    if (puVar6 != puVar1) {
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      *(undefined4 **)(param_1 + 0x2e4) = puVar6;
    }
    fn_827F0FB8(uVar4,*(undefined4 *)(param_1 + 0x2e0),0);
    fn_827F0FB8(uVar4,*(undefined4 *)(param_1 + 0x2e4),1);
    uVar7 = *(undefined4 *)(param_1 + 0x2e4);
  }
  uVar3 = fn_8234C000(param_1 + 0x150,*(undefined4 *)(param_1 + 8),uVar7);
  uVar7 = *(undefined4 *)(param_1 + 8);
  fn_827F4818(&stack0x00000000 + -0xb0,1,uVar3,*(undefined4 *)(param_1 + 0x32c));
  puVar6 = (undefined4 *)fn_8234D5A0(&stack0x00000000 + -0xf8,&stack0x00000000 + -0xb0);
  uVar8 = 0;
  uVar4 = 0;
  if ((undefined4 *)(&stack0x00000000 + -0x100) != puVar6) {
    uVar4 = puVar6[1];
    puVar6[1] = 0;
    uVar8 = *puVar6;
    *puVar6 = 0;
  }
  iVar5 = *(int *)(param_1 + 0x338);
  *(undefined4 *)(param_1 + 0x338) = uVar4;
  *(undefined4 *)(param_1 + 0x334) = uVar8;
  if (iVar5 != 0) {
    fn_822315A0();
  }
  if (iStack_f4 != 0) {
    fn_822315A0();
  }
  fn_827F0FB8(uVar7,*(undefined4 *)(param_1 + 0x32c),0);
  fn_827F0FB8(uVar7,*(undefined4 *)(param_1 + 0x334),1);
  return;
}

