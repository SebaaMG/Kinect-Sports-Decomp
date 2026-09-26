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
extern unsigned int *auStack_40;
extern unsigned int *auStack_58;
extern unsigned int *auStack_60;
extern int fn_828E6358();
extern int fn_828E6658();
extern int fn_828E68F8();


uint * fn_828E7BA8(uint *param_1)

{
  uint auStack_60 [2];
  undefined1 auStack_58 [24];
  undefined4 auStack_40 [10];
  
  auStack_60[0] = 0;
  fn_828E68F8(auStack_60);
  if (param_1 != auStack_60) {
    auStack_40[0] = 0;
    fn_828E6658(auStack_40,auStack_60);
    fn_828E6658(auStack_60,param_1);
    fn_828E6658(param_1,auStack_40);
    fn_828E6358(auStack_40);
  }
  if (((auStack_60[0] != 0) && ((auStack_60[0] & 1) == 0)) &&
     (*(code **)(auStack_60[0] & 0xfffffffe) != (code *)0x0)) {
    (**(code **)(auStack_60[0] & 0xfffffffe))(auStack_58,auStack_58,2);
  }
  return param_1;
}

