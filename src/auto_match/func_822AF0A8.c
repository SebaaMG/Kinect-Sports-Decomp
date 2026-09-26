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
extern int fn_82230110();
extern int fn_82230300();
extern int fn_822AECF8();
extern unsigned int lbl_821AC508;
extern unsigned int lbl_821AC578;


undefined4 * fn_822AF0A8(undefined4 *param_1,int param_2)

{
  undefined1 auStack_40 [40];
  
  *param_1 = &lbl_821AC578;
  fn_82230110(auStack_40,0xffffffff821ac554);
  fn_822AECF8(param_1 + 1,auStack_40);
  param_1[1] = &lbl_821AC508;
  fn_82230300(auStack_40,1,0);
  param_1[0x12] = *(undefined4 *)(param_2 + 0x24);
  param_1[0x13] = *(undefined4 *)(param_2 + 0x28);
  return param_1;
}

