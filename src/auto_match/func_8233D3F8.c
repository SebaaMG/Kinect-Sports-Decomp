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
extern unsigned int *auStack_60;
extern unsigned int *auStack_80;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_822FB670();
extern unsigned int lbl_821AD588;


undefined4 *
fn_8233D3F8(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 *param_6)

{
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [96];
  
  param_1[1] = 1;
  *param_1 = &lbl_821AD588;
  param_1[2] = 1;
  if (param_1 + 3 != (undefined4 *)0x0) {
    fn_82230110(auStack_60,param_5);
    fn_82230110(auStack_80,param_2);
    fn_822FB670(param_1 + 3,auStack_80,param_3,param_4,auStack_60,*param_6);
    fn_82230300(auStack_80,1,0);
    fn_82230300(auStack_60,1,0);
  }
  return param_1;
}

