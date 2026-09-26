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
extern unsigned int lbl_821CA460;


int fn_825206B8(uint *param_1,int param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = *param_1 * 0x19660d + 0x3c6ef35f;
  *param_1 = uVar1;
  return (int)((float)(longlong)(param_3 - param_2) *
               ((float)(uVar1 & 0x7fffff | 0x3f800000) - lbl_821CA460) + (float)(longlong)param_2);
}

