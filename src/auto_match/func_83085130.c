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
extern int fn_83084210();


char * fn_83085130(char *param_1,longlong param_2,int *param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  char cVar2;
  char acStack_40;
  
  *param_1 = '\0';
  if (0 < (int)param_2) {
    do {
      iVar1 = *param_3;
      if ((iVar1 != 0) && (*(int *)(iVar1 + 4) != 0)) {
        fn_83084210(&acStack_40,iVar1,param_4,param_5,param_6);
        if ((*param_1 != '\0') || (cVar2 = '\0', acStack_40 != '\0')) {
          cVar2 = '\x01';
        }
        *param_1 = cVar2;
      }
      param_2 = param_2 + -1;
      param_3 = param_3 + 1;
    } while (param_2 != 0);
  }
  return param_1;
}

