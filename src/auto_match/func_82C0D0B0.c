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
extern unsigned int *auStack_30;
extern unsigned int uStack_2c;


undefined8 fn_82C0D0B0(int *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined1 auStack_30 [4];
  undefined4 uStack_2c;
  
  (**(code **)(*param_1 + 0xc))();
  if (param_2 != (undefined4 *)0x0) {
    uVar1 = (**(code **)(*param_1 + 0xf4))(param_1);
    *param_2 = uVar1;
  }
  if (param_3 != (undefined4 *)0x0) {
    uVar1 = (**(code **)(*param_1 + 0xf8))(param_1);
    *param_3 = uVar1;
  }
  (**(code **)(*param_1 + 0x14))(param_1);
  if (param_4 != (undefined4 *)0x0) {
    (**(code **)(*(int *)param_1[0xb] + 0x50))((int *)param_1[0xb],auStack_30);
    *param_4 = uStack_2c;
  }
  return 0;
}

