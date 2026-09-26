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
#define ZEXT48(x) ((U64)((U32)(x)))
extern int fn_8266A110();
extern int fn_8266A1F0();
extern int fn_8266A220();
extern unsigned int lbl_820026C4;


void fn_8266A0B8(undefined4 *param_1)

{
  undefined4 *puStack00000014;
  
  *param_1 = &lbl_820026C4;
  puStack00000014 = param_1;
  fn_8266A110(param_1,1);
  fn_8266A220(ZEXT48(puStack00000014) + 4);
  fn_8266A1F0(ZEXT48(puStack00000014) + 4);
  return;
}

