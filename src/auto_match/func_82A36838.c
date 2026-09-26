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
extern int fn_82A39308();


undefined8 fn_82A36838(int param_1)

{
  fn_82A39308(param_1 + 0x10);
  if ((*(uint *)(param_1 + 8) & 1) == 0) {
    if ((*(uint *)(param_1 + 8) & 0x80000000) == 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x4358) = 0;
    *(undefined8 *)(param_1 + 0x4360) = 0;
    *(undefined8 *)(param_1 + 0x4368) = 0;
    *(undefined4 *)(param_1 + 0x4378) = 0;
    *(undefined4 *)(param_1 + 0x437c) = 0;
    *(undefined4 *)(param_1 + 0x4380) = 0;
    *(undefined4 *)(param_1 + 0x4384) = 0;
    *(undefined1 *)(param_1 + 0x4388) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x4360) = 0;
    *(undefined4 *)(param_1 + 0x4370) = 0;
  }
  *(undefined4 *)(param_1 + 0x4374) = 0;
  return 0;
}

