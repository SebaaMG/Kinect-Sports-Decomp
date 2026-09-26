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
extern int fn_82667010();
extern int fn_8266B410();
extern int fn_82F6A3F8();
extern unsigned int lbl_82002800;
extern unsigned int uStack0000001c;


undefined4 * fn_8266B3A0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puStack00000014;
  undefined4 uStack0000001c;
  
  puStack00000014 = param_1;
  uStack0000001c = param_2;
  fn_8266B410(param_1);
  *puStack00000014 = &lbl_82002800;
  fn_82667010(puStack00000014 + 3,uStack0000001c);
  fn_82F6A3F8(puStack00000014 + 1,8,0xffffffff820027f4,8);
  return puStack00000014;
}

