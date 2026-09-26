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


uint fn_829EC050(ulonglong param_1)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  char in_RESERVE;
  byte in_cr0;
  
  do {
    puVar3 = (uint *)(param_1 + 0xc);
    uVar2 = *puVar3;
    if (in_RESERVE != '\0') {
      uVar1 = storeWordConditionalIndexed((ulonglong)uVar2 - 1,0,param_1 + 0xc);
      *puVar3 = uVar1;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  if ((int)((ulonglong)uVar2 - 1) == 0) {
    if ((param_1 & 0xffffffff) != 0) {
      (**(code **)*(undefined4 *)param_1)(param_1,1);
    }
    uVar2 = 0;
  }
  else {
    uVar2 = *puVar3;
  }
  return uVar2;
}

