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
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_68;
extern unsigned int *auStack_70;
extern unsigned int *auStack_78;
extern unsigned int *auStack_80;
extern int fn_82230040();
extern int fn_82272D90();
extern int fn_82273600();
extern int fn_822B3F70();
extern int fn_822B4040();
extern int fn_822B41D0();
extern int fn_822B4378();
extern int fn_822B4448();
extern int fn_8265C9E0();
extern unsigned int lbl_821B2E2C;
extern unsigned int stack0x00000000;
extern unsigned int uStack_5c;


void fn_822B3D30(int param_1,int param_2)

{
  int iVar1;
  int in_r0;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 in_register_00010010;
  undefined4 in_register_00010014;
  undefined4 in_register_00010018;
  undefined4 in_vr1;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [4];
  undefined4 uStack_5c;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [40];
  
  puVar3 = *(undefined4 **)(param_1 + 4);
  puVar2 = (undefined4 *)(*(undefined4 **)(param_1 + 4))[1];
  while (*(char *)((int)puVar2 + 0x51) == '\0') {
    if ("" < (char *)puVar2[4]) {
      puVar3 = puVar2;
      puVar2 = (undefined4 *)*puVar2;
    }
    else {
      puVar2 = (undefined4 *)puVar2[2];
    }
  }
  if ((puVar3 == *(undefined4 **)(param_1 + 4)) || (&lbl_821B2E2C < (undefined *)puVar3[4])) {
    iVar1 = -0x78;
  }
  else {
    iVar1 = -0x80;
  }
  puVar3 = *(undefined4 **)(&stack0x00000000 + iVar1);
  if (puVar3 == *(undefined4 **)(param_1 + 4)) {
    fn_822B3F70(&stack0x00000000 + -0x60);
    if (param_2 != 0) {
      puVar3 = (undefined4 *)fn_8265C9E0(0x14);
      if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        fn_82230040(&stack0x00000000 + -0x80);
      }
      *puVar3 = uStack_5c;
      puVar3[1] = uStack_5c;
      *(undefined1 *)(puVar3 + 4) = 0;
      *(undefined1 *)((int)puVar3 + 0x11) = 0;
      puVar3[2] = uStack_5c;
      if (puVar3 + 3 != (int *)0x0) {
        puVar3[3] = param_2;
      }
      fn_82273600(&stack0x00000000 + -0x68,&stack0x00000000 + -0x60);
    }
    puVar3 = (undefined4 *)((uint)(auStack_40 + in_r0) & 0xfffffff0);
    *puVar3 = in_register_00010010;
    puVar3[1] = in_register_00010014;
    puVar3[2] = in_register_00010018;
    puVar3[3] = in_vr1;
    puVar4 = (undefined1 *)fn_822B41D0(param_1,&stack0x00000000 + -0x70);
    if (puVar4 != &stack0x00000000 + -0x60) {
      fn_822B4378(&stack0x00000000 + -0x70,puVar4,**(undefined4 **)(puVar4 + 4));
      fn_822B4448(puVar4,&stack0x00000000 + -0x60);
    }
    puVar5 = puVar4 + 0x10;
    if (puVar5 != &stack0x00000000 + -0x50) {
      fn_82272D90(&stack0x00000000 + -0x70,puVar5,**(undefined4 **)(puVar4 + 0x14));
      fn_822B4448(puVar5,&stack0x00000000 + -0x50);
    }
    puVar3 = (undefined4 *)((uint)(auStack_40 + in_r0) & 0xfffffff0);
    uVar6 = puVar3[1];
    uVar7 = puVar3[2];
    uVar8 = puVar3[3];
    puVar2 = (undefined4 *)((uint)(puVar4 + 0x20) & 0xfffffff0);
    *puVar2 = *puVar3;
    puVar2[1] = uVar6;
    puVar2[2] = uVar7;
    puVar2[3] = uVar8;
    fn_822B4040(&stack0x00000000 + -0x60);
  }
  else if (param_2 != 0) {
    puVar2 = (undefined4 *)fn_8265C9E0(0x14);
    if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      fn_82230040(&stack0x00000000 + -0x78);
    }
    *puVar2 = puVar3[9];
    puVar2[1] = puVar3[9];
    puVar2[2] = puVar3[9];
    *(undefined1 *)(puVar2 + 4) = 0;
    *(undefined1 *)((int)puVar2 + 0x11) = 0;
    if (puVar2 + 3 != (int *)0x0) {
      puVar2[3] = param_2;
    }
    fn_82273600(&stack0x00000000 + -0x70,puVar3 + 8);
  }
  return;
}

