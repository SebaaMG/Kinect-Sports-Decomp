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


int fn_82D4D8F8(int param_1,int param_2)

{
  char *pcVar1;
  ulonglong uVar2;
  uint *puVar3;
  int iVar4;
  undefined1 auStack_30 [48];
  
  param_2 = param_2 + 1;
  if (param_2 < *(int *)(param_1 + 0x18)) {
    iVar4 = param_2 * 0x10;
    do {
      uVar2 = (ulonglong)*(uint *)(param_1 + 8);
      puVar3 = (uint *)(*(int *)(param_1 + 0x14) + iVar4);
      pcVar1 = (char *)fn_82D6F590((double)lbl_83182A98,auStack_30,
                                    ((ulonglong)*puVar3 & 0xfffffff) * 0x10 + uVar2,
                                    ((ulonglong)puVar3[1] & 0xfffffff) * 0x10 + uVar2,
                                    ((ulonglong)puVar3[2] & 0xfffffff) * 0x10 + uVar2);
      if (*pcVar1 == '\0') {
        return param_2;
      }
      param_2 = param_2 + 1;
      iVar4 = iVar4 + 0x10;
    } while (param_2 < *(int *)(param_1 + 0x18));
  }
  return -1;
}

