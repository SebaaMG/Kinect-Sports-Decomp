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
extern unsigned int *auStack_70;
extern unsigned int *auStack_90;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_8232DEA0();
extern unsigned int lbl_821A8D8C;


undefined4 *
fn_82326FC8(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 *param_6,undefined4 *param_7,undefined4 *param_8)

{
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [112];
  
  param_1[1] = 1;
  *param_1 = &lbl_821A8D8C;
  param_1[2] = 1;
  if (param_1 + 4 != (undefined4 *)0x0) {
    fn_82230110(auStack_70,param_5);
    fn_82230110(auStack_90,param_2);
    fn_8232DEA0(param_1 + 4,auStack_90,param_3,param_4,auStack_70,*param_6,*param_7,*param_8);
    fn_82230300(auStack_90,1,0);
    fn_82230300(auStack_70,1,0);
  }
  return param_1;
}

