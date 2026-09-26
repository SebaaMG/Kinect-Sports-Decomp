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
extern int fn_82773B90();


undefined8 fn_827A86A8(int param_1,int param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = fn_82773B90();
  if ((((cVar1 == '\0') || (cVar1 = fn_82773B90(param_1 + 0xc,param_2 + 0xc), cVar1 == '\0')) ||
      (*(int *)(param_1 + 0x18) != *(int *)(param_2 + 0x18))) ||
     ((*(short *)(param_1 + 0x1c) != *(short *)(param_2 + 0x1c) ||
      (uVar2 = 1, *(short *)(param_1 + 0x1e) != *(short *)(param_2 + 0x1e))))) {
    uVar2 = 0;
  }
  return uVar2;
}

