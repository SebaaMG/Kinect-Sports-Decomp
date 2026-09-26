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


undefined8 fn_82C08058(int param_1,int param_2,undefined8 param_3,int param_4)

{
  undefined4 *puVar1;
  
  if (((param_1 == 0) || (param_2 == 0)) || (param_4 == 0)) {
    return 0xffffffff80070057;
  }
  if (*(int *)(param_2 + 0x38) == 0) {
    return 0;
  }
  if (*(int *)(param_4 + 0x260) == 0) {
    return 0;
  }
  if (0x7e < *(int *)(param_2 + 0x3c)) {
    return 0xffffffff80070057;
  }
  puVar1 = (undefined4 *)(*(int *)(param_2 + 0x3c) * 0xc + *(int *)(param_4 + 0x260));
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  return 0;
}

