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
extern int fn_82D40318();
extern int fn_82D40398();
extern int fn_82D40420();
extern int fn_82D58748();
extern int fn_82D6AAB0();
extern int fn_82D6B470();
extern int fn_82D6CAD0();
extern int fn_82D6D6B8();
extern int fn_82D6EC40();
extern int fn_82D6F0A0();
extern unsigned int uStack_20;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_82D404C8(undefined8 param_1)

{
  undefined1 uStack_20;
  
  fn_82D6F0A0();
  fn_82D6EC40(param_1);
  fn_82D6D6B8(param_1);
  fn_82D40318(param_1);
  fn_82D58748(param_1,uStack_20);
  fn_82D6CAD0(param_1);
  fn_82D58748(param_1,1);
  fn_82D40398(param_1);
  fn_82D6B470(param_1);
  fn_82D6AAB0(param_1);
  fn_82D40420(param_1);
  return;
}

