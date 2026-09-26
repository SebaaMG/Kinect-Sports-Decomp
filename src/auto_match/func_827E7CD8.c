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
extern unsigned int *auStack_50;
extern int fn_822315A0();
extern int fn_82517978();
extern int fn_827E4480();
extern unsigned int lbl_8201DB60;


undefined4 *
fn_827E7CD8(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
             undefined8 param_5)

{
  undefined4 *puStack0000002c;
  undefined1 auStack_50 [80];
  
  puStack0000002c = param_4;
  fn_82517978(auStack_50,*param_4,param_4[1],0);
  fn_827E4480(param_1,0,0,0xffffffffffffffff,param_2,param_3,auStack_50,param_5);
  param_1[0xc] = 0;
  *param_1 = &lbl_8201DB60;
  if (param_4[1] != 0) {
    fn_822315A0();
  }
  return param_1;
}

