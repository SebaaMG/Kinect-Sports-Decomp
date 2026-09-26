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
extern int fn_82F66A80();
extern int fn_82F6DF30();
extern unsigned int lbl_831BBCA8;


void fn_82F7F500(char *param_1)

{
  char cVar1;
  int iVar2;
  char cVar3;
  
  iVar2 = fn_82F6DF30(*param_1,0);
  if (iVar2 != 0x65) {
    do {
      param_1 = param_1 + 1;
      iVar2 = fn_82F66A80(*param_1);
    } while (iVar2 != 0);
  }
  iVar2 = fn_82F6DF30(*param_1);
  if (iVar2 == 0x78) {
    param_1 = param_1 + 2;
  }
  cVar3 = *param_1;
  *param_1 = *(char *)**(undefined4 **)(lbl_831BBCA8 + 0xbc);
  do {
    cVar1 = param_1[1];
    param_1[1] = cVar3;
    param_1 = param_1 + 1;
    cVar3 = cVar1;
  } while (*param_1 != '\0');
  return;
}

