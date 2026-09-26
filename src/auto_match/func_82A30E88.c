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
extern int fn_82A30A08();
extern int fn_82F691F0();


undefined8 fn_82A30E88(int param_1)

{
  undefined8 uVar1;
  int in_r8;
  uint uVar2;
  
  if (*(char *)(param_1 + 0xce) == '\0') {
    return 0xffffffffc00002ea;
  }
  uVar2 = *(uint *)(in_r8 + 0x44);
  if (uVar2 == 0xffffffff) {
    uVar2 = *(uint *)(param_1 + 0x54);
    uVar1 = fn_82A30A08(param_1,param_1 + 0x38,(ulonglong)uVar2 + 0x1000,0);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
  }
  else if (0x3fff80 < uVar2) {
    return 0xffffffffc00002ea;
  }
  *(uint *)(in_r8 + 0x40) = uVar2;
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(in_r8,0,0x40);
}

