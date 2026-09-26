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
extern int fn_822315A0();
extern int fn_822B6490();
extern int fn_822B7480();
extern int fn_822B8960();
extern int fn_822B97F8();
extern int fn_822CBDA0();
extern int fn_82507EA8();
extern int fn_82528948();
extern int fn_8252CC80();
extern int fn_825331A8();
extern int fn_8265CA20();
extern int fn_82672660();
extern int fn_827EF828();
extern int fn_827EFFE8();
extern int fn_8288B760();


void fn_822B5F90(undefined8 param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  int iVar6;
  longlong lVar5;
  
  fn_822B6490();
  (**(code **)(*param_2 + 0x18))(param_1,param_2);
  fn_822B7480(param_2);
  fn_822B8960(param_2[0x47]);
  if (param_2[5] != 0) {
    iVar1 = *(int *)(param_2[5] + 0x48);
    while( true ) {
      iVar6 = iVar1 + -0x40;
      if (iVar1 == 0) {
        iVar6 = 0;
      }
      if (iVar6 == 0) break;
      fn_82528948(iVar6);
      iVar1 = *(int *)(iVar6 + 0x44);
    }
  }
  if (param_2[0x1e] != 0) {
    if (param_2[5] != 0) {
      fn_822CBDA0();
    }
    puVar2 = (undefined4 *)param_2[0x1e];
    if (puVar2[0x1b] != 0) {
      if (puVar2 != (undefined4 *)0x0) {
        fn_82672660(puVar2[9],puVar2);
        fn_82672660(*puVar2,puVar2);
        if (puVar2[10] != 0) {
          fn_822315A0();
        }
        if (puVar2[1] != 0) {
          fn_822315A0();
        }
        fn_8265CA20(puVar2);
      }
      param_2[0x1e] = 0;
    }
  }
  iVar1 = param_2[0x1f];
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0x1c) != 0) {
      fn_827EF828(param_1);
      fn_827EFFE8(*(undefined4 *)(iVar1 + 0x1c));
    }
    fn_822B97F8(iVar1);
  }
  lVar5 = 0;
  piVar4 = param_2 + 0x49;
  do {
    if (piVar4[5] == 0) {
      fn_8252CC80(param_2[5],*piVar4 != 0,lVar5);
    }
    lVar5 = lVar5 + 1;
    piVar4 = piVar4 + 1;
  } while ((int)lVar5 < 2);
  if (param_2[0x5c] != 0) {
    fn_82507EA8(param_1);
  }
  iVar1 = *(int *)param_2[0x46];
  iVar6 = *(int *)(iVar1 + 0x8c0);
  if ((*(int *)(iVar6 + 0x94) != 0) && (*(int *)(iVar6 + 0x90) != 0)) {
    fn_825331A8(*(undefined4 *)((*(int *)(*(int *)(iVar1 + 0x4c) + 0x44) + 0x20) * 4 + iVar6),
                      iVar1 + 0xf0);
  }
  if (param_2[0x5a] == 0) {
    uVar3 = param_2[0x5b];
  }
  else {
    uVar3 = fn_8288B760();
    uVar3 = uVar3 & 0xff;
  }
  if (uVar3 != 0) {
    if ((int *)param_2[0x5a] != (int *)0x0) {
      (**(code **)(*(int *)param_2[0x5a] + 0x40))();
    }
  }
  return;
}

