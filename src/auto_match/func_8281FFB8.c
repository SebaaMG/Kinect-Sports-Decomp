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


void fn_8281FFB8(int param_1,int *param_2)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  
  if ((*(uint *)(param_1 + 0x10) & 1) == 0) {
    *param_2 = 0;
    return;
  }
  uVar3 = 0;
  *param_2 = 0;
  uVar7 = (uint)*(byte *)(*(int *)(param_1 + 0x1c) + 0x51);
  if (uVar7 != 0) {
    do {
      pcVar5 = (char *)(*(int *)(*(int *)(param_1 + 0x30) + uVar3 * 0x21) + *(int *)(param_1 + 0x34)
                       );
      pcVar4 = ".data";
      if (*pcVar5 != '\0') {
        do {
          cVar1 = *pcVar5;
          cVar2 = *pcVar4;
          if (cVar1 == '\0') break;
          pcVar5 = pcVar5 + 1;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 == cVar2);
        if (cVar1 == cVar2) {
          iVar6 = *(int *)(param_1 + 0x30) + uVar3 * 0x21;
          *param_2 = *(int *)(iVar6 + 0x11) + *(int *)(iVar6 + 0xd);
          return;
        }
      }
      uVar3 = uVar3 + 1 & 0xff;
    } while (uVar3 < uVar7);
  }
  return;
}

