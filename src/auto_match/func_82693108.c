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
extern int fn_82693008();
extern int fn_82693078();


undefined8 fn_82693108(longlong param_1,ulonglong param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  char cVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  uVar1 = (param_2 & 0xffffffff) >> 0x14;
  uVar2 = ((param_2 + param_3) - 1 & 0xffffffff) >> 0x14;
  if (uVar1 <= uVar2) {
    lVar4 = uVar1 * 8 + param_1 + 4;
    uVar5 = uVar1;
    do {
      cVar3 = fn_82693008(lVar4,*(undefined4 *)param_1);
      if (cVar3 == '\0') {
        if (uVar1 < (uVar5 & 0xffffffff)) {
          lVar6 = uVar5 - uVar1;
          lVar4 = (uVar5 & 0x1fffffff) * 8 + param_1 + -4;
          do {
            fn_82693078(lVar4,*(undefined4 *)param_1);
            lVar6 = lVar6 + -1;
            lVar4 = lVar4 + -8;
          } while (lVar6 != 0);
        }
        return 0;
      }
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 8;
    } while ((uVar5 & 0xffffffff) <= uVar2);
  }
  return 1;
}

