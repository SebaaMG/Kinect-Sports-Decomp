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
extern unsigned int lbl_8326B37C;
extern unsigned int lbl_8326B390;
extern unsigned int lbl_8328227C;
extern unsigned int lbl_83282280;
extern unsigned int lbl_83282288;
extern unsigned int lbl_8328228C;


undefined4 fn_825C7348(longlong param_1)

{
  bool bVar1;
  
  bVar1 = (int)param_1 != 0;
  if (param_1 == 1 && bVar1) {
    return lbl_8326B390;
  }
  if (param_1 != 2 || !bVar1) {
    if (param_1 == 3 && bVar1) {
      return lbl_8326B390;
    }
    if (param_1 == 4 && bVar1) {
      return lbl_8328227C;
    }
    if (param_1 == 5 && bVar1) {
      return lbl_83282280;
    }
    if (param_1 == 6 && bVar1) {
      return lbl_83282288;
    }
    if (bVar1) {
      return lbl_8328228C;
    }
  }
  return lbl_8326B37C;
}

