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
extern unsigned int *auStack_150;
extern unsigned int *auStack_180;
extern int fn_825207D0();
extern int fn_82543C70();
extern int fn_8256BD38();
extern int fn_826312F0();
extern int fn_82A1DD38();
extern int fn_82F68CC0();
extern unsigned int lbl_821CC160;
extern unsigned int stack0x00000024;
extern unsigned int uStack00000024;
extern unsigned int uStack_184;


void fn_825E74C0(int param_1,longlong param_2,undefined4 param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  ulonglong uVar5;
  uint *puVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  longlong lVar10;
  undefined4 uStack00000024;
  int aiStack_190 [3];
  uint uStack_184;
  undefined1 auStack_180 [48];
  undefined1 auStack_150 [44];
  float afStack_124 [73];
  
  uVar7 = 0;
  uStack00000024 = param_3;
  fn_8256BD38(aiStack_190,param_1,&stack0x00000024);
  if (aiStack_190[0] != *(int *)(param_1 + 4)) {
    if (*(int *)(aiStack_190[0] + 0x24) != 0) {
      puVar9 = auStack_150;
      puVar8 = (undefined4 *)(aiStack_190[0] + 8);
      do {
        if (3 < (uVar7 & 0xffffffff)) break;
        puVar8 = puVar8 + 1;
        fn_82F68CC0(puVar9,*puVar8,0x30);
        uVar7 = uVar7 + 1;
        puVar9 = puVar9 + 0x30;
      } while ((uVar7 & 0xffffffff) < (ulonglong)*(uint *)(aiStack_190[0] + 0x24));
    }
    fn_82543C70(param_2,0x53,auStack_150,uVar7 * 3);
  }
  fVar2 = lbl_821CC160;
  puVar6 = &uStack_184;
  uVar5 = 0;
  pfVar4 = afStack_124;
  lVar10 = 6;
  do {
    fVar1 = *pfVar4;
    puVar6[1] = -(uint)(uVar5 < uVar7) & 1;
    puVar6 = puVar6 + 2;
    *puVar6 = (uint)(fVar2 <= fVar1);
    uVar5 = uVar5 + 1;
    pfVar4 = pfVar4 + 0xc;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  lVar10 = param_2 + 0xa22c;
  iVar3 = fn_825207D0(lVar10,auStack_180,0x30);
  if (iVar3 != 0) {
    fn_82A1DD38(lVar10,auStack_180);
    fn_826312F0(*(undefined4 *)param_2,0x73,auStack_180,0xc);
  }
  return;
}

