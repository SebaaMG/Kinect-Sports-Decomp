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
extern unsigned int *auStack_20;
extern int fn_8288C2E0();
extern int fn_828B22F0();
extern int fn_828BDB28();


undefined4 * fn_828CD7B8(undefined4 *param_1,undefined4 *param_2)

{
  undefined1 auStack_20 [8];
  
  fn_8288C2E0(param_1,auStack_20);
  if (param_1 != param_2) {
    fn_828B22F0(param_1);
    if (param_2[1] != 0) {
      fn_828BDB28(param_1,*(undefined4 *)*param_1,param_2,*(undefined4 *)*param_2);
    }
  }
  return param_1;
}

