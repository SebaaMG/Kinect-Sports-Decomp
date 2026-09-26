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
extern int fn_82FF0BA8();
extern unsigned int uStack_10;
extern unsigned int uStack_c;


void fn_82FF1438(int param_1,byte param_2)

{
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_10 = 0;
  uStack_c = 4;
  *(byte *)(param_1 + 0xda) = (param_2 & 1) << 4 | 0x20 | *(byte *)(param_1 + 0xda) & 0xef;
  fn_82FF0BA8(param_1,&uStack_10);
  return;
}

