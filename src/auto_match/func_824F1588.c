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
extern int fn_82522D98();
extern int fn_82CE0C20();
extern unsigned int iStack_60;
extern unsigned int lbl_821C1A4C;


undefined4 * fn_824F1588(undefined4 *param_1,undefined4 *param_2)

{
  int iStack_60;
  int aiStack_5c [23];
  
  param_1[1] = param_2;
  *param_1 = &lbl_821C1A4C;
  if (param_2 == (undefined4 *)0x0) {
    param_1[2] = 0;
  }
  else {
    param_1[2] = *param_2;
  }
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  fn_82CE0C20(0,0,10,&iStack_60,aiStack_5c);
  if ((aiStack_5c[0] != 0) && (iStack_60 != 0)) {
                    /* WARNING: Subroutine does not return */
    fn_82522D98();
  }
  return param_1;
}

