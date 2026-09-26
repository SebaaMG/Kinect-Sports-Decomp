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
extern int fn_82B4BC48();


void fn_82B4BE70(void)

{
  uint *puVar1;
  uint in_r6;
  uint uVar2;
  
  puVar1 = (uint *)fn_82B4BC48();
  if (in_r6 != 0xe4) {
    uVar2 = *puVar1 >> 5 & 0xff;
    *puVar1 = ((((uVar2 >> (in_r6 >> 5 & 6) & 3) << 2 | uVar2 >> (in_r6 >> 3 & 6) & 3) << 2 |
               uVar2 >> (in_r6 >> 1 & 6) & 3) << 2 | uVar2 >> ((in_r6 & 3) << 1) & 3) << 5 |
              *puVar1 & 0xffffe01f;
  }
  return;
}

