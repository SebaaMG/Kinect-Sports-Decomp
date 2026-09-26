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


longlong fn_82E43898(int param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  int *apiStack_20 [2];
  
  lVar2 = 0;
  apiStack_20[0] = (int *)0x0;
  if (*(int **)(param_1 + 0x80) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x80) + 8))();
    *(undefined4 *)(param_1 + 0x80) = 0;
  }
  if (*(int **)(param_1 + 0x1c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x1c) + 8))();
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  if (*(int **)(param_1 + 0x7c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x7c) + 8))();
    *(undefined4 *)(param_1 + 0x7c) = 0;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x18);
  if ((puVar1 != (undefined4 *)0x0) &&
     (lVar2 = (**(code **)*puVar1)(puVar1,0xffffffff82154c18,apiStack_20), -1 < lVar2)) {
    lVar2 = (**(code **)(*apiStack_20[0] + 0x20))(apiStack_20[0],0xffffffff8202e618);
  }
  if (apiStack_20[0] != (int *)0x0) {
    (**(code **)(*apiStack_20[0] + 8))();
  }
  return lVar2;
}

