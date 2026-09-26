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
extern int fn_82250A18();
extern int fn_822ACDA0();
extern int fn_82526C10();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_831D7A88;
extern unsigned int lbl_83265A28;
extern unsigned int lbl_832975B0;


undefined * fn_822ABF20(int param_1)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  ulonglong uVar4;
  char *pcVar5;
  undefined **ppuVar6;
  uint uVar7;
  char acStack_c0 [128];
  char acStack_40 [64];
  
  puVar2 = lbl_831D7A88;
  ppuVar6 = &lbl_831D7A88;
  iVar3 = lbl_832975B0;
  if (lbl_832975B0 == 0) {
    iVar3 = fn_82250A18();
  }
  if (*(char *)(iVar3 + 4) == '\0') {
    uVar7 = 1;
    do {
      ppuVar6 = ppuVar6 + 1;
      puVar2 = *ppuVar6;
      pcVar5 = acStack_c0;
      uVar4 = (ulonglong)*(uint *)(param_1 + 0x48);
      do {
        if (acStack_40 <= pcVar5) break;
        cVar1 = pcVar5[(int)"default" - (int)acStack_c0];
        *pcVar5 = cVar1;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      if (pcVar5 == acStack_40) {
        pcVar5[-1] = '\0';
      }
      fn_82526C10(acStack_c0,0x80,0xffffffff821ac4b4,uVar4,puVar2);
      fn_82526C10(acStack_c0);
      iVar3 = fn_822ACDA0(uVar4,acStack_c0);
      if (iVar3 == 0) break;
      uVar7 = uVar7 + 1;
    } while (uVar7 < 4);
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    puVar2 = (&lbl_831D7A88)
             [(int)(((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) *
                   (float)(longlong)(int)uVar7)];
  }
  return puVar2;
}

