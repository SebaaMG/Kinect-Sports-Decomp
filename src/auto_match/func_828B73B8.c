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
extern int fn_82230360();
extern int fn_828C0038();
extern int fn_828C0068();
extern unsigned int lbl_8200DFF4;


longlong fn_828B73B8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  double dVar4;
  
  dVar4 = (double)fn_828C0038(6);
  pcVar2 = (char *)fn_828C0068(6);
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  fn_82230360(param_2,pcVar2,pcVar3 + (-1 - (int)pcVar2));
  return (longlong)(dVar4 * (double)lbl_8200DFF4);
}

