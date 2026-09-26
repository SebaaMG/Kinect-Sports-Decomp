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
extern int fn_82F65350();


ulonglong fn_82FB0888(int param_1)

{
  uint uVar1;
  ulonglong uVar2;
  ushort uVar3;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0xa8) == 1) {
    if (*(int *)(param_1 + 0x94) != 0) {
      uVar2 = fn_82F65350();
      uVar1 = *(uint *)(param_1 + 0x94);
      trapWord(6,(ulonglong)uVar1,0);
      uVar2 = uVar2 - (longlong)(int)((uVar2 & 0xffffffff) / (ulonglong)uVar1) *
                      (longlong)(int)uVar1 & 0xffff;
    }
  }
  else if (*(int *)(param_1 + 0xa8) == 2) {
    uVar3 = *(short *)(param_1 + 0xac) + 1;
    *(ushort *)(param_1 + 0xac) = uVar3;
    if (*(uint *)(param_1 + 0x94) <= (uint)uVar3) {
      *(undefined2 *)(param_1 + 0xac) = 0;
    }
    return (ulonglong)*(ushort *)(param_1 + 0xac);
  }
  return uVar2;
}

