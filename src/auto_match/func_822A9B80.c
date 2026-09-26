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
extern int fn_828EA5F8();
extern int fn_828EA600();
extern int fn_828EA608();
extern unsigned int lbl_83265988;


int fn_822A9B80(void)

{
  int iVar1;
  char cVar2;
  
  iVar1 = lbl_83265988;
  if ((((lbl_83265988 != 0) && (cVar2 = fn_828EA608(lbl_83265988), cVar2 != '\0')) &&
      (cVar2 = fn_828EA5F8(iVar1), cVar2 != '\0')) && (cVar2 = fn_828EA600(iVar1), cVar2 == '\0'))
  {
    return iVar1;
  }
  return 0;
}

