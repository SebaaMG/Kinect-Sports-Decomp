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
extern int fn_8255A160();
extern int fn_825E4220();
extern int fn_825E42D8();
extern int fn_82F6A544();
extern int fn_82F6A590();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_82193E2C;
extern unsigned int lbl_82193E50;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_83265A28;


void fn_825E4598(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 in_r0;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  
  iVar4 = fn_82F6A544();
  iVar6 = 0;
  if (0 < *(int *)(iVar4 + 0x78)) {
    dVar8 = (double)lbl_8218E8E8;
    dVar10 = (double)lbl_82193E2C;
    dVar12 = (double)lbl_821CA460;
    dVar11 = (double)lbl_821CC160;
    iVar7 = iVar4 + 0xa0;
    dVar9 = (double)lbl_82193E50;
    do {
      *(undefined4 *)(iVar7 + 0x24) = 0xffffffff;
      iVar2 = (int)in_r0;
      puVar1 = (undefined4 *)(iVar2 + iVar4 + 0x220 & 0xfffffff0);
      uVar13 = puVar1[1];
      uVar14 = puVar1[2];
      uVar15 = puVar1[3];
      puVar3 = (undefined4 *)(iVar2 + iVar7 & 0xfffffff0);
      *puVar3 = *puVar1;
      puVar3[1] = uVar13;
      puVar3[2] = uVar14;
      puVar3[3] = uVar15;
      if ((double)*(float *)(iVar4 + 0x74) != dVar11) {
        uVar5 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
        lbl_83265A28 = uVar5 * 0x19660d + 0x3c6ef35f;
        puVar1 = (undefined4 *)(iVar2 + iVar7 & 0xfffffff0);
        uVar13 = *puVar1;
        uVar14 = puVar1[1];
        uVar15 = puVar1[2];
        uVar16 = puVar1[3];
        fn_8255A160((double)(float)((double)(float)((double)(float)(lbl_83265A28 & 0x7fffff |
                                                                         0x3f800000) - dVar12) *
                                          dVar10 - dVar9),
                          (double)(float)((double)(float)((double)(float)(uVar5 & 0x7fffff |
                                                                         0x3f800000) - dVar12) *
                                         (double)*(float *)(iVar4 + 0x74)));
        puVar1 = (undefined4 *)((int)in_r0 + iVar7 & 0xfffffff0);
        *puVar1 = uVar13;
        puVar1[1] = uVar14;
        puVar1[2] = uVar15;
        puVar1[3] = uVar16;
      }
      *(undefined4 *)(iVar7 + 0x10) = *(undefined4 *)(iVar4 + 0x230);
      *(undefined4 *)(iVar7 + 0x14) = *(undefined4 *)(iVar4 + 0x234);
      *(undefined4 *)(iVar7 + 0x18) = *(undefined4 *)(iVar4 + 0x238);
      if (((((double)*(float *)(iVar4 + 0x80) == dVar11) &&
           ((double)*(float *)(iVar4 + 0x84) == dVar11)) ||
          (((double)*(float *)(iVar4 + 0x88) == dVar11 &&
           ((double)*(float *)(iVar4 + 0x8c) == dVar11)))) ||
         (lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f,
         dVar8 < (double)(float)((double)(float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - dVar12))) {
        fn_825E42D8(iVar4,iVar7,1);
      }
      else {
        fn_825E4220(iVar4,iVar7);
      }
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + 0x30;
    } while (iVar6 < *(int *)(iVar4 + 0x78));
  }
  fn_82F6A590();
  return;
}

