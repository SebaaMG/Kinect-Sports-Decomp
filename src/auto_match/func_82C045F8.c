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


undefined8 fn_82C045F8(int *param_1,int param_2,int *param_3)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x74))();
  if (*(longlong *)(param_1 + 0x4a) == 0) {
    *(longlong *)(param_1 + 0x4a) = lVar1;
  }
  *(longlong *)(param_1 + 0x48) =
       (longlong)
       ((float)(lVar1 - *(longlong *)(param_1 + 0x4a)) * (float)param_1[0x55] +
       (float)*(longlong *)(param_1 + 0x48));
  *(longlong *)(param_1 + 0x4a) = lVar1;
  param_2 = param_2 - (int)*(undefined8 *)(param_1 + 0x48);
  *param_3 = param_2;
  param_1[0x4e] = param_2;
  return 0;
}

