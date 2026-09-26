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
extern int fn_82897B20();
extern int fn_82899B38();
extern int fn_82899D60();
extern int fn_8289AAC0();
extern int fn_8289C538();
extern int fn_8289C640();
extern int fn_8289C7B0();


void fn_8289CAA0(int param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = fn_82897B20(*(undefined4 *)(param_1 + 0x18));
  if (iVar1 == 1) {
    if (param_3 == '\0') {
      fn_8289C538(param_1,*(undefined1 *)(param_2 + 0x26),param_2);
    }
    else {
      fn_8289AAC0();
    }
  }
  else if (iVar1 == 2) {
    if (param_3 == '\0') {
      fn_8289C640(param_1,*(char *)(param_2 + 0x26) == '\0',param_2);
    }
    else {
      fn_82899B38();
    }
  }
  else if (iVar1 == 3) {
    if (param_3 == '\0') {
      fn_8289C7B0(param_1,*(undefined1 *)(param_2 + 0x26),param_2);
    }
    else {
      fn_82899D60();
    }
  }
  return;
}

