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
extern unsigned int *auStack_1020;
extern unsigned int *auStack_1820;
extern unsigned int *auStack_820;
extern int fn_8229EC50();
extern int fn_8229ECE8();
extern int fn_8229EE18();
extern int fn_82358FD8();
extern int fn_82414950();
extern int fn_82528EE0();
extern unsigned int lbl_821939D8;
extern unsigned int lbl_821939DC;
extern unsigned int lbl_821939E0;
extern unsigned int lbl_821939E4;
extern unsigned int lbl_821939F0;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_824935B0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  undefined1 auStack_1820 [2048];
  undefined1 auStack_1020 [2048];
  undefined1 auStack_820 [2080];
  
  iVar1 = *(int *)(param_1 + 0x40);
  iVar2 = *(int *)(iVar1 + 0x194);
  *(undefined4 *)(iVar2 + 0x200) = 5;
  *(undefined4 *)(iVar2 + 0x208) = 0;
  *(undefined4 *)(iVar2 + 0x2a4) = 1;
  fn_82414950(*(undefined4 *)(iVar1 + 0x2b50),0,0x1c);
  fn_82358FD8(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x40) + 0xd4) + 0x1c),auStack_1020,
                    0x400,lbl_821939F0);
  iVar1 = *(int *)(param_1 + 0x40);
  uVar3 = *(uint *)(iVar1 + 0x2b48);
  if (uVar3 == 0) {
    if (*(int *)(iVar1 + 0x2b4c) == 0) {
      fn_8229EC50(*(undefined4 *)(param_2 + 0x5c),auStack_1020);
    }
    else {
      uVar5 = *(undefined4 *)(*(int *)(iVar1 + 0xd4) + 0x1c);
      if (*(int *)(iVar1 + 0x2b4c) == 1) {
        fn_82358FD8(uVar5,auStack_1820,0x400,lbl_821939E0);
        puVar6 = auStack_1820;
      }
      else {
        fn_82358FD8(uVar5,auStack_1820,0x400,lbl_821939E4);
        fn_82528EE0(auStack_820,0x400,auStack_1820,*(undefined4 *)(iVar1 + 0x2b4c));
        puVar6 = auStack_820;
      }
      fn_8229EE18(*(undefined4 *)(param_2 + 0x5c),auStack_1020,puVar6);
    }
  }
  else {
    puVar4 = lbl_821939DC;
    if ((uVar3 == 1) || (puVar4 = lbl_821939D8, uVar3 < 3)) {
      fn_82358FD8(*(undefined4 *)(*(int *)(iVar1 + 0xd4) + 0x1c),auStack_1820,0x400,puVar4);
      fn_8229ECE8(*(undefined4 *)(param_2 + 0x5c),auStack_1020,auStack_1820);
    }
  }
  return;
}

