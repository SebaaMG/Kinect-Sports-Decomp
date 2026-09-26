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
extern unsigned int *auStack_a0;
extern int fn_829E47A8();
extern int fn_829E4B08();
extern int fn_829E4B18();
extern int fn_829E4B20();
extern int fn_829E4BB8();
extern unsigned int lbl_83217B30;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
fn_829DB2D8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 *param_6,undefined8 param_7,undefined8 param_8,
             char param_9)

{
  undefined8 uVar1;
  undefined1 auStack_a0 [160];
  
  fn_829E4BB8(auStack_a0);
  fn_829E4B20(auStack_a0,*param_6,param_6[1],param_6[2],param_6[3]);
  fn_829E4B18(auStack_a0,param_9 == '\0');
  uVar1 = fn_829E47A8(param_1,(((U64)(lbl_83217B30) >> 32) & 0xFFFFFFFF),param_2,param_3,param_4,param_5,auStack_a0);
  fn_829E4B08(auStack_a0);
  return uVar1;
}

