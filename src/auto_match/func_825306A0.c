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
extern int fn_82530948();
extern int fn_82531118();
extern int fn_825315E0();
extern unsigned int lbl_8320A898;
extern unsigned int lbl_83296BAC;
extern unsigned int lbl_83296BB0;
extern unsigned int lbl_83296BB4;
extern unsigned int lbl_83296BB8;
extern unsigned int lbl_83296BBC;


void fn_825306A0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = lbl_8320A898;
  if (param_1 == 0) {
    if (lbl_83296BAC != 0) {
      lbl_83296BAC = 0;
      lbl_83296BBC = 1;
      lbl_83296BB0 = 1;
      lbl_83296BB4 = 1;
      fn_82530948(lbl_8320A898);
      fn_825315E0(uVar1);
      fn_82531118();
    }
  }
  else if (param_1 == 1) {
    lbl_83296BB8 = 1;
    fn_825315E0(lbl_8320A898);
  }
  return;
}

