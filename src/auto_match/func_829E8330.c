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
extern unsigned int lbl_82057BE8;


longlong fn_829E8330(undefined8 param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint *puVar3;
  
  puVar3 = (uint *)&lbl_82057BE8;
  lVar1 = 7;
  lVar2 = 7;
  while ((param_2 <= *puVar3 || (param_3 <= *puVar3))) {
    puVar3 = puVar3 + -1;
    lVar1 = lVar2;
    lVar2 = lVar2 + -1;
    if ((int)puVar3 < -0x7dfa8434) {
      return 0;
    }
  }
  return lVar1;
}

