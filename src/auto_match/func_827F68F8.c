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


void fn_827F68F8(int param_1,undefined4 param_2,undefined4 param_3,short *param_4,uint param_5)

{
  short *psVar1;
  int iVar2;
  
  if ((param_4 != (short *)0x0) && (*param_4 != -1)) {
    iVar2 = 0;
    psVar1 = param_4;
    if ((param_5 & 0xffff) != 0) {
      do {
        if (psVar1[1] == -1) break;
        iVar2 = iVar2 + 1;
        psVar1 = psVar1 + 1;
      } while (iVar2 < (int)(param_5 & 0xffff));
    }
  }
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = param_3;
  *(short **)(param_1 + 0x28) = param_4;
  return;
}

