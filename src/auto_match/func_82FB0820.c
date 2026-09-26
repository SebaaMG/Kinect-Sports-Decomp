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
extern int fn_83007620();
extern int fn_83008F08();


undefined8 fn_82FB0820(int param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar2;
  undefined8 uVar1;
  
  cVar2 = fn_83007620();
  if (cVar2 == '\0') {
    if ((*(int *)(param_1 + 0x14) != 0) &&
       (cVar2 = fn_83008F08(*(int *)(param_1 + 0x14),param_2,param_3), cVar2 != '\0')) {
      return 1;
    }
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

