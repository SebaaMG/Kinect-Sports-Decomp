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
extern int fn_82D78288();


void fn_82D67D58(int param_1,int param_2,short param_3)

{
  int iVar1;
  short *psVar2;
  
  iVar1 = 0;
  if (*(byte *)(param_2 + 0x21) != 0) {
    psVar2 = (short *)(param_2 + 2);
    while (*psVar2 != param_3) {
      iVar1 = iVar1 + 1;
      psVar2 = psVar2 + 2;
      if ((int)(uint)*(byte *)(param_2 + 0x21) <= iVar1) {
        return;
      }
    }
    fn_82D78288();
    *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + -1;
  }
  return;
}

