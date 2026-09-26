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
extern int fn_82A29AC0();


void fn_8261C270(int param_1)

{
  int iVar1;
  int aiStack_20 [2];
  
  if ((*(int *)(param_1 + 0x308) != 0) && (*(int *)(param_1 + 0x30c) != 0x103)) {
    *(undefined4 *)(param_1 + 0x308) = 0;
    iVar1 = fn_82A29AC0(*(undefined4 *)(param_1 + 0x304),param_1 + 0x30c,aiStack_20,1);
    if ((iVar1 == 0) || (aiStack_20[0] == 0)) {
      *(undefined4 *)(param_1 + 800) = 0x1e;
    }
    else {
      *(undefined4 *)(param_1 + 800) = 0;
    }
  }
  return;
}

