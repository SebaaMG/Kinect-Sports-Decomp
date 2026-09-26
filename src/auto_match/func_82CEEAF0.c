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
extern int fn_82CEB1A8();
extern int fn_82CFD4F0();
extern int fn_82CFD5A8();


short fn_82CEEAF0(int param_1)

{
  char *pcVar1;
  short sVar2;
  
  if (*(char *)(param_1 + 0xd) != '\0') {
    pcVar1 = (char *)fn_82CFD4F0();
    if (0 < *(short *)(pcVar1 + 8)) {
      return *(short *)(pcVar1 + 8);
    }
    if (*pcVar1 == '\x19') {
      fn_82CFD5A8(param_1);
      sVar2 = fn_82CEB1A8();
      return sVar2;
    }
  }
  return -1;
}

