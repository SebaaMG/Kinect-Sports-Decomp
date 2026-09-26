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
extern unsigned int *auStack_10;
extern int fn_8265D5A8();
extern int fn_8265D8A0();
extern int fn_82F93768();
extern unsigned int uStack00000014;


undefined4 fn_82663428(undefined4 param_1)

{
  undefined1 *puVar1;
  undefined4 uStack00000014;
  undefined1 auStack_10 [16];
  
  uStack00000014 = param_1;
  puVar1 = (undefined1 *)fn_8265D5A8(auStack_10);
  fn_82F93768(uStack00000014,*puVar1);
  fn_8265D8A0(uStack00000014,0,0);
  return uStack00000014;
}

