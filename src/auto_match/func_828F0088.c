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
extern int fn_82F65390();


char * fn_828F0088(char *param_1,ulonglong param_2)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  
  pcVar1 = param_1;
  if (*param_1 == 'v') {
    do {
      pcVar3 = pcVar1;
      pcVar1 = pcVar3 + 1;
    } while (*pcVar3 != '\0');
    if (3 < (int)pcVar3 - (int)param_1) {
      iVar2 = fn_82F65390(pcVar3 + -3,0xffffffff820279fc,3);
      if (iVar2 == 0) {
        return "vs_3_swx";
      }
      iVar2 = fn_82F65390(pcVar3 + -3,0xffffffff820279f8,3);
      if (iVar2 == 0) {
        return "vs_3_xps";
      }
    }
  }
  if ((param_2 & 0x100000) == 0) {
    if (*param_1 == 'v') {
      param_1 = "vs_3_0";
    }
    else if (*param_1 == 'p') {
      param_1 = "ps_3_0";
    }
  }
  return param_1;
}

