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


undefined8
fn_8266F9C8(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0xf0) != 0) {
    iVar1 = param_1 + 0x108;
    if (iVar1 != 0) {
      RtlEnterCriticalSection(iVar1);
    }
    uVar2 = (**(code **)(**(int **)(param_1 + 0x10) + 0x54))
                      (*(int **)(param_1 + 0x10),5,param_2,param_3,param_4,param_5);
    if (iVar1 != 0) {
      RtlLeaveCriticalSection(iVar1);
    }
  }
  return uVar2;
}

