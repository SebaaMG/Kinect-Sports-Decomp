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
extern int fn_82813428();


void fn_82813680(longlong *param_1,undefined4 *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lStack_30;
  undefined4 *puStack_28;
  longlong *plStack_24;
  
  if (param_2 != (undefined4 *)0x0) {
    do {
      do {
        lVar2 = *param_1;
        lStack_30 = ((((U64)(lStack_30)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)((undefined4)((ulonglong)lVar2 >> 0x20))) & ((U64)0xFFFFFFFF)) << 0));
        *param_2 = (((U64)(lStack_30) >> 0) & 0xFFFFFFFF);
      } while (lVar2 != *param_1);
      if (param_1[2] == 0) {
        sync(1);
      }
      lStack_30 = lVar2;
      puStack_28 = param_2;
      plStack_24 = param_1;
      cVar1 = fn_82813428(&lStack_30);
    } while (cVar1 == '\0');
  }
  return;
}

