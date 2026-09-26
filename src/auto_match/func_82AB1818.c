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
extern int (*lbl_83223C58)();
extern unsigned int lbl_83223C5C;
extern unsigned int lbl_83223C60;
extern unsigned int lbl_83223C64;


undefined8 fn_82AB1818(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (lbl_83223C58 == (code *)0x0) {
    return uVar1;
  }
  if (lbl_83223C60 == 0) {
    return uVar1;
  }
  if (lbl_83223C5C == 0) {
    return uVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x82ab1864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*lbl_83223C58)(lbl_83223C64,param_1,2);
  return uVar1;
}

