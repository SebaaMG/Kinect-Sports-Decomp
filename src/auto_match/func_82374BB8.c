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
extern unsigned int *auStack_830;
extern int fn_82292B40();
extern int fn_8229D5C0();
extern int fn_822AA770();
extern int fn_82358FD8();
extern int fn_82372F88();
extern int fn_8288B760();
extern unsigned int lbl_831D1BBC;


void fn_82374BB8(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  double dVar5;
  undefined1 auStack_830 [2096];
  
  iVar2 = fn_82372F88();
  piVar1 = *(int **)(iVar2 * 4 + **(int **)(param_1 + 8));
  iVar2 = fn_822AA770(piVar1);
  if (iVar2 != 0) {
    if (*(int *)(iVar2 + 0x168) == 0) {
      uVar3 = *(uint *)(iVar2 + 0x16c);
    }
    else {
      uVar3 = fn_8288B760();
      uVar3 = uVar3 & 0xff;
    }
    if (uVar3 != 0) {
      uVar4 = 1;
      fn_82292B40();
      goto LAB_82374c1c;
    }
  }
  uVar4 = 0;
LAB_82374c1c:
  iVar2 = *(int *)(param_1 + 0xd4);
  uVar3 = *(uint *)(piVar1[4] * 4 + *piVar1);
  dVar5 = (double)lbl_831D1BBC;
  fn_82358FD8(*(undefined4 *)(iVar2 + 0x1c),auStack_830,0x400,0xffffffff821aa508);
  fn_8229D5C0(dVar5,*(undefined4 *)(iVar2 + 0x14),(ulonglong)uVar3 + 0xa8,auStack_830,
                    0xffffffff820e975c,uVar4);
  return;
}

