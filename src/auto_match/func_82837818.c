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
extern int fn_8262FE50();
extern int fn_8263A820();
extern unsigned int lbl_8320A898;
extern unsigned int lbl_8320A8A4;
extern unsigned int lbl_8320A8B4;


void fn_82837818(undefined4 *param_1)

{
  undefined4 uVar1;
  
  if (lbl_8320A8B4 == 0) {
    uVar1 = fn_8263A820(lbl_8320A898);
    *param_1 = uVar1;
  }
  else {
    *param_1 = lbl_8320A8A4;
    fn_8262FE50(lbl_8320A8A4);
  }
  return;
}

