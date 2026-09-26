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
extern int fn_8265C990();
extern int fn_82A1E650();
extern int fn_82A1E658();
extern int fn_82A1E7D8();
extern int fn_82BD7080();
extern int fn_82BD9E68();
extern unsigned int uRam83223ecc;
extern unsigned int uRam83223ed0;


void fn_82BD5328(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  longlong lVar3;
  
  uRam83223ecc = 0;
  uRam83223ed0 = 0;
  if (param_1 != 0) {
    if ((*(int *)(param_1 + 0xe8) != 0) && (*(int *)(param_1 + 0xe8) != -1)) {
      fn_82A1E7D8(*(undefined4 *)(param_1 + 0x110));
      *(undefined4 *)(param_1 + 0x10c) = 3;
      fn_82A1E650(*(undefined4 *)(param_1 + 0xe8),0xffffffffffffffff);
      *(undefined4 *)(param_1 + 0x10c) = 0;
      fn_82A1E658(*(undefined4 *)(param_1 + 0xe8));
      *(undefined4 *)(param_1 + 0xe8) = 0xffffffff;
    }
    if ((*(int *)(param_1 + 0x110) != 0) && (*(int *)(param_1 + 0x110) != -1)) {
      fn_82A1E658();
      *(undefined4 *)(param_1 + 0x110) = 0xffffffff;
    }
    if ((*(int *)(param_1 + 0x118) != 0) && (*(int *)(param_1 + 0x118) != -1)) {
      fn_82A1E658();
      *(undefined4 *)(param_1 + 0x118) = 0xffffffff;
    }
    if (*(int *)(param_1 + 0x40) != 0) {
      *(undefined4 *)(param_1 + 0x44) = 0;
      do {
      } while (*(int *)(param_1 + 0x48) != 0);
    }
    puVar1 = (undefined4 *)(param_1 + 0x4c);
    lVar3 = 4;
    do {
      fn_82BD7080(puVar1[1]);
      lVar3 = lVar3 + -1;
      puVar1 = puVar1 + 1;
      *puVar1 = 0;
    } while (lVar3 != 0);
    uVar2 = 0;
    if (*(int *)(param_1 + 8) != 0) {
      puVar1 = (undefined4 *)(param_1 + 0x5c);
      do {
        fn_82BD9E68(puVar1[1]);
        uVar2 = uVar2 + 1;
        puVar1 = puVar1 + 1;
        *puVar1 = 0;
      } while (uVar2 < *(uint *)(param_1 + 8));
    }
    if (*(int **)(param_1 + 0x40) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x40) + 0x48))();
      *(undefined4 *)(param_1 + 0x40) = 0;
    }
    if (*(int **)(param_1 + 0x3c) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x3c) + 8))();
      *(undefined4 *)(param_1 + 0x3c) = 0;
    }
    fn_8265C990(param_1,0x618a800c);
  }
  return;
}

