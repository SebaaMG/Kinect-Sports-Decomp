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
extern int fn_828F6FA8();


undefined8 fn_82964BB0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  ulonglong uVar5;
  char *pcVar6;
  char acStack_60 [96];
  
  uVar5 = 0x40;
  pcVar6 = acStack_60;
  pcVar4 = *(char **)(*(int *)(param_2 + 0x68) + 0x18);
  do {
    if (*pcVar4 == '\0') break;
    *pcVar6 = *pcVar4;
    uVar5 = uVar5 - 1;
    pcVar6 = pcVar6 + 1;
    pcVar4 = pcVar4 + 1;
  } while (uVar5 != 0);
  if ((uVar5 & 0xffffffff) == 0) {
    pcVar6 = pcVar6 + -1;
  }
  iVar1 = *(int *)(param_2 + 4);
  iVar2 = *(int *)(param_1 + 0x10);
  *pcVar6 = '\0';
  uVar3 = 0xffffffff820116b4;
  if ((*(uint *)(*(int *)(iVar1 * 4 + iVar2) + 4) & 0x20) != 0) {
    uVar3 = 0xffffffff82038790;
  }
  fn_828F6FA8(param_3,param_4,0xffffffff82038798,uVar3,acStack_60);
  *(undefined1 *)(param_3 + param_4 + -1) = 0;
  return 0;
}

