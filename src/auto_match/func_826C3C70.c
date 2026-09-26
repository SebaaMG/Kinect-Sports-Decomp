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
extern int fn_826BF638();
extern int fn_826C2928();
extern unsigned int lbl_8200B88C;
extern unsigned int lbl_8200B890;
extern unsigned int lbl_8200B8E4;


undefined4 *
fn_826C3C70(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             char param_5)

{
  undefined1 auStack_30 [48];
  
  fn_826C2928();
  *param_1 = &lbl_8200B8E4;
  param_1[4] = &lbl_8200B890;
  param_1[0xc] = &lbl_8200B88C;
  if (param_5 != '\0') {
    auStack_30[0] = 1;
    fn_826BF638(param_1 + 0xc,param_1,param_2,0xffffffff8200b734,auStack_30);
  }
  return param_1;
}

