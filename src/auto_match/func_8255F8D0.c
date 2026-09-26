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
extern unsigned int *auStack_140;
extern int fn_82522D98();
extern int fn_827F9C98();
extern int fn_827FA000();


void fn_8255F8D0(int param_1)

{
  longlong lVar1;
  undefined1 auStack_140 [320];
  
  fn_827FA000(auStack_140,*(undefined4 *)(param_1 + 4));
  lVar1 = fn_827F9C98(auStack_140);
                    /* WARNING: Subroutine does not return */
  fn_82522D98(lVar1 + 0x200);
}

