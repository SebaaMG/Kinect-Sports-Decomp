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
extern unsigned int *auStack_30;
extern int fn_82D6F590();
extern unsigned int lbl_83182A98;


longlong fn_82D4D858(int param_1)

{
  char *pcVar1;
  ulonglong uVar2;
  uint *puVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_30 [48];
  
  lVar4 = 0;
  if (0 < *(int *)(param_1 + 0x18)) {
    iVar5 = 0;
    do {
      uVar2 = (ulonglong)*(uint *)(param_1 + 8);
      puVar3 = (uint *)(iVar5 + *(int *)(param_1 + 0x14));
      pcVar1 = (char *)fn_82D6F590((double)lbl_83182A98,auStack_30,
                                    ((ulonglong)*puVar3 & 0xfffffff) * 0x10 + uVar2,
                                    ((ulonglong)puVar3[1] & 0xfffffff) * 0x10 + uVar2,
                                    ((ulonglong)puVar3[2] & 0xfffffff) * 0x10 + uVar2);
      if (*pcVar1 == '\0') {
        return lVar4;
      }
      lVar4 = lVar4 + 1;
      iVar5 = iVar5 + 0x10;
    } while ((int)lVar4 < *(int *)(param_1 + 0x18));
  }
  return -1;
}

