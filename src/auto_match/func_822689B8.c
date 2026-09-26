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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern int fn_82230300();
extern int fn_8225C590();
extern int fn_8225DB68();
extern int fn_82268BD0();
extern int fn_82268D78();
extern int fn_82537458();
extern unsigned int iStack_58;
extern unsigned int lbl_821A7D40;
extern unsigned int uStack_4c;


/* WARNING: Removing unreachable block (ram,0x822689e8) */

void fn_822689B8(int param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  char cVar6;
  undefined8 uVar4;
  int iVar5;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  uint *puVar10;
  int aiStack_60 [2];
  int iStack_58;
  int *piStack_54;
  undefined **ppuStack_50;
  undefined8 uStack_4c;
  undefined ***pppuStack_40;
  
  uVar1 = *(uint *)(param_1 + 0x6e8);
  uVar8 = (ulonglong)uVar1;
  puVar10 = (uint *)(param_1 + 0x6e8);
  if (uVar8 != *(uint *)(param_1 + 0x6ec)) {
    uVar2 = *(uint *)(param_1 + 0x6ec);
    if (uVar8 != uVar2) {
      do {
        fn_82230300(uVar8 + 8,1,0);
        uVar8 = uVar8 + 0x38;
      } while ((uVar8 & 0xffffffff) != (ulonglong)uVar2);
    }
    *(uint *)(param_1 + 0x6ec) = uVar1;
  }
  do {
    cVar6 = fn_82537458(param_1 + 0x5dc,1);
  } while (cVar6 == '\0');
  uVar8 = (ulonglong)*(uint *)(param_1 + 0x5fc);
  do {
    do {
      cVar6 = fn_82537458(param_1 + 0x5dc,1);
    } while (cVar6 == '\0');
    if ((uVar8 & 0xffffffff) == (ulonglong)*(uint *)(param_1 + 0x600)) {
      return;
    }
    pppuStack_40 = &ppuStack_50;
    ppuStack_50 = &lbl_821A7D40;
    iVar9 = (int)uVar8;
    piStack_54 = aiStack_60;
    aiStack_60[0] = 0;
    uStack_4c = CONCAT44(iVar9,piStack_54);
    iStack_58 = iVar9;
    uVar4 = fn_8225C590();
    fn_8225DB68(uVar4,&ppuStack_50);
    if (aiStack_60[0] == 0) {
      uVar1 = *(uint *)(param_1 + 0x6ec);
      if (((ulonglong)uVar1 <= (uVar8 & 0xffffffff)) ||
         (bVar3 = true, (uVar8 & 0xffffffff) < (ulonglong)*puVar10)) {
        bVar3 = false;
      }
      if (bVar3) {
        uVar2 = *puVar10;
        if (uVar1 == *(uint *)(param_1 + 0x6f0)) {
          fn_82268BD0(puVar10);
        }
        iVar5 = *(int *)(param_1 + 0x6ec);
        if (iVar5 != 0) {
          uVar7 = (longlong)((int)(iVar9 - uVar2) / 0x38) * 0x38 + (ulonglong)*puVar10;
LAB_82268b44:
          fn_82268D78(iVar5,uVar7);
        }
      }
      else {
        if (uVar1 == *(uint *)(param_1 + 0x6f0)) {
          fn_82268BD0(puVar10);
        }
        iVar5 = *(int *)(param_1 + 0x6ec);
        uVar7 = uVar8;
        if (iVar5 != 0) goto LAB_82268b44;
      }
      *(int *)(param_1 + 0x6ec) = *(int *)(param_1 + 0x6ec) + 0x38;
    }
    uVar8 = uVar8 + 0x38;
  } while( true );
}

