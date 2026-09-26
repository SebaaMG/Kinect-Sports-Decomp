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
extern int fn_82FA5060();
extern int fn_8302D408();
extern int fn_8303E5A8();
extern int fn_8303E600();
extern unsigned int lbl_831BC768;


undefined8 fn_8302E148(int param_1,ulonglong param_2)

{
  int iVar2;
  int *piVar3;
  undefined8 uVar1;
  
  if ((uint)param_2 == (uint)(*(byte *)(param_1 + 0x11f) >> 5)) {
    return 1;
  }
  *(byte *)(param_1 + 0x11f) =
       (byte)((param_2 & 0xffffffff) << 5) | *(byte *)(param_1 + 0x11f) & 0x1f;
  if (*(int **)(param_1 + 0x88) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x88) + 8))();
  }
  if ((*(byte *)(param_1 + 0x11f) & 0xe0) == 0x20) {
    iVar2 = fn_82FA5060(lbl_831BC768,0x10);
    if (iVar2 != 0) {
      piVar3 = (int *)fn_8303E5A8();
      goto LAB_8302e1e0;
    }
  }
  else {
    iVar2 = fn_82FA5060(lbl_831BC768,0x10);
    if (iVar2 != 0) {
      piVar3 = (int *)fn_8303E600();
      goto LAB_8302e1e0;
    }
  }
  piVar3 = (int *)0x0;
LAB_8302e1e0:
  *(int **)(param_1 + 0x88) = piVar3;
  if (piVar3 == (int *)0x0) {
    uVar1 = 2;
  }
  else {
    uVar1 = (**(code **)(*piVar3 + 4))();
    if ((int)uVar1 != 1) {
      (**(code **)(**(int **)(param_1 + 0x88) + 8))();
      *(undefined4 *)(param_1 + 0x88) = 0;
    }
  }
  fn_8302D408(param_1);
  return uVar1;
}

