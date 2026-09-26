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
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern int fn_8265CA60();
extern int fn_82810240();
extern int fn_82810308();
extern int fn_82810328();
extern int fn_82F691F0();
extern int fn_83060D30();
extern int fn_83060DC8();
extern int fn_830619F8();
extern int fn_83061BC8();
extern int fn_830621E8();
extern unsigned int lbl_82142CE4;
extern unsigned int lbl_821AAD20;


/* WARNING: Removing unreachable block (ram,0x83062410) */
/* WARNING: Removing unreachable block (ram,0x83062440) */
/* WARNING: Removing unreachable block (ram,0x83062444) */
/* WARNING: Removing unreachable block (ram,0x83062448) */
/* WARNING: Removing unreachable block (ram,0x83062450) */
/* WARNING: Removing unreachable block (ram,0x83062468) */
/* WARNING: Removing unreachable block (ram,0x8306247c) */
/* WARNING: Removing unreachable block (ram,0x830624a4) */
/* WARNING: Removing unreachable block (ram,0x83062480) */
/* WARNING: Removing unreachable block (ram,0x83062498) */
/* WARNING: Removing unreachable block (ram,0x830624b4) */
/* WARNING: Removing unreachable block (ram,0x830624c8) */
/* WARNING: Removing unreachable block (ram,0x830624d8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 fn_83062318(uint *param_1)

{
  uint uVar1;
  int iVar5;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  uint *puVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [96];
  
  fn_83061BC8((double)lbl_821AAD20);
  fn_830621E8(param_1,0);
  iVar7 = 0;
  puVar9 = (uint *)param_1[0xb];
  if (0 < (int)param_1[6]) {
    dVar11 = (double)lbl_82142CE4;
    do {
      iVar5 = fn_83060D30(puVar9);
      if (iVar5 == 2) {
        uVar1 = *puVar9;
        lVar2 = fn_83060DC8(puVar9,0);
        lVar3 = fn_83060DC8(puVar9,1);
        uVar6 = (ulonglong)*param_1;
        lVar8 = (ulonglong)uVar1 * 0xc + uVar6;
        fn_82810328(lVar8,lVar2 * 0xc + uVar6,auStack_70);
        fn_82810328(lVar3 * 0xc + uVar6,lVar8,auStack_80);
        fn_82810240(auStack_70,auStack_80,auStack_60);
        dVar10 = (double)fn_82810308(auStack_60);
        if (dVar10 < dVar11) {
          uVar4 = fn_8265CA60(param_1[6]);
                    /* WARNING: Subroutine does not return */
          fn_82F691F0(uVar4,0,param_1[6]);
        }
      }
      iVar7 = iVar7 + 1;
      puVar9 = puVar9 + 6;
    } while (iVar7 < (int)param_1[6]);
  }
  fn_830619F8(param_1);
  return 0;
}

