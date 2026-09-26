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
extern int fn_82C0BF10();
extern unsigned int lbl_82002AE0;


undefined8 fn_82C04158(int param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if ((*(int **)(param_1 + 0x2c) == (int *)0x0) ||
     (uVar2 = (**(code **)(**(int **)(param_1 + 0x2c) + 0x40))(), -1 < (int)uVar2)) {
    if (*(int **)(param_1 + 0x30) != (int *)0x0) {
      uVar2 = (**(code **)(**(int **)(param_1 + 0x30) + 0x40))();
    }
    if (-1 < (int)uVar2) {
      if (*(int **)(param_1 + 0x34) != (int *)0x0) {
        uVar2 = (**(code **)(**(int **)(param_1 + 0x34) + 0x40))();
      }
      if (-1 < (int)uVar2) {
        fn_82C0BF10(param_1 + 0x44);
        fn_82C0BF10(param_1 + 0x8c);
        fn_82C0BF10(param_1 + 0xd4);
        *(undefined8 *)(param_1 + 0x120) = 0;
        *(undefined8 *)(param_1 + 0x130) = 0;
        *(undefined8 *)(param_1 + 0x128) = 0;
        *(undefined4 *)(param_1 + 0x13c) = 0;
        *(undefined4 *)(param_1 + 0x140) = 0;
        uVar1 = lbl_82002AE0;
        *(undefined4 *)(param_1 + 0x144) = 0;
        *(undefined4 *)(param_1 + 0x154) = uVar1;
        *(undefined4 *)(param_1 + 0x148) = 0;
      }
    }
  }
  return uVar2;
}

