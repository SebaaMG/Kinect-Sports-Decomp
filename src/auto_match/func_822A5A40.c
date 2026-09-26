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
extern int fn_822709D0();
extern int fn_82286E18();
extern int fn_822A7B50();


void fn_822A5A40(int param_1)

{
  undefined4 *puVar1;
  
  if (*(int *)(param_1 + 0x504) != 0) {
    fn_822709D0(*(undefined4 *)(param_1 + 0x550));
    *(undefined4 *)(param_1 + 0x504) = 0;
  }
  (**(code **)(**(int **)(param_1 + 0x550) + 0x54))
            (*(int **)(param_1 + 0x550),*(undefined4 *)(param_1 + 0x5bc));
  puVar1 = *(undefined4 **)(param_1 + 0x5c0);
  *(undefined4 *)(param_1 + 0x5bc) = 0;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = *(undefined4 **)(param_1 + 0x5d0);
  *(undefined4 *)(param_1 + 0x5c0) = 0;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined4 *)(param_1 + 0x5d0) = 0;
  (**(code **)(**(int **)(param_1 + 0x550) + 8))();
  puVar1 = *(undefined4 **)(param_1 + 0x550);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined4 *)(param_1 + 0x550) = 0;
  if (*(int *)(param_1 + 0x5c4) != 0) {
    fn_82286E18(*(int *)(param_1 + 0x5c4),1);
  }
  *(undefined4 *)(param_1 + 0x5c4) = 0;
  fn_822A7B50(param_1);
  return;
}

