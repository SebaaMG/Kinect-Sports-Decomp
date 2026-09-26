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
extern int fn_82F664B0();
extern int fn_82F68BF0();
extern unsigned int lbl_820014D4;


undefined4 * fn_8265BDD0(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  char *pcVar2;
  ulonglong uVar3;
  char *pcVar4;
  int iVar5;
  
  param_1[1] = 0;
  *param_1 = &lbl_820014D4;
  *(undefined1 *)(param_1 + 2) = 0;
  pcVar2 = (char *)*param_2;
  pcVar4 = pcVar2;
  if (pcVar2 != (char *)0x0) {
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    iVar5 = (int)pcVar4 - (int)pcVar2;
    uVar3 = fn_82F68BF0(iVar5);
    param_1[1] = (int)uVar3;
    if ((uVar3 & 0xffffffff) != 0) {
      fn_82F664B0(uVar3,iVar5,pcVar2);
      *(undefined1 *)(param_1 + 2) = 1;
    }
  }
  return param_1;
}

