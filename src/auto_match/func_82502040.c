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
extern int fn_82463328();
extern int fn_82503030();
extern int fn_825070D0();
extern int fn_8252AFE0();
extern int fn_82564720();
extern int fn_82592430();
extern int fn_827F2DD0();
extern int fn_827F62A8();
extern int fn_827F6308();
extern int fn_827F6318();
extern int fn_827F6320();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_82191118;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern V16 loadVectorLeftIndexed128();


void fn_82502040(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int *piVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  iVar2 = (int)param_1;
  dVar9 = (double)lbl_821CA460;
  dVar8 = dVar9;
  if (*(int *)(iVar2 + 0xd44) != 0) {
    if (*(int *)(*(int *)(param_2 + 0xd54) + 0xc) != 0) {
      dVar9 = (double)fn_82463328();
    }
    fn_8252AFE0(dVar9,param_1);
  }
  if (*(int *)(iVar2 + 0xc74) != 0) {
    loadVectorLeftIndexed128(param_1,0x8bc);
    fn_82564720((double)*(float *)(iVar2 + 0xb3c),dVar8);
  }
  iVar4 = 0;
  lVar5 = param_1 + 0xccc;
  dVar9 = (double)lbl_8218E8E8;
  dVar10 = (double)lbl_821CC160;
  dVar8 = (double)lbl_82191118;
  do {
    piVar6 = (int *)lVar5;
    if (*piVar6 != 6) {
      iVar1 = (iVar4 + *piVar6 + 0x335) * 4;
      iVar3 = fn_827F6320(*(undefined4 *)(iVar1 + iVar2));
      if ((((iVar3 == 1) &&
           (dVar7 = (double)fn_827F6318(*(undefined4 *)(iVar1 + iVar2)), dVar8 < dVar7)) &&
          (iVar1 = piVar6[1], iVar1 != *piVar6)) && (piVar6[-2] != 0)) {
        iVar3 = (iVar4 + iVar1 + 0x335) * 4;
        fn_827F6308(*(undefined4 *)(iVar3 + iVar2),0);
        fn_827F62A8(dVar10,*(undefined4 *)(iVar3 + iVar2));
        fn_827F2DD0(dVar9,piVar6[-2],*(undefined4 *)(iVar3 + iVar2));
        *piVar6 = iVar1;
        piVar6[1] = 0;
      }
    }
    iVar4 = iVar4 + 0x10;
    lVar5 = lVar5 + 0x40;
  } while (iVar4 < 0x20);
  fn_825070D0((double)*(float *)(iVar2 + 0xb3c),param_1);
  fn_82503030(param_1);
  fn_82592430(param_1,param_2);
  return;
}

