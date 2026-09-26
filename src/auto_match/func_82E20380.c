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
extern int fn_82E1F690();
extern int fn_82F64068();
extern int fn_8306C4F8();
extern unsigned int uStack_23;
extern unsigned int uStack_48;
extern unsigned int uStack_4a;
extern unsigned int uStack_4e;
extern unsigned int uStack_50;


void fn_82E20380(void)

{
  undefined2 uStack_50;
  undefined2 uStack_4e;
  undefined2 uStack_4a;
  undefined2 uStack_48;
  undefined1 auStack_40 [29];
  undefined1 uStack_23;
  
  fn_8306C4F8(&uStack_50);
  fn_82F64068(auStack_40,0x1e,0x1d,0xffffffff8214bb54,uStack_4e,uStack_4a,uStack_50,uStack_48)
  ;
  uStack_23 = 0;
  fn_82E1F690(auStack_40);
  return;
}

