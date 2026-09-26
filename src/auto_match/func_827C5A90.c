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
extern int fn_827C5390();
extern int fn_827C5888();
extern int fn_827C5958();


void fn_827C5A90(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x14c);
  fn_827C5390(param_1,0xd8);
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  if (*(char *)(param_1 + 0xc4) != '\0') {
    fn_827C5888(param_1);
  }
  if (*(char *)(param_1 + 0xcc) != '\0') {
    fn_827C5958(param_1);
  }
  return;
}

