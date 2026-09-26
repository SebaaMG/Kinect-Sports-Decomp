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
extern int fn_8251FA58();
extern int fn_82522ED8();


void fn_825D1EC8(int param_1)

{
  undefined4 *puVar1;
  
  if (*(int **)(param_1 + 0x88) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x88) + 8))();
    puVar1 = *(undefined4 **)(param_1 + 0x88);
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
  }
  if (*(int *)(param_1 + 0x8c) != 0) {
    fn_8251FA58();
  }
  if (*(int *)(param_1 + 0x94) != 0) {
    fn_8251FA58();
  }
  if (*(int *)(param_1 + 0xfc) != 0) {
    fn_82522ED8();
  }
  return;
}

