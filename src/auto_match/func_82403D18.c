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
extern unsigned int *auStack_50;
extern unsigned int *auStack_70;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_a8;
extern int fn_82230040();
extern int fn_822B1A68();
extern int fn_82329730();
extern int fn_82359C18();
extern int fn_8265C9E0();
extern int fn_8288B760();
extern int fn_828AAF70();
extern int fn_82F68CC0();
extern unsigned int lbl_821B2CEC;
extern unsigned int lbl_821B7C64;
extern unsigned int lbl_83265A28;
extern unsigned int stack0x00000000;


void fn_82403D18(int *param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  char cVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [16];
  undefined4 auStack_90 [8];
  undefined1 auStack_70 [32];
  undefined1 auStack_50 [80];
  
  iVar3 = param_1[0x20];
  lVar1 = (**(code **)(*param_1 + 8))();
  fn_822B1A68(*(undefined4 *)(iVar3 + 0x7c),lVar1 + 0xf0);
  puVar2 = (undefined4 *)fn_8265C9E0(0x28);
  if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    fn_82230040(&stack0x00000000 + -0xa0);
  }
  *puVar2 = &lbl_821B2CEC;
  fn_82F68CC0(puVar2 + 2,&stack0x00000000 + -0x50,0x20);
  lVar1 = (**(code **)(*param_1 + 0x4c))(param_1);
  fn_82329730(lVar1 + 0x30,&stack0x00000000 + -0x70);
  fn_82359C18(&stack0x00000000 + -0x70);
  puVar2 = (undefined4 *)fn_8265C9E0(0x20);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &lbl_821B7C64;
    fn_82F68CC0(puVar2 + 2,&stack0x00000000 + -0x50,0x18);
    iVar3 = (**(code **)(*param_1 + 0x4c))(param_1);
    puVar7 = (undefined1 *)(iVar3 + 0xf8);
    if (puVar7 != &stack0x00000000 + -0x90) {
      fn_82359C18(puVar7);
      if (puVar2 == (undefined4 *)0x0) {
        *(undefined4 *)(iVar3 + 0x108) = 0;
      }
      else if (puVar2 == (undefined4 *)(&stack0x00000000 + -0x90)) {
        uVar4 = (**(code **)*puVar2)(puVar2,puVar7);
        *(undefined4 *)(iVar3 + 0x108) = uVar4;
      }
      else {
        *(undefined4 **)(iVar3 + 0x108) = puVar2;
      }
    }
    fn_82359C18(&stack0x00000000 + -0x90);
    cVar5 = fn_8288B760(param_1);
    if (cVar5 != '\0') {
      uVar6 = (longlong)lbl_83265A28 * 0x19660d + 0x3c6ef35f;
      lbl_83265A28 = (int)uVar6;
      lVar1 = (**(code **)(*param_1 + 8))(param_1);
      fn_828AAF70(lVar1 + 0x2e0,(-uVar6 & ~uVar6 & 0xffffffff) >> 0x1f != 0);
      uVar6 = (longlong)lbl_83265A28 * 0x19660d + 0x3c6ef35f;
      lbl_83265A28 = (int)uVar6;
      lVar1 = (**(code **)(*param_1 + 8))(param_1);
      fn_828AAF70(lVar1 + 0x334,(-uVar6 & ~uVar6 & 0xffffffff) >> 0x1f != 0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  fn_82230040(&stack0x00000000 + -0xa8);
}

