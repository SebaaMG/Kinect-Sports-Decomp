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
extern unsigned int lbl_82014C48;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_831F1348;


double fn_827669E8(int param_1,uint param_2)

{
  if (param_2 != 0xffffffff) {
    if (*(uint *)(param_1 + 0x34) != 0) {
      if (param_2 < *(uint *)(param_1 + 0x34)) {
        return (double)*(float *)(*(int *)(param_1 + 0x30) + param_2 * 0xc);
      }
      return (double)lbl_821AAD20;
    }
    if (lbl_831F1348 == '\0') {
      lbl_831F1348 = '\x01';
    }
  }
  return (double)lbl_82014C48;
}

