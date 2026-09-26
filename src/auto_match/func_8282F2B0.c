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
extern int fn_828252D0();
extern int fn_8282F248();
extern unsigned int lbl_8201ED80;
extern unsigned int uStack_40;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_8282F2B0(int param_1)

{
  uint uVar1;
  float fVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint *puVar6;
  uint *puVar7;
  double dVar8;
  uint uStack_50;
  uint uStack_4c;
  ulonglong uStack_48;
  ulonglong uStack_40;
  
  uVar5 = (ulonglong)*(uint *)(param_1 + 0x2e4);
  puVar6 = (uint *)(param_1 + 0x2dc);
  puVar7 = (uint *)(param_1 + 0x68);
  lVar4 = 2;
  dVar8 = (double)lbl_8201ED80;
  do {
    uVar1 = *puVar6;
    if ((ulonglong)uVar1 != 0) {
      uStack_48 = (ulonglong)puVar7[-4];
      uStack_40 = uStack_48 + 0xb & 0xffffffff;
      *puVar7 = puVar7[-4];
      fVar2 = (float)((double)uStack_48 * dVar8);
      if ((float)((double)uStack_48 * dVar8) <= (float)uStack_40) {
        fVar2 = (float)uStack_40;
      }
      uStack_4c = (uint)(longlong)fVar2;
      uStack_50 = uStack_4c;
      uVar3 = fn_828252D0();
      puVar7[-3] = (uint)uVar3;
      fn_8282F248(uVar5,*puVar7,uVar3,&uStack_50);
      uVar5 = uVar1 + uVar5;
      *puVar7 = uStack_50;
      *puVar6 = uStack_50;
    }
    lVar4 = lVar4 + -1;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 5;
  } while (lVar4 != 0);
  return;
}

