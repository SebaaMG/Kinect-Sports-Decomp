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
extern int fn_82A1E650();
extern int fn_82A1E6A0();
extern int fn_82A33490();


undefined8 fn_82E23350(int param_1)

{
  int iVar2;
  undefined8 uVar1;
  
  iVar2 = fn_82A1E6A0(0,0,0,0);
  *(int *)(param_1 + 0x200) = iVar2;
  if (iVar2 != 0) {
    iVar2 = fn_82A33490(0,0,0xffffffff82e23248,param_1,0,*(undefined4 *)(param_1 + 0x1c),0);
    *(int *)(param_1 + 0x1fc) = iVar2;
    if (iVar2 != 0) {
      fn_82A1E650(*(undefined4 *)(param_1 + 0x200),0xffffffffffffffff);
      return 0;
    }
  }
  uVar1 = thunk_FUN_82a2b798();
  return uVar1;
}

