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
extern int fn_82822510();
extern int fn_82827390();
extern unsigned int uStack_30;


void fn_82827470(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uStack_30;
  int aiStack_2c [11];
  
  uStack_30 = param_2;
  fn_82822510(param_1 + 0x2fc,0xffffffff828278f8,&uStack_30,aiStack_2c);
  fn_82827390(param_1,*(undefined4 *)(aiStack_2c[0] + 0x10),param_3,param_4);
  return;
}

