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
extern int fn_82F66A80();


int fn_828FB270(int param_1,char *param_2,uint *param_3)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  
  if ((param_2 < *(char **)(param_1 + 4)) && (iVar3 = fn_82F66A80(*param_2), iVar3 != 0)) {
    uVar6 = 0;
    bVar1 = false;
    uVar4 = 0;
    pcVar5 = param_2;
    bVar2 = false;
    if (param_2 < *(char **)(param_1 + 4)) {
      do {
        bVar1 = bVar2;
        uVar6 = uVar4;
        iVar3 = fn_82F66A80(*pcVar5);
        if (iVar3 == 0) break;
        if (0x19999999 < uVar6) {
          bVar1 = true;
        }
        uVar4 = uVar6 * 10;
        uVar6 = ((int)*pcVar5 + uVar4) - 0x30;
        if (uVar6 < uVar4) {
          bVar1 = true;
        }
        pcVar5 = pcVar5 + 1;
        uVar4 = uVar6;
        bVar2 = bVar1;
      } while (pcVar5 < *(char **)(param_1 + 4));
    }
    if (param_3 != (uint *)0x0) {
      *param_3 = uVar6;
    }
    if (bVar1) {
      fn_828FA8D8(*(undefined4 *)(param_1 + 0x30),param_1 + 8,0x3ec,0xffffffff8202995c);
    }
    iVar3 = (int)pcVar5 - (int)param_2;
  }
  else {
    iVar3 = 0;
  }
  return iVar3;
}

