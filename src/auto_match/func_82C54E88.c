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
extern int fn_82A29A38();
extern int fn_82F68BF0();
extern int fn_82F691F0();


ulonglong fn_82C54E88(int *param_1,undefined4 param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  
  if (param_1[2] == param_1[1]) {
    lVar2 = ((ulonglong)(param_1[1] + 4) & 0x1fffffff) << 3;
    uVar1 = fn_82F68BF0(lVar2);
    if ((uVar1 & 0xffffffff) != 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(uVar1,0,lVar2);
    }
    uVar1 = 0xffffffffffffffff;
  }
  else {
    if ((uint)param_1[1] <= (uint)param_1[2]) {
      fn_82A29A38();
    }
    *(undefined4 *)(param_1[2] * 4 + *param_1) = param_2;
    uVar1 = (ulonglong)(uint)param_1[2];
    param_1[2] = param_1[2] + 1;
  }
  return uVar1;
}

