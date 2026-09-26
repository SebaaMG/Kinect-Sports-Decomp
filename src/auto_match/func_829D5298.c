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
extern int fn_829D47B0();
extern int fn_829E18D0();
extern int fn_82A28E60();
extern int fn_82F691F0();
extern unsigned int *lbl_832179FC;


void fn_829D5298(void)

{
  undefined8 uVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  longlong lVar5;
  int *piVar6;
  int *piVar7;
  int aiStack_50 [20];
  
  if ((lbl_832179FC[0x23d35] & 1U) != 0) {
    piVar4 = lbl_832179FC + 0x9260;
    RtlEnterCriticalSection(piVar4);
    pcVar3 = (char *)((int)lbl_832179FC + 0x24975);
    if (*pcVar3 == '\0') {
      RtlLeaveCriticalSection(piVar4);
    }
    else {
      piVar7 = lbl_832179FC + 0x926c;
      lVar5 = 8;
      piVar6 = lbl_832179FC;
      do {
        if ((*piVar6 == 2) || (iVar2 = 0, *piVar6 == 1)) {
          iVar2 = 1;
        }
        piVar7[0x3530] = iVar2;
        if (piVar6[2] == 0) {
                    /* WARNING: Subroutine does not return */
          fn_82F691F0(piVar7,0,0xd4c0);
        }
        lVar5 = lVar5 + -1;
        piVar7 = piVar7 + 0x3534;
        piVar6 = piVar6 + 6;
      } while (lVar5 != 0);
      *pcVar3 = '\0';
      RtlLeaveCriticalSection(piVar4);
      uVar1 = XamNuiIdentityGetSessionId();
      *(undefined8 *)(lbl_832179FC + 0x926a) = uVar1;
      iVar2 = XamGetCurrentTitleId();
      lbl_832179FC[0x9268] = iVar2;
      fn_829D47B0(aiStack_50,0xaf000);
      if (aiStack_50[0] != 0) {
        fn_829E18D0(lbl_832179FC + 0x9268,aiStack_50[0],0xaf000);
        fn_82A28E60(lbl_832179FC[0x23d33],0,aiStack_50[0]);
      }
    }
  }
  return;
}

