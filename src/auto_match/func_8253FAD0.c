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
extern int fn_82570F18();
extern int fn_82571978();
extern int fn_82604630();


void fn_8253FAD0(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  fn_82604630();
  fn_82570F18(param_1);
  uVar1 = *(uint *)(param_1 + 0x75c);
  for (uVar2 = *(uint *)(param_1 + 0x758); uVar2 < uVar1; uVar2 = uVar2 + 0x3f0) {
    if (*(int *)(uVar2 + 0xf0) == 1) {
      fn_82571978((double)*(float *)(uVar2 + 0xd0),uVar2 + 0x2d0,*(undefined4 *)(uVar2 + 0xdc)
                        ,uVar2 + 0x180);
    }
  }
  return;
}

