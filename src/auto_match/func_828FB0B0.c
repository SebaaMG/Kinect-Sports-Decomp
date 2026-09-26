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
extern int fn_82F66AA0();


int fn_828FB0B0(int param_1,char *param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  
  pcVar4 = param_2 + 2;
  if ((((pcVar4 < *(char **)(param_1 + 4)) && (*param_2 == '0')) && (param_2[1] == 'x')) &&
     (iVar2 = fn_82F66AA0(*pcVar4), iVar2 != 0)) {
    iVar2 = 0;
    while ((pcVar4 < *(char **)(param_1 + 4) && (iVar3 = fn_82F66AA0(*pcVar4), iVar3 != 0))) {
      cVar1 = *pcVar4;
      if (cVar1 < 'a') {
        iVar3 = (int)cVar1 + iVar2 * 0x10;
        iVar2 = iVar3 + -0x37;
        if (cVar1 < 'A') {
          iVar2 = iVar3 + -0x30;
        }
      }
      else {
        iVar2 = (int)cVar1 + iVar2 * 0x10 + -0x57;
      }
      pcVar4 = pcVar4 + 1;
    }
    if (param_3 != (int *)0x0) {
      *param_3 = iVar2;
    }
    iVar2 = (int)pcVar4 - (int)param_2;
    if (10 < iVar2) {
      fn_828FA8D8(*(undefined4 *)(param_1 + 0x30),param_1 + 8,0x3ea,0xffffffff8202991c);
    }
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}

