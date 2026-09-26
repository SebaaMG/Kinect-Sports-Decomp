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
extern int fn_8224EE50();
extern int fn_82511350();
extern int fn_8288BEC0();
extern int fn_8288C2E0();
extern int fn_8288C420();
extern int fn_8288C4B0();
extern int fn_828A2240();
extern int fn_828C61B8();
extern int fn_828C92E8();
extern unsigned int lbl_8202396C;


undefined4 * fn_82897318(undefined4 *param_1,undefined4 param_2)

{
  undefined1 auStack_30;
  
  *param_1 = &lbl_8202396C;
  fn_8224EE50(param_1 + 1,&auStack_30,&auStack_30);
  fn_8288C4B0(param_1 + 5,&auStack_30,&auStack_30);
  fn_8224EE50(param_1 + 9,&auStack_30,&auStack_30);
  fn_8288C4B0(param_1 + 0xd,&auStack_30,&auStack_30);
  fn_8288C2E0(param_1 + 0x11,&auStack_30);
  fn_8288C2E0(param_1 + 0x14,&auStack_30);
  fn_828C92E8(param_1 + 0x17,&auStack_30,&auStack_30);
  fn_828A2240(param_1 + 0x1b,&auStack_30,&auStack_30);
  fn_8288BEC0(param_1 + 0x1f,&auStack_30,auStack_30);
  *(undefined1 *)(param_1 + 0x24) = 0;
  fn_8288C420(param_1 + 0x25,&auStack_30,&auStack_30);
  fn_828C61B8(param_1 + 0x29);
  fn_82511350(param_1 + 0x30,&auStack_30,&auStack_30);
  param_1[0x35] = param_2;
  *(undefined1 *)(param_1 + 0x34) = 0;
  return param_1;
}

