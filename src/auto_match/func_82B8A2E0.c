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
extern int fn_82B86888();
extern unsigned int lbl_821AAD20;
extern unsigned int uStack0000001c;
extern unsigned int uStack_14;
extern unsigned int uStack_18;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_82B8A2E0(undefined8 param_1,undefined4 param_2,char param_3)

{
  undefined4 uStack0000001c;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_1c = lbl_821AAD20;
  uStack_18 = lbl_821AAD20;
  uStack_14 = lbl_821AAD20;
  uStack0000001c = param_2;
  uStack_20 = param_2;
  fn_82B86888(param_1,1,&uStack_20,(param_3 == '\0') + '\x01');
  return;
}

