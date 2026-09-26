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
extern int fn_8265B6B0();
extern int fn_82F65AC0();


longlong fn_8265BB28(undefined8 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = 0;
  do {
    puVar1 = (undefined4 *)fn_8265B6B0(lVar3);
    iVar2 = fn_82F65AC0(*puVar1,param_1);
    if (iVar2 == 0) {
      return lVar3;
    }
    lVar3 = lVar3 + 1;
  } while ((int)lVar3 < 0x7a);
  return 0x7a;
}

