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
extern int fn_82386340();
extern int fn_82532BC0();
extern int fn_825A1E80();
extern int fn_8265CA20();


void fn_8252CF08(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x18c) != 0) {
    (**(code **)(**(int **)(param_1 + 0x8c0) + 0x54))();
    *(undefined4 *)(param_1 + 0x18c) = 0;
  }
  puVar1 = *(undefined4 **)(param_1 + 400);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    *(undefined4 *)(param_1 + 400) = 0;
  }
  if (((*(int *)(param_1 + 0x4c) != 0) && (*(int *)(param_1 + 0x8c0) != 0)) &&
     (*(int *)((*(int *)(*(int *)(param_1 + 0x4c) + 0x44) + 0x20) * 4 + *(int *)(param_1 + 0x8c0))
      != 0)) {
    fn_82532BC0();
  }
  iVar2 = *(int *)(param_1 + 0x1a8);
  if (iVar2 != 0) {
    fn_825A1E80(iVar2 + 0x9c);
    fn_82386340(iVar2 + 0x3c);
    iVar4 = *(int *)(iVar2 + 0x2c);
    if (iVar4 != 0) {
      iVar3 = *(int *)(iVar2 + 0x30);
      for (; iVar4 != iVar3; iVar4 = iVar4 + 8) {
        if (*(int *)(iVar4 + 4) != 0) {
          fn_822315A0();
        }
      }
      fn_8265CA20(*(undefined4 *)(iVar2 + 0x2c));
    }
    *(undefined4 *)(iVar2 + 0x2c) = 0;
    *(undefined4 *)(iVar2 + 0x30) = 0;
    *(undefined4 *)(iVar2 + 0x34) = 0;
    fn_825A1E80(iVar2);
    fn_8265CA20(iVar2);
    *(undefined4 *)(param_1 + 0x1a8) = 0;
  }
  return;
}

