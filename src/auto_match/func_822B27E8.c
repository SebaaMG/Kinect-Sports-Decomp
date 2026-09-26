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
extern int fn_82230300();
extern int fn_8223DEF8();
extern int fn_8223DFF0();
extern int fn_822B2888();


undefined8 fn_822B27E8(undefined8 param_1,int param_2,char *param_3)

{
  char cVar1;
  char *pcVar2;
  
  fn_82230300(param_1,0,0);
  pcVar2 = param_3;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  fn_822B2888(param_1,pcVar2 + *(int *)(param_2 + 0x10) + (-1 - (int)param_3));
  fn_8223DEF8(param_1,param_2,0,0xffffffffffffffff);
  pcVar2 = param_3;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  fn_8223DFF0(param_1,param_3,pcVar2 + (-1 - (int)param_3));
  return param_1;
}

