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
#define _uStack00000030 ((*(U64*)&uStack00000030))
#define _uStack00000038 ((*(U64*)&uStack00000038))
extern int fn_82441D38();
extern unsigned int uStack00000030;
extern unsigned int uStack00000034;
extern unsigned int uStack00000038;


void fn_82442848(int param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  int iVar1;
  undefined4 uStack00000030;
  undefined4 uStack00000034;
  undefined4 uStack00000038;
  
  _uStack00000030 = param_3;
  _uStack00000038 = param_4;
  fn_82441D38();
  iVar1 = *(int *)(param_1 + 0x14);
  *(undefined4 *)(iVar1 + 0x60) = uStack00000030;
  *(undefined4 *)(iVar1 + 100) = uStack00000034;
  *(undefined4 *)(iVar1 + 0x68) = uStack00000038;
  (**(code **)(*(int *)(*(int *)(param_1 + 0x14) + 0xdc) + 4))
            (*(int *)(param_1 + 0x14) + 0xdc,param_2,param_3,param_4 & 0xffffffff00000000);
  return;
}

