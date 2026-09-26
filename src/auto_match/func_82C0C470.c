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


undefined8 fn_82C0C470(int *param_1,longlong param_2,int param_3,int param_4)

{
  ulonglong uVar1;
  
  (**(code **)(*param_1 + 0xc))();
  uVar1 = param_2 - 1;
  if ((uVar1 & 0xffffffff) < 4) {
    if ((int)uVar1 == 0) {
      param_1[0xf] = param_3;
      param_1[0x13] = param_4;
      goto LAB_82c0c4e8;
    }
    if (param_2 == 2) {
      param_1[0x10] = param_3;
      param_1[0x14] = param_4;
      goto LAB_82c0c4e8;
    }
    if (uVar1 != 2) {
      param_1[0xe] = param_3;
      param_1[0x12] = param_4;
      goto LAB_82c0c4e8;
    }
  }
  param_1[0xd] = param_3;
  param_1[0x11] = param_4;
LAB_82c0c4e8:
  (**(code **)(*param_1 + 0x14))(param_1);
  return 0;
}

