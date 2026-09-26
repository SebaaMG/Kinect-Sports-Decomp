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
extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern int fn_82811438();
extern unsigned int lbl_83156AA0;


void fn_827DDBF8(undefined8 param_1,undefined8 param_2)

{
  undefined4 auStack_40 [4];
  undefined1 auStack_30 [32];
  
  auStack_40[0] = 3;
  fn_82811438(auStack_30,auStack_40,0x10);
  (**(code **)(*(int *)lbl_83156AA0 + 0x18))(lbl_83156AA0,param_2,auStack_30);
  return;
}

