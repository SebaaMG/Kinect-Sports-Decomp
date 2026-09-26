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
extern int fn_82BE5240();
extern int fn_82BF4368();


ulonglong fn_82BF4790(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5)

{
  ulonglong uVar1;
  
  uVar1 = thunk_FUN_82be5550(100);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = fn_82BF4368((double)*(float *)(param_1 + 0x2c),uVar1,*(undefined4 *)(param_1 + 0x14),
                          *(undefined4 *)(param_1 + 0x18),*(undefined2 *)(param_1 + 0x28),param_5,
                          0x10,param_2);
  }
  if ((uVar1 & 0xffffffff) == 0) {
    fn_82BE5240(param_1,0x65,0xffffffff820eb948,*(undefined4 *)(param_1 + 0x14));
    uVar1 = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return uVar1;
}

