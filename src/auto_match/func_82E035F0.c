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
extern int fn_82CE4118();
extern int fn_82CE5410();
extern int fn_82CED5B8();
extern int fn_82E04A30();


void fn_82E035F0(int param_1)

{
  int *piVar1;
  int iVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  
  fn_82CED5B8(param_1 + 0x20);
  iVar2 = fn_82CE5410();
  uVar3 = (ulonglong)*(uint *)(param_1 + 0x18);
  piVar1 = *(int **)(iVar2 + 0x10);
  if (0 < (int)*(uint *)(param_1 + 0x18)) {
    puVar4 = (undefined4 *)(*(int *)(param_1 + 0x14) + -4);
    do {
      if (puVar4[1] != 0) {
        fn_82CE4118();
      }
      uVar3 = uVar3 - 1;
      puVar4 = puVar4 + 1;
      *puVar4 = 0;
    } while (uVar3 != 0);
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if ((*(uint *)(param_1 + 0x1c) & 0x80000000) == 0) {
    (**(code **)(*piVar1 + 0x10))
              (piVar1,*(undefined4 *)(param_1 + 0x14),*(uint *)(param_1 + 0x1c) & 0x3fffffff,4);
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0x80000000;
  fn_82E04A30(param_1);
  return;
}

