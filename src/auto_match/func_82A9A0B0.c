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


void fn_82A9A0B0(int param_1,char *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x18);
  if (-1 < *(int *)(param_1 + 0xc)) {
    pcVar4 = param_2 + param_3;
    pcVar3 = (char *)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x18));
    for (; param_2 < pcVar4; param_2 = param_2 + 1) {
      cVar1 = *param_2;
      if (cVar1 == '<') {
        if (iVar2 < 4) goto LAB_82a9a1a0;
        cVar1 = 'l';
LAB_82a9a108:
        *pcVar3 = '&';
        iVar2 = iVar2 + -4;
        pcVar3[1] = cVar1;
        pcVar3 = pcVar3 + 2;
        *pcVar3 = 't';
LAB_82a9a118:
        pcVar3 = pcVar3 + 1;
        *pcVar3 = ';';
      }
      else {
        if (cVar1 == '>') {
          if (iVar2 < 4) goto LAB_82a9a1a0;
          cVar1 = 'g';
          goto LAB_82a9a108;
        }
        if (cVar1 == '&') {
          if (iVar2 < 5) goto LAB_82a9a1a0;
          builtin_strncpy(pcVar3,"&amp",4);
          iVar2 = iVar2 + -5;
          pcVar3 = pcVar3 + 3;
          goto LAB_82a9a118;
        }
        if (iVar2 < 1) {
LAB_82a9a1a0:
          *(undefined4 *)(param_1 + 0xc) = 0x80004005;
          return;
        }
        *pcVar3 = cVar1;
        iVar2 = iVar2 + -1;
      }
      pcVar3 = pcVar3 + 1;
    }
  }
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x14) - iVar2;
  return;
}

