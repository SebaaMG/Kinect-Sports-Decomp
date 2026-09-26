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
extern unsigned int *auStack_80;
extern int fn_822ABA88();
extern int fn_8234B0C8();
extern int fn_825354B8();
extern int fn_82536288();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_83265A28;


double fn_8239B628(int param_1,int *param_2,float *param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  bool bVar4;
  undefined8 in_r0;
  int iVar5;
  float *pfVar6;
  ulonglong uVar7;
  float *pfVar8;
  bool bVar9;
  double dVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float afStack_90 [4];
  undefined1 auStack_80 [128];
  
  pfVar6 = param_3 + 2;
  dVar10 = (double)lbl_821CC160;
  if ((pfVar6 != (float *)0x0) && (*(char *)pfVar6 != '\0')) {
    bVar4 = false;
    uVar7 = 0;
    if (*(int *)(*(int *)(param_2[4] * 4 + *param_2) + 8) != 0) {
      pfVar8 = param_3 + 10;
      do {
        lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
        afStack_90[0] = (float)(lbl_83265A28 & 0x7fffff | 0x3f800000);
        dVar10 = (double)((param_3[1] - *param_3) * (afStack_90[0] - lbl_821CA460) + *param_3);
        iVar5 = fn_822ABA88(*(undefined4 *)(param_2[4] * 4 + *param_2),uVar7);
        uVar1 = *(uint *)(iVar5 + 0x118);
        puVar2 = (undefined4 *)(iVar5 + 0x80U & 0xfffffff0);
        uVar11 = puVar2[1];
        uVar12 = puVar2[2];
        uVar13 = puVar2[3];
        puVar3 = (undefined4 *)((uint)(auStack_80 + (int)in_r0) & 0xfffffff0);
        *puVar3 = *puVar2;
        puVar3[1] = uVar11;
        puVar3[2] = uVar12;
        puVar3[3] = uVar13;
        fn_8234B0C8(dVar10,(ulonglong)uVar1 + 0x2c0,pfVar6);
        if (pfVar8 == (float *)0x0) {
          bVar9 = false;
        }
        else {
          bVar9 = *pfVar8 != 0.0;
        }
        if (((bVar9) && (!bVar4)) && (*(int *)(iVar5 + 0x24) == 0)) {
          afStack_90[0] = *pfVar8;
          bVar4 = true;
          afStack_90[0] =
               (float)fn_825354B8(afStack_90,auStack_80,0,
                                        *(undefined4 *)(*(int *)(param_1 + 0x174) + 0x84c),
                                        0xffffffff83296bc0,0xffffffff83296bd0);
          fn_82536288(afStack_90);
        }
        uVar7 = uVar7 + 1;
      } while ((uVar7 & 0xffffffff) < (ulonglong)*(uint *)(*(int *)(param_2[4] * 4 + *param_2) + 8))
      ;
    }
  }
  return dVar10;
}

