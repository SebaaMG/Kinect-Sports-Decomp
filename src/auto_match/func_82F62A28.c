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
extern int fn_82F641F8();
extern int fn_82F68BF0();
extern int fn_82F68CC0();


undefined4 * fn_82F62A28(undefined4 *param_1,char *param_2)

{
  char cVar1;
  ulonglong uVar2;
  char *pcVar3;
  
  if ((char *)*param_1 != param_2) {
    if ((char *)*param_1 != (char *)0x0) {
      fn_82F641F8();
    }
    *param_1 = 0;
    if (param_2 != (char *)0x0) {
      cVar1 = *param_2;
      pcVar3 = param_2;
      while (cVar1 != '\0') {
        pcVar3 = pcVar3 + 1;
        cVar1 = *pcVar3;
      }
      uVar2 = fn_82F68BF0(pcVar3 + (1 - (int)param_2));
      *param_1 = (int)uVar2;
      if ((uVar2 & 0xffffffff) != 0) {
        fn_82F68CC0(uVar2,param_2,pcVar3 + (1 - (int)param_2));
      }
    }
  }
  return param_1;
}

