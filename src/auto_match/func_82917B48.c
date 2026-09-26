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


undefined8 fn_82917B48(int *param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  int iVar2;
  
  if ((ulonglong)(uint)param_1[5] != 0) {
    iVar2 = 1;
    if (*(short *)(param_1 + 2) != 0) {
      iVar2 = 4;
    }
    if ((code *)param_1[7] == (code *)0x0) {
      return 0xffffffff80004005;
    }
    uVar1 = (*(code *)param_1[7])
                      (param_2,(ulonglong)*(ushort *)((int)param_1 + 10) + param_3,
                       ((longlong)iVar2 * (longlong)(int)param_3 & 0x3fffffffU) * 4 +
                       (ulonglong)*(uint *)(*param_1 + 8) + (ulonglong)(uint)param_1[5],param_1[8],
                       *(undefined2 *)(param_1 + 3));
    if ((int)uVar1 < 0) {
      return uVar1;
    }
  }
  return 0;
}

