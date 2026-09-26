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
extern unsigned int *auStack_3c;
extern int fn_8225F160();
extern int fn_822883D0();
extern int fn_82289670();
extern int fn_8228ABB8();
extern int fn_82484998();
extern int fn_82486958();
extern int fn_82F68CC0();
extern unsigned int uStack_40;


void fn_82289EC0(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uStack_40;
  undefined4 auStack_3c [15];
  
  iVar3 = param_1[1];
  uVar2 = (**(code **)(**(int **)(*param_1 + 0x8c0) + 100))();
  iVar1 = param_1[2];
  fn_82289670(iVar1,*(undefined4 *)(iVar1 + 0x6a0));
  *(undefined4 *)(*(int *)(iVar1 + 0x6a0) * 0x40 + iVar1 + 0x6a8) = 2;
  *(int *)(*(int *)(iVar1 + 0x6a0) * 0x40 + iVar1 + 0x6c4) = iVar3;
  if ((*(int *)(*(int *)(iVar1 + 0x11f0) + 0x18b8) == 1) && (*(int *)(iVar1 + 0x6a0) == 2)) {
    *(undefined4 *)(iVar1 + 0x768) = 4;
  }
  uStack_40 = *(undefined4 *)(*param_1 + 0x8c4);
  auStack_3c[0] = *(undefined4 *)(*param_1 + 0x8c8);
  fn_8228ABB8(iVar1,*(undefined4 *)(iVar1 + 0x6a0),uVar2,&uStack_40,auStack_3c);
  fn_822883D0(iVar1,*(undefined4 *)(iVar1 + 0x6a0),*param_1);
  fn_82484998(*(undefined4 *)(iVar1 + 0x11f0),iVar3);
  if (param_1[3] != 0) {
    if (((*(int *)(*(int *)(iVar1 + 0x11f0) + 0x18b8) == 1) && (*(int *)(iVar1 + 0x6a0) == 2)) &&
       (iVar3 = fn_82486958(), iVar3 == 3)) {
      iVar3 = param_1[3];
      iVar4 = fn_8225F160();
      fn_82F68CC0(iVar4 + 0x154,iVar3,0x24);
      *(undefined4 *)(iVar4 + 0x178) = 1;
    }
    iVar3 = param_1[3];
    iVar4 = *(int *)(iVar1 + 0x6a0);
    iVar5 = fn_8225F160();
    iVar5 = iVar4 * 0x28 + iVar5;
    fn_82F68CC0(iVar5 + 300,iVar3,0x24);
    *(undefined4 *)(iVar5 + 0x150) = 1;
  }
  *(undefined4 *)(iVar1 + 0x604) = 1;
  return;
}

