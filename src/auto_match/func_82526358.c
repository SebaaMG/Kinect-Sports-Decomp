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
extern int fn_823AB478();
extern int fn_825264F0();
extern int fn_82526608();
extern int fn_825266F8();
extern int fn_82825AD0();
extern unsigned int lbl_832961E4;
extern unsigned int lbl_832961F4;
extern unsigned int lbl_83296204;
extern unsigned int stack0x0000001c;
extern unsigned int uStack0000001c;


void fn_82526358(int param_1,uint param_2,int param_3)

{
  undefined4 *puVar1;
  bool bVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 **ppuVar7;
  int iVar8;
  int iVar9;
  uint uStack0000001c;
  undefined4 *puStack_50;
  undefined4 *apuStack_4c [19];
  
  uStack0000001c = param_2;
  uVar3 = fn_823AB478();
  iVar9 = uVar3 * 0x170;
  if (*(int *)(iVar9 + -0x7cd69e20) != param_1) {
    fn_825266F8(&lbl_832961E4 + iVar9);
    fn_825266F8(&lbl_832961F4 + iVar9);
  }
  *(int *)(iVar9 + -0x7cd69e20) = param_1;
  bVar2 = false;
  puVar1 = *(undefined4 **)(iVar9 + -0x7cd69e18);
  puStack_50 = puVar1;
  puVar6 = (undefined4 *)puVar1[1];
  while (*(char *)((int)puVar6 + 0x15) == '\0') {
    if ((uint)puVar6[3] < param_2) {
      puVar6 = (undefined4 *)puVar6[2];
    }
    else {
      puStack_50 = puVar6;
      puVar6 = (undefined4 *)*puVar6;
    }
  }
  if ((puStack_50 == puVar1) || (param_2 < (uint)puStack_50[3])) {
    ppuVar7 = apuStack_4c;
    apuStack_4c[0] = puVar1;
  }
  else {
    ppuVar7 = &puStack_50;
  }
  if (*ppuVar7 != *(undefined4 **)(iVar9 + -0x7cd69e18)) {
    bVar2 = param_3 == (*ppuVar7)[4];
    fn_82825AD0(apuStack_4c,&lbl_832961E4 + iVar9);
  }
  piVar4 = (int *)fn_82526608(&lbl_832961E4 + iVar9,&stack0x0000001c);
  *piVar4 = param_3;
  if (!bVar2) {
    iVar8 = 0;
    iVar5 = 0;
    do {
      if (*(int *)(iVar5 + iVar9 + -0x7cd69df0) == 0) {
        iVar5 = iVar8 * 0x14 + iVar9;
        *(uint *)(iVar5 + -0x7cd69df8) = param_2;
        *(int *)(iVar5 + -0x7cd69df4) = param_3;
        *(undefined4 *)(iVar5 + -0x7cd69df0) = 1;
        *(int *)(&lbl_83296204 + iVar5) = param_1;
        *(undefined1 *)(iVar5 + -0x7cd69dec) = 0;
        if (*(int *)(iVar9 + -0x7cd69cb4) != 0) {
          return;
        }
        fn_825264F0(uVar3 & 0xff);
        return;
      }
      iVar5 = iVar5 + 0x14;
      iVar8 = iVar8 + 1;
    } while (iVar5 < 300);
  }
  return;
}

