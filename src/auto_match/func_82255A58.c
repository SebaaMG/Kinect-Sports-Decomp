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
extern int fn_8223C200();
extern int fn_8223C478();
extern int fn_828E9DB8();


void fn_82255A58(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(param_4 + 8);
  if (4 < *(uint *)(param_4 + 0xc)) {
    pcVar2 = *(char **)(param_4 + 8);
  }
  cVar1 = *pcVar2;
  fn_8223C200(param_3,cVar1 == '\0',0);
  if (cVar1 != '\0') {
    fn_8223C478(param_3,3,0);
    fn_828E9DB8(param_3,cVar1,3);
  }
  return;
}

