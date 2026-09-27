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
extern float lbl_82005718;
extern unsigned int lbl_82014C4C;
extern unsigned int lbl_821AAD20;


double fn_82766AD8(int param_1,uint param_2)

{
  if ((param_2 != 0xffffffff) && (*(uint *)(param_1 + 0x34) != 0)) {
    if (param_2 < *(uint *)(param_1 + 0x34)) {
      return (double)((float)*(ushort *)(*(int *)(param_1 + 0x30) + param_2 * 0xc + 10) *
                     lbl_82005718);
    }
    return (double)lbl_821AAD20;
  }
  return (double)lbl_82014C4C;
}

