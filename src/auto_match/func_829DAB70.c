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
extern int fn_829D4038();
extern int fn_82A1E650();
extern int fn_82A1E810();
extern unsigned int lbl_83217148;
extern unsigned int lbl_832179FC;


undefined8 fn_829DAB70(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  int *piVar6;
  
  if ((lbl_83217148 == 0) || (lbl_832179FC == 0)) {
    uVar2 = 0xffffffff83010005;
  }
  else {
    uVar2 = 0;
    iVar5 = lbl_832179FC + 0x24980;
    RtlEnterCriticalSection(iVar5);
    iVar1 = lbl_832179FC;
    if (*(char *)(lbl_832179FC + 0x24977) == '\0') {
      piVar6 = (int *)(lbl_832179FC + 0x8a0);
      *(char *)(lbl_832179FC + 0x24977) = '\x01';
      lVar4 = 2;
      do {
        if (*piVar6 != 0) {
          if (piVar6[1] < 0) {
            uVar2 = 0xffffffff800700aa;
          }
          else {
            uVar3 = fn_829D4038(iVar1,piVar6,2);
            if ((int)uVar3 < 0) {
              uVar2 = uVar3;
            }
          }
        }
        lVar4 = lVar4 + -1;
        piVar6 = piVar6 + 0x16;
      } while (lVar4 != 0);
      fn_82A1E810(*(undefined4 *)(lbl_832179FC + 0x8f4bc));
      RtlLeaveCriticalSection(iVar5);
      fn_82A1E650(*(undefined4 *)(lbl_832179FC + 0x8f4c0),0xffffffffffffffff);
    }
    else {
      RtlLeaveCriticalSection(iVar5);
      uVar2 = 0xffffffff800700aa;
    }
  }
  return uVar2;
}

