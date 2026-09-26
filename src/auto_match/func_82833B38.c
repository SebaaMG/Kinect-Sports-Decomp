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
extern unsigned int *auStack_c;
extern int fn_82834DF0();
extern unsigned int iStack_10;


void fn_82833B38(int param_1,int param_2)

{
  int iStack_10;
  undefined1 auStack_c [12];
  
  if ((*(int *)(param_2 + 0x10) != 0) && (*(int *)(param_2 + 0x10) == *(int *)(param_1 + 0x2c8))) {
    iStack_10 = param_2;
    fn_82834DF0(auStack_c,*(undefined4 *)(param_1 + 0x340),&iStack_10);
  }
  return;
}

