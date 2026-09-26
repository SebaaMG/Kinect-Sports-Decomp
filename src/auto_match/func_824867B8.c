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
extern int fn_8225F160();


undefined8 fn_824867B8(int param_1)

{
  int iVar2;
  undefined8 uVar1;
  char *pcVar3;
  char cVar4;
  char cVar5;
  char *pcVar6;
  
  iVar2 = fn_8225F160();
  if (*(uint *)(iVar2 + 8) < 2) {
    iVar2 = fn_8225F160();
    if (*(int *)(iVar2 + 0xc) == 1) goto LAB_824867e0;
    iVar2 = fn_8225F160();
    if (*(int *)(iVar2 + 0xc) != 2) {
      iVar2 = fn_8225F160();
      if ((*(int *)(iVar2 + 0xc) == 5) && (iVar2 = fn_8225F160(), *(int *)(iVar2 + 100) < 2))
      {
        return 2;
      }
      return 4;
    }
    iVar2 = fn_8225F160();
    if (*(int *)(iVar2 + 100) < 2) goto LAB_824867f8;
    cVar5 = *(char *)(param_1 + 0x234);
    pcVar6 = (char *)(param_1 + 0x234);
    cVar4 = 'a';
    if (cVar5 == 'a') {
      cVar5 = 'a';
      pcVar3 = pcVar6;
      do {
        pcVar3 = pcVar3 + 1;
        if (cVar5 == '\0') goto LAB_824867f0;
        cVar4 = pcVar3[(int)"athletics_mini5" - (int)pcVar6];
        cVar5 = *pcVar3;
      } while (cVar5 == cVar4);
    }
    if (cVar5 != cVar4) {
      cVar5 = *pcVar6;
      cVar4 = 'a';
      if (cVar5 == 'a') {
        cVar5 = 'a';
        pcVar3 = pcVar6;
        do {
          pcVar3 = pcVar3 + 1;
          if (cVar5 == '\0') goto LAB_824867f0;
          cVar4 = pcVar3[(int)"athletics_mini4" - (int)pcVar6];
          cVar5 = *pcVar3;
        } while (cVar5 == cVar4);
      }
      if (cVar5 != cVar4) {
        cVar5 = *pcVar6;
        cVar4 = 'a';
        if (cVar5 == 'a') {
          iVar2 = (int)"athletics_mini3" - (int)pcVar6;
          cVar5 = 'a';
          do {
            pcVar6 = pcVar6 + 1;
            if (cVar5 == '\0') goto LAB_824867f0;
            cVar4 = pcVar6[iVar2];
            cVar5 = *pcVar6;
          } while (cVar5 == cVar4);
        }
        if (cVar5 != cVar4) {
          return 4;
        }
      }
    }
LAB_824867f0:
    uVar1 = 3;
  }
  else {
    if (*(uint *)(iVar2 + 8) == 2) {
LAB_824867e0:
      iVar2 = fn_8225F160();
      if (1 < *(int *)(iVar2 + 0x5c)) goto LAB_824867f0;
    }
LAB_824867f8:
    uVar1 = 2;
  }
  return uVar1;
}

