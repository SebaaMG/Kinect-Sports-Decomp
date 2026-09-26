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
extern unsigned int lbl_821CC160;
extern unsigned int lbl_83297AC4;
extern unsigned int lbl_83297AC8;
extern unsigned int lbl_83297ACC;
extern unsigned int lbl_83297AD0;


uint * fn_825934E8(uint *param_1)

{
  if ((param_1 != (uint *)0x0) && ((*param_1 & 1) != 0)) {
    return param_1 + 1;
  }
  if ((lbl_83297AD0 & 1) != 0) {
    return &lbl_83297AC4;
  }
  lbl_83297AD0 = lbl_83297AD0 | 1;
  lbl_83297AC4 = lbl_821CC160;
  lbl_83297AC8 = lbl_821CC160;
  lbl_83297ACC = lbl_821CC160;
  return &lbl_83297AC4;
}

