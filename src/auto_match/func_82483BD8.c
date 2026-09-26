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
extern int fn_8225BD88();
extern int fn_8225BE20();
extern int fn_82480298();


void fn_82483BD8(int param_1)

{
  undefined8 uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x5c);
  if (*(int *)(param_1 + 0x60) == 0) {
    uVar2 = -(uint)(*(int *)(param_1 + 0x88) == 0) & uVar2;
  }
  if ((uVar2 == 0) || (*(int *)(param_1 + 0x60) == 0)) {
    uVar1 = fn_8225BD88();
    fn_8225BE20(uVar1,1,1,0);
  }
  fn_82480298(param_1 + 0x10);
  return;
}

