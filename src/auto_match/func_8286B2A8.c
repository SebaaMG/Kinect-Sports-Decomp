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
extern int fn_82230300();
extern int fn_8223DEF8();
extern int fn_8223E0E0();
extern int fn_822B2888();


undefined8 fn_8286B2A8(undefined8 param_1,int param_2,undefined8 param_3)

{
  fn_82230300(param_1,0,0);
  fn_822B2888(param_1,(ulonglong)*(uint *)(param_2 + 0x10) + 1);
  fn_8223DEF8(param_1,param_2,0,0xffffffffffffffff);
  fn_8223E0E0(param_1,1,param_3);
  return param_1;
}

