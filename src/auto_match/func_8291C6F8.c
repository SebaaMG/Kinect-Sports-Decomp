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
extern int fn_82F672D8();


ulonglong fn_8291C6F8(int param_1,char *param_2,char *param_3)

{
  char cVar1;
  ulonglong uVar2;
  char *pcVar3;
  
  if (param_2 < (char *)0x80000000) {
    fn_82F672D8(param_1,param_3,param_2);
    param_2[param_1 + -1] = '\0';
    pcVar3 = param_3;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    uVar2 = -(ulonglong)(param_2 <= pcVar3 + (-1 - (int)param_3)) & 0xffffffff8007007a;
  }
  else {
    uVar2 = 0xffffffff80070057;
  }
  return uVar2;
}

