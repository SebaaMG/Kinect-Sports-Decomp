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


ulonglong fn_82294B38(int param_1,ushort param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = **(uint **)(param_1 + 0x20);
  if (((uVar1 != 0) && (**(uint **)(param_1 + 0x10) < uVar1)) &&
     ((uVar2 = (ulonglong)param_2, uVar2 == 0xffff ||
      ((uVar2 == *(ushort *)(uVar1 - 2) || ((*(uint *)(param_1 + 0x40) & 2) == 0)))))) {
    **(int **)(param_1 + 0x30) = **(int **)(param_1 + 0x30) + 1;
    **(int **)(param_1 + 0x20) = **(int **)(param_1 + 0x20) + -2;
    if (uVar2 != 0xffff) {
      *(ushort *)**(undefined4 **)(param_1 + 0x20) = param_2;
    }
    return -(ulonglong)(uVar2 != 0xffff) & uVar2;
  }
  return 0xffffffffffffffff;
}

