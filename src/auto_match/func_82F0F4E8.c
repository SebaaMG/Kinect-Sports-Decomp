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
extern int fn_82F24118();


void fn_82F0F4E8(int param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = *(uint *)(param_2 + 0x108);
  lVar2 = (longlong)(*(int *)(param_1 + 0x568) >> 1) * (longlong)*(int *)(param_1 + 0x6de4) +
          ((longlong)*(int *)(param_1 + 0x568) * (longlong)(int)uVar1 & 0x1fffffffU) * 8;
  fn_82F24118(param_1,(longlong)(*(int *)(param_1 + 0x564) >> 1) *
                          (longlong)*(int *)(param_1 + 0x6de4) +
                          ((longlong)*(int *)(param_1 + 0x564) * (longlong)(int)uVar1 & 0xfffffffU)
                          * 0x10 + (ulonglong)*(uint *)(param_1 + 0x4a94) + 4,
                  (ulonglong)*(uint *)(param_1 + 0x4a98) + lVar2 + 4,
                  (ulonglong)*(uint *)(param_1 + 0x4a9c) + lVar2 + 4,*(int *)(param_1 + 0x2d0) << 1,
                  ((ulonglong)*(uint *)(param_2 + 0x10c) - (ulonglong)uVar1 & 0xfffffff) << 4,
                  *(undefined4 *)(param_2 + 0xec),*(undefined4 *)(param_2 + 0xf4));
  return;
}

