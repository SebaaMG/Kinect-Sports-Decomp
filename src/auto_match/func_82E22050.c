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
extern int fn_82230300();


void fn_82E22050(int param_1)

{
  uint uVar2;
  longlong lVar1;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar2 = (*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0xc)) - 1;
    if (*(uint *)(param_1 + 8) <= uVar2) {
      uVar2 = uVar2 - *(uint *)(param_1 + 8);
    }
    fn_82230300(*(undefined4 *)(uVar2 * 4 + *(int *)(param_1 + 4)),1,0);
    lVar1 = (ulonglong)*(uint *)(param_1 + 0x10) - 1;
    *(int *)(param_1 + 0x10) = (int)lVar1;
    if (lVar1 == 0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
  }
  return;
}

