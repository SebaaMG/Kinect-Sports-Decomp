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
extern int fn_826829A0();
extern int fn_8268D758();
extern int fn_826B14D8();
extern int fn_826C0B08();
extern unsigned int lbl_82012A64;
extern unsigned int lbl_82012CB8;


undefined4 * fn_82749410(undefined4 *param_1,int param_2)

{
  undefined8 uVar1;
  
  fn_826C0B08();
  *param_1 = &lbl_82012A64;
  param_1[4] = &lbl_82012CB8;
  fn_8268D758(param_1 + 0xc);
  uVar1 = fn_826B14D8(*(undefined4 *)(param_2 + 0x78),0x10);
  fn_826829A0(param_1 + 4,param_2 + 0x78,uVar1);
  return param_1;
}

