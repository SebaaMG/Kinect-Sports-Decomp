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
extern int fn_828FA8D8();


int fn_828FB1A0(int param_1,char *param_2,uint *param_3)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  char *pcVar5;
  
  if ((param_2 < *(char **)(param_1 + 4)) && (*param_2 == '0')) {
    uVar4 = 0;
    bVar3 = false;
    pcVar5 = param_2;
    while( true ) {
      pcVar5 = pcVar5 + 1;
      if (*(char **)(param_1 + 4) <= pcVar5) break;
      cVar1 = *pcVar5;
      if ((cVar1 < '0') || ('7' < cVar1)) break;
      if ((uVar4 & 0xe0000000) != 0) {
        bVar3 = true;
      }
      uVar4 = (uVar4 * 8 + (int)cVar1) - 0x30;
    }
    if (param_3 != (uint *)0x0) {
      *param_3 = uVar4;
    }
    if (bVar3) {
      fn_828FA8D8(*(undefined4 *)(param_1 + 0x30),param_1 + 8,0x3eb,0xffffffff8202993c);
    }
    iVar2 = (int)pcVar5 - (int)param_2;
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}

