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
extern int fn_82FB01E8();
extern int fn_8302ECF8();
extern int fn_8302ED58();
extern int fn_8302FA48();


void fn_830300B8(undefined8 param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *param_2;
  if (uVar1 < 4) {
    if (uVar1 == 1) {
      fn_8302ED58(param_1,param_2[1],param_2[2]);
    }
    else if (uVar1 == 2) {
      fn_8302ECF8(param_1,param_2[1],param_2[2]);
    }
    else {
      fn_8302FA48(param_1,param_2[1],param_2[2]);
    }
  }
  fn_82FB01E8(param_1,param_2);
  return;
}

