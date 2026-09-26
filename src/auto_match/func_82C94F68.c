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


undefined8 fn_82C94F68(int param_1,uint param_2,uint param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  uVar2 = ((longlong)(int)*(uint *)(param_1 + 0x88) * (longlong)(int)param_3 & 0x7fffffffU) * 2 +
          (ulonglong)param_2;
  if ((((param_3 & 1) != 0) ||
      ((param_3 != 0 && (*(int *)(((int)param_3 >> 1) * 4 + *(int *)(param_1 + 0x55d0)) == 0)))) &&
     (*(short *)((int)((uVar2 + ((ulonglong)*(uint *)(param_1 + 0x88) & 0x7fffffff) * -2 &
                       0xffffffff) << 1) + *(int *)(param_1 + 0x6f0)) == 0x4000)) {
    uVar1 = 1;
  }
  if (param_2 == 0) {
    return uVar1;
  }
  if (*(short *)(*(int *)(param_1 + 0x6f0) + (int)((uVar2 & 0xffffffff) << 1) + -2) != 0x4000) {
    return uVar1;
  }
  return 1;
}

