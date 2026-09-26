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


undefined4 * fn_82FF5200(int param_1,uint param_2)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)param_2 * 0x8421085 >> 0x20;
  uVar2 = ((param_2 - uVar2 & 0xffffffff) >> 1) + uVar2 >> 4;
  puVar1 = *(undefined4 **)
            ((int)((((ulonglong)param_2 - ((uVar2 & 0x7ffffff) * 0x20 - uVar2)) + 1 & 0xffffffff) <<
                  2) + param_1);
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      return (undefined4 *)0x0;
    }
    if (puVar1[2] == param_2) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  return puVar1 + 4;
}

