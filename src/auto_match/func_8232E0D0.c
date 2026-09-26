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
#define ZEXT48(x) ((U64)((U32)(x)))
extern unsigned int *auStack_70;
extern int fn_82230218();
extern int fn_82230300();
extern int fn_822315A0();
extern int fn_8223AAC0();
extern int fn_8223B688();
extern int fn_822B83D0();
extern int fn_822BFB28();
extern int fn_825113E0();
extern int fn_82560010();
extern int fn_827F6210();
extern int fn_827F6310();
extern unsigned int uStack_4c;
extern U64 storeWordConditionalIndexed();


void fn_8232E0D0(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar5;
  char cVar6;
  undefined8 uVar4;
  longlong lVar7;
  longlong lVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  char in_RESERVE;
  byte in_cr0;
  double dVar12;
  double dVar13;
  undefined1 auStack_70 [4];
  int *piStack_6c;
  undefined4 ***apppuStack_60 [5];
  uint uStack_4c;
  
  piVar5 = (int *)fn_822BFB28(auStack_70,*(undefined4 *)(param_1 + 0x54));
  iVar1 = piVar5[1];
  iVar2 = *piVar5;
  iVar11 = 0;
  iVar10 = 0;
  if (iVar1 != 0) {
    cVar6 = fn_8223AAC0(iVar1);
    in_cr0 = (cVar6 == '\0') << 1;
    if (cVar6 != '\0') {
      iVar11 = iVar2;
      iVar10 = iVar1;
    }
  }
  if (ZEXT48(piStack_6c) != 0) {
    lVar8 = ZEXT48(piStack_6c) + 8;
    do {
      puVar9 = (uint *)lVar8;
      lVar7 = (ulonglong)*puVar9 - 1;
      if (in_RESERVE != '\0') {
        uVar3 = storeWordConditionalIndexed(lVar7,0,lVar8);
        *puVar9 = uVar3;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if ((int)lVar7 == 0) {
      (**(code **)(*piStack_6c + 4))();
    }
  }
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(iVar11 + 0x14);
  dVar13 = (double)*(float *)(iVar11 + 0x28);
  fn_8223B688(apppuStack_60,param_1 + 0x5c);
  if (*(int *)(param_1 + 0xa0) == 3) {
    fn_82230218(apppuStack_60,param_1 + 0x78,0,0xffffffffffffffff);
  }
  if (uStack_4c < 0x10) {
    apppuStack_60[0] = apppuStack_60;
  }
  uVar4 = fn_82560010(**(undefined4 **)(param_1 + 0x58),apppuStack_60[0]);
  uVar4 = fn_822B83D0(*(undefined4 *)(*(int *)(param_1 + 0x54) + 0x118),uVar4);
  dVar12 = (double)fn_827F6310();
  fn_827F6210((double)(float)(dVar12 * dVar13),uVar4);
  fn_825113E0((ulonglong)*(uint *)(*(int *)(param_1 + 0x54) + 0x118) + 0x14,0x14,
                    param_1 + 0xa8);
  fn_82230300(apppuStack_60,1,0);
  if (iVar10 != 0) {
    fn_822315A0(iVar10);
  }
  return;
}

