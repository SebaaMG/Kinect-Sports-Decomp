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
extern unsigned int *auStack_30;


undefined8 fn_82E6E238(int param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  ulonglong auStack_30 [6];
  
  if (param_2 == (undefined4 *)0x0) {
    return 0xffffffff80004003;
  }
  *param_2 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    auStack_30[0] = 0;
    uVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x10))(*(int **)(param_1 + 8),auStack_30);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
    if (*(ulonglong *)(param_1 + 0x10) <= auStack_30[0]) {
      if (*(ulonglong *)(param_1 + 0x18) < auStack_30[0] - *(ulonglong *)(param_1 + 0x10)) {
        *param_2 = 0;
        return uVar1;
      }
      *param_2 = 1;
      return uVar1;
    }
  }
  return 0xffffffffc00d36bb;
}

