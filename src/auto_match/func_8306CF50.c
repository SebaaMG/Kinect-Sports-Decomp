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
extern int fn_8265C990();
extern int fn_8306D168();
extern unsigned int lbl_8217EB38;
extern unsigned int lbl_8217EB64;
extern unsigned int lbl_821B9BC8;


void fn_8306CF50(undefined4 *param_1)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)(uint)param_1[0x6c8];
  *param_1 = &lbl_8217EB64;
  param_1[2] = &lbl_8217EB38;
  if (uVar1 != 0) {
    fn_8306D168(uVar1 + 0x7110);
    fn_8265C990(uVar1,0x20980000);
    param_1[0x6c8] = 0;
  }
  *param_1 = &lbl_821B9BC8;
  return;
}

