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
extern int fn_8305D500();
extern unsigned int lbl_8217E6A0;
extern unsigned int uStack_18;


undefined4 fn_8305CD20(int param_1)

{
  undefined **appuStack_20 [2];
  undefined4 uStack_18;
  
  uStack_18 = 0;
  appuStack_20[0] = &lbl_8217E6A0;
  fn_8305D500(appuStack_20,*(undefined4 *)(param_1 + 4));
  return uStack_18;
}

