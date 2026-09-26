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
extern unsigned int *auStack_40;
extern int fn_82F68CC0();
extern unsigned int uStack_18;


void fn_826F62D0(int param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_40 [40];
  undefined2 uStack_18;
  
  puVar1 = *(undefined1 **)(param_1 + 0xb04);
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = auStack_40;
    uStack_18 = 0;
  }
  fn_82F68CC0(param_2,puVar1,0x2c);
  return;
}

