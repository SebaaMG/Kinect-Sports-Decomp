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
extern int fn_82A1BB18();
extern int fn_82A1E108();
extern U64 storeWordConditionalIndexed();


void fn_82E66318(undefined8 param_1)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  ulonglong uVar4;
  char in_RESERVE;
  byte in_cr0;
  
  uVar4 = 1;
  do {
    uVar3 = fn_82A1BB18();
    puVar2 = (uint *)param_1;
    if (puVar2[2] == uVar3) {
      puVar2[1] = puVar2[1] + 1;
      return;
    }
    if (*puVar2 != 0) {
      fn_82A1E108(uVar4);
      uVar4 = (uVar4 & 0x7fffffff) << 1;
      if (100 < uVar4) {
        uVar4 = 100;
      }
    }
    do {
      uVar3 = *puVar2;
      if (uVar3 != 0) {
        if (in_RESERVE != '\0') {
          uVar1 = storeWordConditionalIndexed((ulonglong)uVar3,0,param_1);
          *puVar2 = uVar1;
          in_cr0 = 2;
        }
        break;
      }
      if (in_RESERVE != '\0') {
        uVar1 = storeWordConditionalIndexed(1,0,param_1);
        *puVar2 = uVar1;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if (uVar3 == 0) {
      sync(1);
      puVar2[1] = 1;
      uVar3 = fn_82A1BB18();
      puVar2[2] = uVar3;
      return;
    }
  } while( true );
}

