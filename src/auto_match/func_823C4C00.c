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
extern int fn_823CC298();
extern int fn_82508078();


void fn_823C4C00(int param_1,int param_2)

{
  int *piVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_1 + 0x4c0) == 0) {
    fn_82508078(*(undefined4 *)(param_1 + 0xa4),0xffffffff821b604c,0);
  }
  uVar2 = 0x10;
  piVar1 = *(int **)(*(int *)(param_1 + 0x20) + param_2 * 4);
  if (piVar1[1] - *piVar1 >> 2 == 0) {
    uVar2 = 0x22;
  }
  fn_823CC298(*(undefined4 *)(param_1 + 0x4b8),uVar2);
  return;
}

