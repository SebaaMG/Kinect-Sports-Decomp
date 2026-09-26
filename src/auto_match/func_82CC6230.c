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
extern int fn_82C53960();
extern int fn_82C53970();


ulonglong fn_82CC6230(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  ulonglong uVar1;
  
  if (param_3 < 0) {
    param_3 = -param_3;
  }
  if (param_5 < 0) {
    param_5 = -param_5;
  }
  *(int *)(param_1 + 0x18) = param_2;
  *(int *)(param_1 + 0x1c) = param_3;
  *(int *)(param_1 + 0x20) = param_4;
  *(int *)(param_1 + 0x24) = param_5;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x3c) != 0) {
    fn_82C53970();
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  if (param_2 <= param_4) {
    param_2 = param_4;
  }
  if (param_3 <= param_5) {
    param_3 = param_5;
  }
  uVar1 = fn_82C53960(((longlong)(param_3 + 2) * (longlong)(param_2 + 2) & 0x3fffffffU) << 2,0);
  *(int *)(param_1 + 0x3c) = (int)uVar1;
  if ((uVar1 & 0xffffffff) != 0) {
    uVar1 = 1;
    *(undefined4 *)(param_1 + 0x14) = 1;
  }
  return uVar1;
}

