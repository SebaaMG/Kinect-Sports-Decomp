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


void fn_8267D728(longlong param_1,char param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  uint *puVar5;
  char in_RESERVE;
  
  param_1 = param_1 + 0x18;
  puVar5 = (uint *)param_1;
  if (param_2 == '\0') {
    do {
      uVar1 = *puVar5;
      sync(1);
      uVar2 = *puVar5;
      if (uVar2 == uVar1) {
        if (in_RESERVE != '\0') {
          uVar3 = storeWordConditionalIndexed((ulonglong)uVar1 & 0xffffffffffffffef,0,param_1);
          *puVar5 = uVar3;
        }
      }
      else if (in_RESERVE != '\0') {
        uVar3 = storeWordConditionalIndexed((ulonglong)uVar2,0,param_1);
        *puVar5 = uVar3;
      }
      sync(1);
    } while (uVar2 != uVar1);
    return;
  }
  bVar4 = false;
  do {
    uVar2 = *puVar5;
    sync(1);
    do {
      uVar1 = *puVar5;
      if (uVar1 != uVar2) {
        if (in_RESERVE != '\0') {
          uVar3 = storeWordConditionalIndexed((ulonglong)uVar1,0,param_1);
          *puVar5 = uVar3;
          bVar4 = true;
        }
        break;
      }
      if (in_RESERVE != '\0') {
        uVar3 = storeWordConditionalIndexed((ulonglong)uVar2 | 0x10,0,param_1);
        *puVar5 = uVar3;
        bVar4 = true;
      }
    } while (!bVar4);
    sync(1);
    if (uVar1 == uVar2) {
      return;
    }
  } while( true );
}

