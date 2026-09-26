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
extern int fn_82A1E108();
extern U64 storeWordConditionalIndexed();


void fn_82E664E8(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  uint *puVar5;
  ulonglong uVar6;
  char in_RESERVE;
  
  do {
    do {
      while( true ) {
        puVar5 = (uint *)param_1;
        uVar2 = *puVar5;
        if ((uVar2 & 0x80000000) == 0) break;
        fn_82A1E108(10);
      }
      bVar4 = (uVar2 & 0x3fffffff) == 0;
      uVar6 = (ulonglong)uVar2 | 0x40000000;
      if (bVar4) {
        uVar6 = (ulonglong)uVar2 | 0xc0000000;
      }
    } while ((uint)uVar6 == uVar2);
    do {
      uVar1 = *puVar5;
      if (uVar1 != uVar2) {
        if (in_RESERVE != '\0') {
          uVar3 = storeWordConditionalIndexed((ulonglong)uVar1,0,param_1);
          *puVar5 = uVar3;
        }
        break;
      }
      if (in_RESERVE != '\0') {
        uVar3 = storeWordConditionalIndexed(uVar6,0,param_1);
        *puVar5 = uVar3;
        bVar4 = true;
      }
    } while (!bVar4);
    if ((uVar1 == uVar2) && (sync(1), (uVar6 & 0x80000000) != 0)) {
      return;
    }
  } while( true );
}

