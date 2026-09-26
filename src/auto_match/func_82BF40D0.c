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
extern int fn_82BE8D28();
extern int fn_82BEC880();
extern unsigned int lbl_820EB804;


undefined4 * fn_82BF40D0(undefined4 *param_1)

{
  int in_r7;
  
  fn_82BEC880();
  param_1[0x15] = in_r7;
  *param_1 = &lbl_820EB804;
  if (in_r7 != 0) {
    fn_82BE8D28(*(int *)(*(int *)(in_r7 + 4) + 4) + in_r7 + 4);
  }
  return param_1;
}

