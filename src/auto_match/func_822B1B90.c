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


void fn_822B1B90(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  uint *puVar4;
  char in_RESERVE;
  byte in_cr0;
  
  *param_1 = param_2;
  do {
    lVar3 = (ulonglong)*param_1 + 8;
    do {
      puVar4 = (uint *)lVar3;
      uVar1 = *puVar4;
      if (uVar1 != 0) {
        if (in_RESERVE != '\0') {
          uVar2 = storeWordConditionalIndexed((ulonglong)uVar1,0,lVar3);
          *puVar4 = uVar2;
          in_cr0 = 2;
        }
        break;
      }
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed(1,0,lVar3);
        *puVar4 = uVar2;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if (uVar1 == 0) {
      sync(1);
      return;
    }
  } while( true );
}

