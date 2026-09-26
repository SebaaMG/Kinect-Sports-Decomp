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


undefined8 fn_82C00718(int *param_1)

{
  (**(code **)(*param_1 + 0x54))(param_1,2);
  if ((int *)param_1[0xe] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xe] + 0x48))();
    param_1[0xe] = 0;
  }
  if (param_1[0xa3] != 0) {
    if ((int *)param_1[0xa4] != (int *)0x0) {
      (**(code **)(*(int *)param_1[0xa4] + 8))();
      param_1[0xa4] = 0;
    }
    param_1[0xa3] = 0;
  }
  (**(code **)(*param_1 + 0x3c))(param_1);
  (**(code **)(*param_1 + 0x58))(param_1);
  return 0;
}

