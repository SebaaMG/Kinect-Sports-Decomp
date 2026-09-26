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
extern unsigned int *auStack_20;
extern int fn_8234C320();
extern int fn_823985A8();
extern int fn_8239C4D8();
extern int fn_823A5108();
extern int fn_823A5188();
extern int fn_823B3FE0();


void fn_823A59D8(int param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 auStack_20 [4];
  
  iVar2 = *(int *)(param_1 + 8);
  iVar1 = *(int *)(iVar2 + 8);
  if ((*(int *)(iVar1 + 0x58) == *(int *)(iVar1 + 0x54)) || (*(int *)(iVar1 + 0x58) == 0)) {
    if ((*(int *)(iVar1 + 0x1e4) == 0) || (*(int *)(*(int *)(iVar1 + 0x1e4) + 0x150) == 0)) {
      iVar2 = fn_823A5188();
      if (iVar2 == 0) {
        return;
      }
      fn_823985A8(*(undefined4 *)(*(int *)(param_1 + 8) + 8));
      iVar2 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 8) + 8) + 0x1e4) + 0xa8);
      if ((iVar2 != 0) && (*(int *)(iVar2 + 0x1d0) != 1)) {
        *(int *)(iVar2 + 0x1d0) = *(int *)(iVar2 + 0x1d0) + 1;
      }
      iVar2 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 8) + 8) + 0x1e4) + 0x1e4);
      if (iVar2 != 0) {
        auStack_20[0] = 0;
        fn_823B3FE0(iVar2,auStack_20);
      }
      iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 8) + 8) + 0x1f8);
      if (((iVar2 != 0) && (*(int *)(iVar2 + 0x24) != 0)) &&
         (*(int *)((uint)(*(int *)(iVar2 + 0x214) != 0) * 0x2c + *(int *)(iVar2 + 0x118) + 0x280) !=
          0)) {
        fn_8234C320(0);
      }
      (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 8) + 8) + 0x2e0) + 0x58))();
      fn_8239C4D8(*(undefined4 *)(*(int *)(param_1 + 8) + 8));
      iVar2 = *(int *)(param_1 + 8);
      uVar3 = 5;
    }
    else {
      uVar3 = 2;
    }
    fn_823A5108(iVar2,uVar3);
  }
  return;
}

