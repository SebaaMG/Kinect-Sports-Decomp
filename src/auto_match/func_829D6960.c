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
extern int fn_8314212C();
extern unsigned int lbl_832179FC;


void fn_829D6960(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  int *piVar6;
  int aiStack_60 [24];
  
  iVar4 = lbl_832179FC + 0x24980;
  RtlEnterCriticalSection(iVar4);
  iVar1 = lbl_832179FC;
  uVar5 = 0;
  piVar6 = (int *)(lbl_832179FC + 0xc);
  do {
    aiStack_60[0] = 0xfe;
    iVar2 = fn_8314212C(uVar5,aiStack_60);
    if (iVar2 < 0) {
      if (*piVar6 != 0xfe) {
        *piVar6 = 0xfe;
        piVar6[-1] = 0;
        *(undefined1 *)(iVar1 + 0x24975) = 1;
        if (piVar6[-3] == 2) {
          uVar3 = 0;
          iVar2 = iVar1 + 0xc0;
          do {
            if ((ulonglong)*(uint *)(iVar2 + 0x140) == (uVar5 & 0xffffffff)) {
              *(undefined4 *)(iVar2 + 0x140) = 0xffffffff;
              break;
            }
            uVar3 = uVar3 + 1;
            iVar2 = iVar2 + 0x150;
          } while (uVar3 < 6);
        }
        piVar6[-3] = 0;
      }
    }
    else if (*piVar6 != aiStack_60[0]) {
      *piVar6 = aiStack_60[0];
      *(undefined1 *)(iVar1 + 0x24975) = 1;
      if (piVar6[-3] == 0) {
        piVar6[-3] = 1;
        piVar6[-1] = 0;
      }
    }
    uVar5 = uVar5 + 1;
    piVar6 = piVar6 + 6;
    if (7 < (uVar5 & 0xffffffff)) {
      if (*(char *)(iVar1 + 0x24975) != '\0') {
        KeSetEvent(*(undefined4 *)(lbl_832179FC + 0x8f4c4),0,0);
      }
      RtlLeaveCriticalSection(iVar4);
      return;
    }
  } while( true );
}

