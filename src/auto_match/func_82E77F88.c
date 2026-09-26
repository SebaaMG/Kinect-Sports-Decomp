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
extern int fn_82E77148();
extern unsigned int uStack00000028;


uint fn_82E77F88(int param_1,undefined8 param_2,ulonglong param_3,undefined4 *param_4)

{
  uint uVar1;
  ulonglong uStack00000028;
  
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = *(undefined4 *)(param_1 + 0x110);
  }
  uStack00000028 = param_3;
  uVar1 = fn_82E77148(param_1,*(undefined4 *)(param_1 + 0x110),param_2,
                        param_3 & 0xffffffff00000000);
  if (-1 < (int)uVar1) {
    *(int *)(param_1 + 0x110) = *(int *)(param_1 + 0x110) + 1;
  }
  return uVar1 >> 0x1f ^ 1;
}

