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
extern int fn_8265C9E0();
extern int fn_829CF908();
extern int fn_82A1DD38();
extern int fn_82A1E1A8();
extern int fn_82A1E6A0();
extern int fn_82F4D6A0();
extern int fn_82F4DF08();
extern int fn_82F4E058();
extern int fn_82F58CD8();
extern int fn_82F58FF8();
extern int fn_82F590E0();
extern int fn_82F59390();
extern unsigned int lbl_831BA874;
extern unsigned int lbl_8326183C;


undefined8 fn_82F4E3F0(void)

{
  undefined1 *puVar1;
  int iVar4;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined4 uVar5;
  undefined **ppuVar6;
  uint uVar7;
  longlong lVar8;
  
  if (lbl_8326183C == (undefined1 *)0x0) {
    iVar4 = fn_8265C9E0(0x2e10);
    if (iVar4 == 0) {
      lbl_8326183C = (undefined1 *)0x0;
    }
    else {
      lbl_8326183C = (undefined1 *)fn_82F4DF08();
    }
  }
  uVar7 = 0;
  ppuVar6 = &lbl_831BA874;
  lVar8 = 3;
  do {
    ppuVar6 = ppuVar6 + 3;
    uVar7 = (uint)*ppuVar6 | uVar7;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  iVar4 = fn_829CF908(uVar7 | 0x808,3);
  if (iVar4 < 0) {
    uVar2 = 0;
  }
  else {
    RtlInitializeCriticalSection(lbl_8326183C + 0x2b0c);
    fn_82F4E058();
    fn_82F4D6A0();
    fn_82A1DD38(lbl_8326183C + 0x2b34,0xffffffff831ba8a0,0x14);
    uVar3 = fn_8265C9E0(0x28);
    if ((uVar3 & 0xffffffff) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = fn_82F58CD8(uVar3,4,2,0);
    }
    *(undefined4 *)(lbl_8326183C + 0x2d8c) = uVar5;
    fn_82F58FF8();
    iVar4 = fn_8265C9E0(0x1e4);
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = fn_82F590E0();
    }
    *(int *)(lbl_8326183C + 0x2db4) = iVar4;
    if (iVar4 != 0) {
      fn_82F59390();
    }
    uVar5 = fn_82A1E6A0(0,0,0,0xffffffff821655f4);
    puVar1 = lbl_8326183C;
    *(undefined4 *)(lbl_8326183C + 0x2dc4) = uVar5;
    *puVar1 = 1;
    RtlInitializeCriticalSection(puVar1 + 0x2dec);
    fn_82A1E1A8(0);
    uVar2 = 1;
  }
  return uVar2;
}

