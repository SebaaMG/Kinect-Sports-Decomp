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
extern int fn_8251E400();
extern int fn_8251FA58();
extern int fn_82599308();
extern int fn_82CE4118();
extern int fn_82D81648();


void fn_8253CAD8(int param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1,1);
  }
  fn_8251E400(param_1 + 0xb4);
  fn_8251E400(param_1 + 0xa0);
  fn_8251E400(param_1 + 0x8c);
  fn_8251E400(param_1 + 0x78);
  fn_8251E400(param_1 + 100);
  fn_8251E400(param_1 + 0x50);
  fn_8251E400(param_1 + 200);
  fn_8251E400(param_1 + 0xdc);
  if (*(int *)(param_2 + 0x1f8) != 0) {
    puVar2 = (undefined4 *)fn_82599308();
    *puVar2 = 0;
    lVar3 = (ulonglong)*(uint *)(param_1 + 0x3c) + 8;
    if ((ulonglong)*(uint *)(param_1 + 0x3c) == 0) {
      lVar3 = 0;
    }
    fn_82D81648(*(undefined4 *)(param_2 + 0x1f8),lVar3);
    fn_82CE4118(*(undefined4 *)(param_1 + 0x3c));
    *(undefined4 *)(param_1 + 0x3c) = 0;
    fn_82CE4118(*(undefined4 *)(param_1 + 0x14));
    fn_82CE4118(*(undefined4 *)(param_1 + 0x14));
    puVar2 = *(undefined4 **)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x14) = 0;
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
    fn_82CE4118(*(undefined4 *)(param_2 + 0x1f8));
    *(undefined4 *)(param_1 + 8) = 0;
    fn_82CE4118(*(undefined4 *)(param_1 + 0x20));
    *(undefined4 *)(param_1 + 0x20) = 0;
    fn_82CE4118(*(undefined4 *)(param_1 + 0x1c));
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0xf0) = 0;
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    fn_8251FA58();
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    fn_8251FA58();
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    fn_8251FA58();
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    fn_8251FA58();
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    fn_8251FA58();
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    fn_8251FA58();
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  return;
}

