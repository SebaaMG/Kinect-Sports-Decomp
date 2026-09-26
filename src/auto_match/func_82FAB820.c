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
extern int fn_82FA5060();


undefined8 fn_82FAB820(int param_1)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  
  if (*(int *)(param_1 + 8) != 0) {
    return 1;
  }
  if ((*(uint *)(param_1 + 0x14) < *(uint *)(param_1 + 0x10)) &&
     (uVar2 = fn_82FA5060(*(undefined4 *)(param_1 + 0x1c),0x1c), (uVar2 & 0xffffffff) != 0)) {
    puVar1 = (undefined4 *)uVar2;
    if (uVar2 != 0xfffffffffffffffc) {
      puVar1[5] = 0;
    }
    *puVar1 = *(undefined4 *)(param_1 + 8);
    *(undefined4 **)(param_1 + 8) = puVar1;
    return 1;
  }
  return 0;
}

