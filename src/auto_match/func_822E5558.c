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
extern int fn_822B7290();
extern int fn_822CBBB0();
extern int fn_82358FD8();
extern int fn_824CCD80();
extern int fn_8265C9E0();
extern int fn_8288B760();


void fn_822E5558(int param_1)

{
  uint uVar2;
  int iVar3;
  ulonglong uVar1;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_70 [112];
  
  if (*(int *)(param_1 + 0x78) != 0) goto LAB_822e5630;
  fn_82358FD8(*(undefined4 *)(param_1 + 0x1bc),auStack_70,0x20,0xffffffff821ad4c0);
  iVar3 = *(int *)(param_1 + 0x24);
  if (iVar3 == 0) {
LAB_822e55c8:
    iVar3 = 1;
  }
  else {
    if (*(int *)(param_1 + 0x168) == 0) {
      uVar2 = *(uint *)(param_1 + 0x16c);
    }
    else {
      uVar2 = fn_8288B760();
      uVar2 = uVar2 & 0xff;
    }
    if (uVar2 == 0) goto LAB_822e55c8;
    iVar3 = fn_824CCD80(iVar3);
  }
  if (iVar3 == 1) {
    iVar5 = param_1 + 0x1c4;
LAB_822e55ec:
    iVar6 = param_1 + 0x1c8;
  }
  else {
    iVar5 = param_1 + 0x1c8;
    iVar6 = param_1 + 0x1c4;
    if (iVar3 != 0) goto LAB_822e55ec;
  }
  iVar3 = *(int *)(param_1 + 0x24);
  uVar1 = fn_8265C9E0(0x70);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = fn_822CBBB0(uVar1,iVar6,iVar5,-(iVar3 != 0) & 2,auStack_70);
  }
  *(undefined4 *)(param_1 + 0x78) = uVar4;
LAB_822e5630:
  fn_822B7290(param_1);
  return;
}

