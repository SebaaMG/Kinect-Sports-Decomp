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
extern int fn_82A6ADE0();
extern int fn_82A7D0F8();
extern int fn_82A7E020();
extern int fn_82A7E4C8();
extern int fn_82A7F958();
extern int fn_82A7FF10();
extern int fn_82A80348();
extern int fn_82BA02A8();
extern int fn_82D7E470();


undefined8 fn_82A6AE80(int param_1)

{
  code *pcVar1;
  
  fn_82A6ADE0();
  *(code **)(param_1 + 0x1f0) = fn_82A7E4C8;
  *(code **)(param_1 + 0x204) = fn_82A7E020;
  *(code **)(param_1 + 0x200) = fn_82BA02A8;
  *(code **)(param_1 + 0x1fc) = fn_82D7E470;
  *(code **)(param_1 + 0x1f8) = fn_82BA02A8;
  *(code **)(param_1 + 500) = fn_82BA02A8;
  if (*(int *)(param_1 + 0x118) == 1) {
    if (*(int *)(param_1 + 0x28) == 0) {
      *(undefined4 *)(param_1 + 0x1dc) = 0;
      goto LAB_82a6af44;
    }
    pcVar1 = fn_82A7D0F8;
  }
  else {
    pcVar1 = fn_82A80348;
  }
  *(code **)(param_1 + 0x1dc) = pcVar1;
LAB_82a6af44:
  *(code **)(param_1 + 0x204) = fn_82A7F958;
  *(code **)(param_1 + 0x1f0) = fn_82A7FF10;
  return 0;
}

