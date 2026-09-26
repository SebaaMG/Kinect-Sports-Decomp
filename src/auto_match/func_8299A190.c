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
extern int fn_82963958();
extern int fn_82F68CC0();


undefined8 fn_8299A190(int param_1,undefined4 param_2)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = *(uint *)(param_1 + 0x1c);
  if ((uVar1 & 7) == 0) {
    if (uVar1 + 8 < uVar1) {
      return 0xffffffff80004005;
    }
    lVar2 = fn_82963958();
    if (lVar2 == 0) {
      return 0xffffffff8007000e;
    }
    fn_82F68CC0(lVar2,*(undefined4 *)(param_1 + 0x20),*(int *)(param_1 + 0x1c) << 2);
    *(int *)(param_1 + 0x20) = (int)lVar2;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x1c) * 4) = param_2;
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  return 0;
}

