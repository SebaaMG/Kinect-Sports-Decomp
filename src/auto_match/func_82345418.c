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
extern int fn_82230110();
extern int fn_82230300();
extern int fn_82230360();
extern int fn_82260FA8();
extern int fn_8234C258();
extern int fn_8234C320();
extern int fn_8243D2D8();
extern int fn_825327A8();
extern int fn_82F512E8();
extern int fn_82F52348();


void fn_82345418(int param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  char *pcVar5;
  undefined8 uVar4;
  char *pcVar6;
  char cVar7;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [80];
  
  iVar1 = **(int **)(param_1 + 0xc);
  if ((*(int *)(*(int *)(iVar1 + 0x1a0) + 0x10) == 0) ||
     (bVar3 = true, *(int *)(*(int *)(iVar1 + 0x1a0) + 0x14) != 0)) {
    bVar3 = false;
  }
  if (*(int *)((!bVar3 + 0xe) * 0x2c + *(int *)(iVar1 + 0x118) + 0x18) != 1) {
    fn_8234C320(1);
  }
  fn_82230110(auStack_50,0xffffffff821b19ac);
  fn_8234C258((ulonglong)*(uint *)(iVar1 + 0x118) + 0x150,(uint)!bVar3,auStack_50);
  fn_82230300(auStack_50,1,0);
  if ((*(int *)(*(int *)(iVar1 + 0x1a0) + 0x10) == 0) ||
     (*(int *)(*(int *)(iVar1 + 0x1a0) + 0x14) != 0)) {
    pcVar6 = "untracked_javelin_righthand";
    pcVar5 = pcVar6;
  }
  else {
    pcVar6 = "untracked_javelin_lefthand";
    pcVar5 = pcVar6;
  }
  do {
    cVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar7 != '\0');
  fn_82230360((ulonglong)*(uint *)(iVar1 + 0x118) + 0x34,pcVar5,pcVar6 + (-1 - (int)pcVar5));
  iVar2 = *(int *)(iVar1 + 0x1a0);
  if ((*(int *)(iVar2 + 0x10) == 0) || (*(int *)(iVar2 + 0x14) != 0)) {
    uVar4 = 0xffffffff821b1a14;
  }
  else {
    uVar4 = 0xffffffff821b19f4;
  }
  fn_8243D2D8((ulonglong)*(uint *)(*(int *)(iVar2 + 0xc) + 0x174) + 8,uVar4,0,0);
  fn_825327A8(**(undefined4 **)(*(int *)(*(int *)(iVar1 + 0x1a0) + 0x10) + 4),
                    0xffffffff821b9a20);
  iVar2 = *(int *)(**(int **)(param_1 + 0xc) + 0x24);
  if (iVar2 != 0) {
    if ((*(int *)(*(int *)(iVar1 + 0x1a0) + 0x10) == 0) ||
       (cVar7 = '\x01', *(int *)(*(int *)(iVar1 + 0x1a0) + 0x14) != 0)) {
      cVar7 = '\0';
    }
    cVar7 = (-cVar7 & 5U) + 0xb;
    fn_82F512E8(auStack_60,*(undefined4 *)(iVar2 + 0x20),cVar7,2);
    fn_82F52348(*(undefined4 *)(iVar2 + 0x20),cVar7);
    iVar2 = *(int *)(iVar1 + 0x1a0);
    if ((*(int *)(iVar2 + 0x10) == 0) || (bVar3 = true, *(int *)(iVar2 + 0x14) != 0)) {
      bVar3 = false;
    }
    fn_82260FA8(*(undefined4 *)
                       (*(int *)(*(int *)(*(int *)(iVar2 + 0xc) + 0x174) + 0x5c) + 0x1ec),
                      *(undefined4 *)(iVar1 + 0x2c),!bVar3);
  }
  return;
}

