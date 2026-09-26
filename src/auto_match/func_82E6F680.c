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
extern unsigned int *auStack_20;


undefined8 fn_82E6F680(int param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  ulonglong auStack_20 [2];
  
  if (param_2 == (undefined4 *)0x0) {
    return 0xffffffff80004003;
  }
  *param_2 = 0;
  if (*(int *)(param_1 + 0x58) != 0) {
    auStack_20[0] = 0;
    uVar1 = (**(code **)(**(int **)(param_1 + 0x58) + 0x30))(*(int **)(param_1 + 0x58),auStack_20);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
    if (auStack_20[0] / 10000 < 0x100000000) {
      *param_2 = (int)(auStack_20[0] / 10000);
      return 0;
    }
  }
  return 0xffffffffc00d36bb;
}

