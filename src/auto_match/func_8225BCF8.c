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
extern int fn_822315A0();
extern int fn_827D5070();
extern int fn_827D5088();
extern int fn_827D50B8();


void fn_8225BCF8(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_827D50B8(*param_1);
  param_2[7] = iVar1;
  if (iVar1 == 0) {
    uVar2 = fn_827D5070(*param_1);
    param_2[2] = uVar2;
    uVar2 = fn_827D5088(*param_1);
    param_2[3] = uVar2;
  }
  else {
    param_2[2] = 0;
    param_2[3] = 0;
  }
  sync(1);
  *param_2 = 1;
  if (param_1[1] != 0) {
    fn_822315A0();
  }
  return;
}

