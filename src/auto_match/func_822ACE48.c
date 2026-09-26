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
extern unsigned int *auStack_a0c;
extern unsigned int *auStack_a18;
extern unsigned int *auStack_a1c;
extern unsigned int *auStack_a20;
extern unsigned int *auStack_a28;
extern unsigned int *auStack_a2c;
extern unsigned int *auStack_a38;
extern unsigned int *auStack_a40;
extern int fn_8225C590();
extern int fn_8251F720();
extern int fn_82520158();
extern int fn_82A1EFC0();
extern int fn_82F6A548();
extern unsigned int lbl_831CD2FC;
extern unsigned int lbl_83276540;
extern unsigned int uStack_9e8;


void fn_822ACE48(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_stack_0000005c;
  undefined1 auStack_a40 [8];
  undefined1 auStack_a38 [12];
  undefined1 auStack_a2c [4];
  undefined1 auStack_a28 [8];
  undefined1 auStack_a20 [4];
  undefined1 auStack_a1c [4];
  undefined1 auStack_a18 [12];
  undefined1 auStack_a0c [36];
  undefined4 uStack_9e8;
  
  puVar1 = (undefined4 *)fn_82F6A548();
  lbl_83276540 = in_stack_0000005c;
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  lbl_831CD2FC = 1;
  puVar1[4] = in_stack_0000005c;
  uStack_9e8 = 0;
  fn_82520158(0xffffffff821977d4,auStack_a40,0);
  fn_82520158(0xffffffff821977e4,auStack_a0c,0);
  fn_82520158(0xffffffff821977f8,auStack_a18,0);
  fn_82520158(0xffffffff8219780c,auStack_a1c,0);
  fn_82520158(0xffffffff82197820,auStack_a28,0);
  fn_82520158(0xffffffff82197830,auStack_a20,0);
  fn_82520158(0xffffffff82197844,auStack_a2c,0);
  fn_82520158(0xffffffff82197858,auStack_a38,0);
  uVar2 = fn_8251F720(auStack_a40,0);
  puVar1[5] = uVar2;
  uVar2 = fn_8251F720(auStack_a0c,0);
  puVar1[6] = uVar2;
  uVar2 = fn_8251F720(auStack_a18,0);
  puVar1[7] = uVar2;
  uVar2 = fn_8251F720(auStack_a1c,0);
  puVar1[8] = uVar2;
  uVar2 = fn_8251F720(auStack_a28,0);
  puVar1[9] = uVar2;
  uVar2 = fn_8251F720(auStack_a20,0);
  puVar1[10] = uVar2;
  uVar2 = fn_8251F720(auStack_a2c,0);
  puVar1[0xb] = uVar2;
  uVar2 = fn_8251F720(auStack_a38,0);
  puVar1[0xc] = uVar2;
  iVar3 = fn_8225C590();
  *(undefined4 *)(iVar3 + 0x30) = 0;
  puVar1[0xd] = 0;
                    /* WARNING: Subroutine does not return */
  fn_82A1EFC0(puVar1 + 0xe,0,0x8c);
}

