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
extern int fn_82E09080();
extern int fn_83082708();
extern unsigned int *lbl_832654E4;
extern unsigned int lbl_832654E8;
extern unsigned int lbl_832654EC;


void fn_82E09228(void)

{
  (**(code **)(*lbl_832654E4 + 0x24))(lbl_832654E4,0xffffffff8323fda0);
  fn_82E09080(lbl_832654E8,0xffffffff82193fa8);
  fn_83082708(lbl_832654EC,0xffffffff82193fa8,0xffffffff821944e8);
  return;
}

