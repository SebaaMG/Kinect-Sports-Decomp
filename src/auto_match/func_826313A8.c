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
#define CONCAT11(h,l) ((U16)((((U8)(h)) << 8) | ((U8)(l))))
#define CONCAT21(h,l) ((U32)((((U16)(h)) << 8) | ((U8)(l))))


void fn_826313A8(int param_1,int param_2,int param_3,longlong param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint *puVar4;
  
  param_3 = param_3 + 4;
  puVar4 = (uint *)((param_2 + 0x9f7) * 4 + param_1);
  do {
    puVar1 = (undefined1 *)(param_3 + 7);
    param_4 = param_4 + -1;
    puVar2 = (undefined1 *)(param_3 + 3);
    puVar3 = (undefined1 *)(param_3 + -1);
    param_3 = param_3 + 0x10;
    puVar4 = puVar4 + 1;
    *puVar4 = (uint)CONCAT21(CONCAT11(*puVar1,*puVar2),*puVar3);
  } while (param_4 != 0);
  *(ulonglong *)(param_1 + 0x20) = *(ulonglong *)(param_1 + 0x20) | 0x100000000000000;
  return;
}

