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


void fn_82820228(int param_1,uint param_2,int *param_3)

{
  uint uVar1;
  char *pcVar2;
  int iVar3;
  
  if (2 < param_2) {
    param_2 = (uint)*(byte *)(*(int *)(param_1 + 0x28) + param_2 + -3);
    iVar3 = 0;
    if (param_2 == 0) goto code_r0x82820284;
    param_2 = param_2 + 2;
  }
  pcVar2 = (char *)(*(int *)(param_1 + 0x30) + param_2 * 0x1c);
  if (*pcVar2 == '\0') {
    iVar3 = *(int *)(pcVar2 + 8);
  }
  else {
    uVar1 = *(uint *)(pcVar2 + 8);
    if (*(uint *)(pcVar2 + 8) <= *(uint *)(pcVar2 + 0xc)) {
      uVar1 = *(uint *)(pcVar2 + 0xc);
    }
    iVar3 = *(int *)(pcVar2 + 0x14) + uVar1;
  }
code_r0x82820284:
  *param_3 = iVar3;
  return;
}

