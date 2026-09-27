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
extern float fRam8320a7f4;
extern float fRam8320a7f8;
extern float fRam8320a7fc;
extern unsigned int lbl_82005328;
extern unsigned int lbl_8320A7F0;
extern unsigned int lbl_8320A888;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82836F40(uint param_1,uint param_2,uint param_3,uint param_4)

{
  lbl_8320A888 = (((param_4 & 0xff) << 8 | param_1 & 0xff) << 8 | param_2 & 0xff) << 8 |
                 param_3 & 0xff;
  fRam8320a7f4 = (float)(longlong)(int)(param_2 & 0xff) * lbl_82005328;
  lbl_8320A7F0 = (float)(longlong)(int)(param_1 & 0xff) * lbl_82005328;
  fRam8320a7f8 = (float)(longlong)(int)(param_3 & 0xff) * lbl_82005328;
  fRam8320a7fc = (float)(param_4 & 0xff) * lbl_82005328;
  return;
}

