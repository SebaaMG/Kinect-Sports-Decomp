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
extern unsigned int *auStack_60;
extern unsigned int *auStack_68;
extern unsigned int *auStack_70;
extern int fn_822315A0();
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern int fn_828A2348();
extern int fn_828A60D8();
extern int fn_828A61C8();
extern int fn_828BAB20();
extern int fn_828BCA78();
extern int fn_828C2480();
extern int fn_828C35A0();
extern unsigned int iStack_5c;
extern unsigned int stack0x00000000;
extern unsigned int uStack_48;


void fn_828C36B0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 *puVar4;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auStack_70 [8];
  undefined4 auStack_68 [2];
  undefined1 auStack_60 [4];
  int iStack_5c;
  undefined1 auStack_50 [4];
  undefined4 *puStack_4c;
  undefined4 uStack_48;
  
  fn_828A2348(&stack0x00000000 + -0x50,&stack0x00000000 + -0x70,&stack0x00000000 + -0x70);
  puVar4 = (undefined1 *)fn_828C35A0(param_1 + 0xe8,param_3);
  if (puVar4 != &stack0x00000000 + -0x50) {
    fn_828A60D8();
    puVar5 = *(undefined4 **)(puVar4 + 4);
    *(undefined4 **)(puVar4 + 4) = puStack_4c;
    *(undefined4 *)(puVar4 + 8) = uStack_48;
    puStack_4c = puVar5;
  }
  fn_828A61C8(&stack0x00000000 + -0x68,&stack0x00000000 + -0x50,*puStack_4c);
  fn_8265CA20(puStack_4c);
  uVar2 = fn_8265C9E0(0x28);
  if ((uVar2 & 0xffffffff) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = fn_828C35A0(param_1 + 0xe8,param_3);
    uVar3 = fn_828C2480(uVar2,param_2,param_3,uVar3);
  }
  puVar5 = (undefined4 *)fn_828BAB20(&stack0x00000000 + -0x60,uVar3);
  puVar6 = (undefined4 *)fn_828BCA78(param_1 + 0xd8,param_3);
  uVar7 = 0;
  uVar8 = 0;
  if ((undefined4 *)(&stack0x00000000 + -0x68) != puVar5) {
    uVar8 = puVar5[1];
    puVar5[1] = 0;
    uVar7 = *puVar5;
    *puVar5 = 0;
  }
  iVar1 = puVar6[1];
  puVar6[1] = uVar8;
  *puVar6 = uVar7;
  if (iVar1 != 0) {
    fn_822315A0();
  }
  if (iStack_5c != 0) {
    fn_822315A0();
  }
  return;
}

