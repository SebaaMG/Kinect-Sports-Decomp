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
extern int fn_82ADD120();
extern int fn_82ADD198();
extern int fn_82ADD600();


undefined8 fn_82AD2AA8(undefined8 param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  
  for (uVar1 = *(uint *)(param_3 + 0x1c); ((uVar1 & 1) == 0 && (uVar1 != 0));
      uVar1 = *(uint *)((uVar1 & 0xfffffffe) + 0x28)) {
    if (((*(uint *)(uVar1 + 8) & 0x3f80) == 0x3700) && ((*(uint *)(uVar1 + 8) >> 0x17 & 1) != 0)) {
      uVar2 = fn_82ADD120(*(undefined4 *)(*(int *)(uVar1 + 0x2c) + 0xc));
      uVar2 = fn_82ADD198(param_1,uVar2);
      iVar3 = fn_82ADD600(param_1,uVar2);
      if (iVar3 == param_2) {
        return 1;
      }
    }
  }
  return 0;
}

