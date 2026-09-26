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
extern int fn_82CE5410();
extern int fn_82CED628();
extern int fn_82D94918();
extern int fn_82D949A8();
extern int fn_82D94A38();
extern int fn_82D94AC8();
extern int fn_82D94B58();
extern unsigned int uStack0000001c;


void fn_82DF3418(int param_1,undefined4 param_2)

{
  int iVar3;
  undefined8 uVar1;
  longlong lVar2;
  int iVar4;
  undefined4 uStack0000001c;
  
  uStack0000001c = param_2;
  iVar3 = fn_82CE5410();
  iVar3 = (**(code **)(**(int **)(iVar3 + 0x10) + 4))(*(int **)(iVar3 + 0x10),0x44);
  *(undefined2 *)(iVar3 + 4) = 0x44;
  uVar1 = fn_82D94B58();
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    iVar4 = 0;
    do {
      fn_82D94918(uVar1,*(undefined4 *)(iVar4 + *(int *)(param_1 + 8)));
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar3 < *(int *)(param_1 + 0xc));
  }
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x24)) {
    iVar4 = 0;
    do {
      fn_82D94AC8(uVar1,*(undefined4 *)(iVar4 + *(int *)(param_1 + 0x20)));
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar3 < *(int *)(param_1 + 0x24));
  }
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x18)) {
    iVar4 = 0;
    do {
      fn_82D94A38(uVar1,*(undefined4 *)(iVar4 + *(int *)(param_1 + 0x14)));
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar3 < *(int *)(param_1 + 0x18));
  }
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x30)) {
    iVar4 = 0;
    do {
      fn_82D949A8(uVar1,*(undefined4 *)(*(int *)(param_1 + 0x2c) + iVar4));
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar3 < *(int *)(param_1 + 0x30));
  }
  iVar3 = fn_82CE5410();
  iVar3 = (**(code **)(**(int **)(iVar3 + 0x10) + 4))(*(int **)(iVar3 + 0x10),0x44);
  *(undefined2 *)(iVar3 + 4) = 0x44;
  lVar2 = fn_82D94B58();
                    /* WARNING: Subroutine does not return */
  fn_82CED628(lVar2 + 0x38,0xffffffff821458e0);
}

