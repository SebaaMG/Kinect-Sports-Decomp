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
extern int fn_82A1E338();
extern int fn_82A1E3B8();
extern int fn_82E50CB8();
extern int fn_82E50F10();


undefined8 fn_82EE8420(int param_1,int param_2,int *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  fn_82E50CB8(param_1 + 0x24);
  if (*(int *)(param_1 + 0x10) != -1) {
    if (param_2 == 0) {
      fn_82A1E338(*(int *)(param_1 + 0x10),*(undefined4 *)(param_1 + 100));
      *(undefined4 *)(param_1 + 100) = 0xffffffff;
    }
    else {
      if (*(int *)(param_1 + 100) == -1) {
        uVar1 = fn_82A1E3B8();
        *(undefined4 *)(param_1 + 100) = uVar1;
      }
      if (*(int *)(param_1 + 0x68) != -1) {
        fn_82A1E338(*(undefined4 *)(param_1 + 0x10));
      }
    }
    if (param_3 == (int *)0x0) goto LAB_82ee84d0;
    if (*(int *)(param_1 + 0x60) == 0) {
      *(int **)(param_1 + 0x60) = param_3;
      (**(code **)(*param_3 + 4))(param_3);
      goto LAB_82ee84d0;
    }
  }
  uVar2 = 0xffffffff8000ffff;
LAB_82ee84d0:
  fn_82E50F10(param_1 + 0x24);
  return uVar2;
}

