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
extern unsigned int *auStack_a0;
extern int fn_82865170();
extern int fn_82866400();
extern int fn_828752D8();
extern int fn_8287B658();
extern int fn_8287B990();


int fn_82874C10(int param_1,undefined8 param_2)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  undefined1 auStack_a0 [160];
  
  pcVar1 = *(char **)(param_1 + 4);
  uVar4 = 0;
  pcVar3 = pcVar1;
  if (pcVar1 != *(char **)(param_1 + 8)) {
    do {
      if (*pcVar3 == '\0') {
        iVar5 = uVar4 * 0x70;
        pcVar1[iVar5] = '\x01';
        fn_8287B990(auStack_a0,param_2,uVar4);
        fn_828752D8(iVar5 + *(int *)(param_1 + 4) + 4,auStack_a0);
        fn_82865170();
        iVar2 = fn_82866400();
        *(int *)(iVar2 + 0x1c) = *(int *)(iVar2 + 0x1c) + 1;
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
        iVar2 = *(int *)(param_1 + 4);
        *(uint *)(param_1 + 0x28) = 1 << (uVar4 & 0x3f) | *(uint *)(param_1 + 0x28);
        fn_8287B658(auStack_a0);
        return iVar5 + iVar2 + 4;
      }
      pcVar3 = pcVar3 + 0x70;
      uVar4 = uVar4 + 1;
    } while (pcVar3 != *(char **)(param_1 + 8));
  }
  return 0;
}

