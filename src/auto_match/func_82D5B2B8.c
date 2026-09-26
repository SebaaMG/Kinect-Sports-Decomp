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
extern int fn_82DD8618();


void fn_82D5B2B8(undefined8 param_1,int param_2,short param_3)

{
  int iVar1;
  short *psVar2;
  
  if ((*(byte *)(param_2 + 0xb) & 0x20) == 0) {
    return;
  }
  iVar1 = 0;
  if (*(byte *)(param_2 + 0xe) == 0) {
    return;
  }
  psVar2 = (short *)(param_2 + 0x12);
  do {
    if (*psVar2 == param_3) {
      fn_82DD8618();
      return;
    }
    iVar1 = iVar1 + 1;
    psVar2 = psVar2 + 4;
  } while (iVar1 < (int)(uint)*(byte *)(param_2 + 0xe));
  return;
}

