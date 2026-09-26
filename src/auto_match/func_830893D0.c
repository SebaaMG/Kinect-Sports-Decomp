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
extern int fn_82CE8268();
extern int fn_83099580();
extern int fn_830996D0();
extern int fn_830997F8();
extern int fn_83099E28();
extern int fn_8309A490();
extern int fn_8309A540();
extern int fn_8309A9C8();
extern unsigned int lbl_832656F0;
extern unsigned int lbl_832656F4;
extern unsigned int lbl_832656F8;
extern unsigned int lbl_832656FC;
extern unsigned int lbl_83265700;
extern unsigned int lbl_83265704;
extern unsigned int lbl_83265708;


void fn_830893D0(undefined8 param_1)

{
  lbl_832656FC = fn_8309A9C8;
  lbl_832656F0 = fn_8309A540;
  lbl_832656F4 = fn_8309A490;
  lbl_83265700 = fn_83099E28;
  lbl_832656F8 = fn_830997F8;
  lbl_83265704 = fn_830996D0;
  lbl_83265708 = fn_83099580;
  fn_82CE8268(param_1,2,0x832656f000000007,0x8308926083089070);
  return;
}

