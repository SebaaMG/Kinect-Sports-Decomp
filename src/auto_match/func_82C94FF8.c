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


undefined8 fn_82C94FF8(int param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (((param_3 != 0) && (*(int *)(*(int *)(param_1 + 0x55d0) + param_3 * 4) == 0)) &&
     (*(short *)((*(int *)(param_1 + 0x88) * (param_3 + -1) + param_2) * 2 +
                *(int *)(param_1 + 0x6f8)) == 0x4000)) {
    uVar1 = 1;
  }
  if (param_2 == 0) {
    return uVar1;
  }
  if (*(short *)((*(int *)(param_1 + 0x88) * param_3 + param_2) * 2 + *(int *)(param_1 + 0x6f8) + -2
                ) != 0x4000) {
    return uVar1;
  }
  return 1;
}

