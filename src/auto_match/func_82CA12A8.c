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


void fn_82CA12A8(int param_1,uint param_2)

{
  longlong lVar1;
  
  if ((*(int *)(param_1 + 0x50c8) == 0) || (*(int *)(param_1 + 0x50cc) != 0)) {
    param_2 = -(uint)(*(int *)(param_1 + 0x50c8) != 0) & param_2;
    (**(code **)(param_1 + 0x3e30))
              (0,(longlong)(*(int *)(param_1 + 0xcc) >> 1) * (longlong)(int)param_2 +
                 (ulonglong)*(uint *)(param_1 + 0xec0),0,*(undefined4 *)(param_1 + 0xac),
               *(undefined4 *)(param_1 + 0xdc),1,1,*(undefined4 *)(param_1 + 0xa4));
    lVar1 = (longlong)(*(int *)(param_1 + 0xd0) >> 1) * (longlong)(int)param_2;
    (**(code **)(param_1 + 0x3e2c))
              (0,(ulonglong)*(uint *)(param_1 + 0xec4) + lVar1,
               (ulonglong)*(uint *)(param_1 + 0xec8) + lVar1,0,*(undefined4 *)(param_1 + 0xb0),
               *(undefined4 *)(param_1 + 0xe0),1,1);
  }
  else if (*(uint *)(param_1 + 0x3b0c) == *(uint *)(param_1 + 0xcc)) {
    (**(code **)(param_1 + 0x3e30))
              (0,(ulonglong)*(uint *)(param_1 + 0xcc) + (ulonglong)*(uint *)(param_1 + 0xec0),0,
               *(int *)(param_1 + 0xac) >> 1,*(undefined4 *)(param_1 + 0xdc),1,1,
               *(undefined4 *)(param_1 + 0xa4));
    (**(code **)(param_1 + 0x3e2c))
              (0,(ulonglong)*(uint *)(param_1 + 0xd0) + (ulonglong)*(uint *)(param_1 + 0xec4),
               (ulonglong)*(uint *)(param_1 + 0xd0) + (ulonglong)*(uint *)(param_1 + 0xec8),0,
               *(int *)(param_1 + 0xb0) >> 1,*(undefined4 *)(param_1 + 0xe0),1,1);
    (**(code **)(param_1 + 0x3e30))
              (0,*(undefined4 *)(param_1 + 0xec0),0,*(int *)(param_1 + 0xac) >> 1,
               *(undefined4 *)(param_1 + 0xdc),1,1,*(undefined4 *)(param_1 + 0xa4));
    (**(code **)(param_1 + 0x3e2c))
              (0,*(undefined4 *)(param_1 + 0xec4),*(undefined4 *)(param_1 + 0xec8),0,
               *(int *)(param_1 + 0xb0) >> 1,*(undefined4 *)(param_1 + 0xe0),1,1);
  }
  return;
}

