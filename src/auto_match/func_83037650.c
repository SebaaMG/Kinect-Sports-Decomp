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
extern int fn_83009F28();
extern int fn_83009FC0();
extern unsigned int iStack_1c;
extern unsigned int iStack_20;


void fn_83037650(int param_1)

{
  int iVar1;
  int iStack_20;
  int iStack_1c;
  
  iStack_20 = 0;
  iStack_1c = 0;
  iVar1 = XNotifyGetNext(*(undefined4 *)(param_1 + 4),0xa000003,&iStack_20,&iStack_1c);
  if (iVar1 != 0) {
    if (iStack_20 == 0xa000003 && iStack_1c != 0) {
      fn_83009FC0();
    }
    else {
      fn_83009F28();
    }
  }
  return;
}

