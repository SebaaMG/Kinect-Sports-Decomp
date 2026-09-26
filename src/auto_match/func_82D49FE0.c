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
extern V16 vectorAddFloatingPoint();


longlong fn_82D49FE0(int param_1,longlong param_2)

{
  undefined4 *puVar1;
  int in_r0;
  longlong lVar2;
  longlong lVar3;
  undefined1 in_vs32 [16];
  undefined1 in_vs45 [16];
  undefined4 in_register_000100c0;
  undefined4 in_register_000100c4;
  undefined4 in_register_000100c8;
  undefined4 in_vr12;
  
  (**(code **)(**(int **)(param_1 + 0x18) + 0x30))();
  lVar2 = (**(code **)(**(int **)(param_1 + 0x18) + 0x2c))(*(int **)(param_1 + 0x18));
  lVar3 = param_2;
  if (0 < (int)lVar2) {
    do {
      vectorAddFloatingPoint(in_vs32,in_vs45);
      puVar1 = (undefined4 *)(in_r0 + (int)lVar3 & 0xfffffff0);
      *puVar1 = in_register_000100c0;
      puVar1[1] = in_register_000100c4;
      puVar1[2] = in_register_000100c8;
      puVar1[3] = in_vr12;
      lVar2 = lVar2 + -1;
      lVar3 = lVar3 + 0x10;
    } while (lVar2 != 0);
  }
  return param_2;
}

