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
extern U64 storeWordConditionalIndexed();


ulonglong fn_82F3DD30(ulonglong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  uint *puVar3;
  char in_RESERVE;
  byte in_cr0;
  
  do {
    puVar3 = (uint *)(param_1 + 0x48);
    uVar2 = (ulonglong)*puVar3 - 1;
    if (in_RESERVE != '\0') {
      uVar1 = storeWordConditionalIndexed(uVar2,0,param_1 + 0x48);
      *puVar3 = uVar1;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  if ((uVar2 & 0xffffffff) == 0) {
    if ((param_1 & 0xffffffff) != 0) {
      (**(code **)(*(int *)param_1 + 0x3c))(param_1,1);
    }
    uVar2 = 0;
  }
  return uVar2;
}

