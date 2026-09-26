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
extern int fn_823C4C00();
extern int fn_823CC298();
extern int fn_82508078();


void fn_823C4C88(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x9a4) != 0) && (iVar1 = *(int *)(param_1 + 0x41c), iVar1 != 0)) {
    if ((iVar1 == 1) || ((iVar1 == 0xb || (iVar1 == 0xc)))) {
      if ((*(int *)(*(int *)(param_1 + 0x9a0) + 0x2c) == *(int *)(*(int *)(param_1 + 0x9a4) + 0x2c))
         && (*(int *)(param_1 + 0x4c0) == 0)) {
        fn_82508078(*(undefined4 *)(param_1 + 0xa4),0xffffffff821b605c,0);
      }
      fn_823CC298(*(undefined4 *)(param_1 + 0x4b8),3);
    }
    else if (iVar1 == 5) {
      fn_823C4C00(param_1,*(undefined4 *)(*(int *)(param_1 + 0x9a0) + 0x2c));
    }
  }
  return;
}

