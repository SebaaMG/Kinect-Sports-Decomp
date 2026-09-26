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
extern int fn_82A50210();
extern int fn_82A51C60();


longlong fn_82A4A910(int param_1,undefined8 param_2,ulonglong param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  int *piVar3;
  
  if ((param_3 & 0xffffffff) == 0) {
    param_3 = (ulonglong)*(uint *)(param_1 + 0x34) + 0x248;
  }
  piVar3 = (int *)(param_1 + 4);
  lVar2 = fn_82A51C60(piVar3,param_2,param_3);
  if (-1 < lVar2) {
    lVar2 = fn_82A50210(piVar3,0x1337f001);
    if (-1 < lVar2) {
      (**(code **)(*piVar3 + 0x5c))(piVar3,0);
      puVar1 = *(undefined4 **)(param_1 + 0x88);
      if (puVar1 != (undefined4 *)0x0) {
        lVar2 = (**(code **)*puVar1)(puVar1,0x1337f001);
      }
      if ((-1 < (int)lVar2) &&
         (piVar3 = *(int **)(*(int *)(param_1 + 0x34) + 0xb0),
         lVar2 = (**(code **)(*piVar3 + 0x48))(piVar3,0x1337f001), -1 < lVar2)) {
        *(int *)(*(int *)(param_1 + 0x34) + 0x18) = *(int *)(*(int *)(param_1 + 0x34) + 0x18) + 1;
        *(uint *)(*(int *)(param_1 + 0x34) + 0x24) =
             (uint)(*(int *)(param_1 + 0x84) != 0) + *(int *)(*(int *)(param_1 + 0x34) + 0x24);
        *(int *)(*(int *)(param_1 + 0x34) + 0x28) =
             *(int *)(param_1 + 0x2c) + *(int *)(*(int *)(param_1 + 0x34) + 0x28);
      }
    }
  }
  return lVar2;
}

