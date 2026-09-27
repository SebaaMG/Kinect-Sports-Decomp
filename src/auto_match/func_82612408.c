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
extern unsigned int fStack00000020;
extern unsigned int fStack00000028;
extern unsigned int fStack_48;
extern unsigned int fStack_50;
extern int fn_82520780();
extern int fn_825F5B50();
extern int fn_825F5C70();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821917B0;
extern unsigned int lbl_821917C0;
extern float lbl_82192480;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;
extern unsigned int uStack00000024;
extern unsigned int uStack_4c;
extern unsigned int uStack_88;


void fn_82612408(double param_1,double param_2,int param_3,undefined8 param_4,undefined8 param_5,
                  int param_6)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  float in_register_00010010;
  undefined4 in_register_00010014;
  float in_register_00010018;
  float fStack00000020;
  undefined4 uStack00000024;
  float fStack00000028;
  undefined8 uStack_88;
  undefined1 auStack_80 [48];
  float fStack_50;
  undefined4 uStack_4c;
  float fStack_48;
  
  fStack00000020 = in_register_00010010;
  uStack00000024 = in_register_00010014;
  fStack00000028 = in_register_00010018;
  iVar2 = fn_82520780((double)((float)(param_2 * param_2) * lbl_82192480),0xffffffff83265a28);
  if (iVar2 != 0) {
    dVar12 = (double)*(float *)(param_6 + 0x828);
    if (*(int *)(param_3 + 0x10) == 0) {
      for (piVar3 = *(int **)(param_6 + 0xc4c); piVar3 != (int *)0x0; piVar3 = (int *)piVar3[9]) {
        if (*piVar3 == 1) goto LAB_826124ac;
      }
      piVar3 = (int *)fn_825F5B50(param_6 + 0xc4c,0xffffffff83270124,0xffffffff83270128,0,1);
LAB_826124ac:
      *(int **)(param_3 + 0x10) = piVar3;
    }
    fVar1 = lbl_821CA460;
    if (*(int *)(param_3 + 0x10) != 0) {
      uVar6 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
      lVar9 = 8;
      dVar10 = (double)(((float)(uVar6 & 0x7fffff | 0x3f800000) - lbl_821CA460) + lbl_8218E8E8);
      puVar5 = &uStack_88;
      puVar4 = (undefined8 *)0x8329eac8;
      do {
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
        *puVar5 = *puVar4;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
      dVar11 = -param_1;
      uStack_4c = uStack00000024;
      uVar6 = uVar6 * 0x19660d + 0x3c6ef35f;
      uVar7 = uVar6 * 0x19660d + 0x3c6ef35f;
      uVar8 = uVar7 * 0x19660d + 0x3c6ef35f;
      lbl_83265A28 = uVar8 * 0x19660d + 0x3c6ef35f;
      fStack_50 = (float)((double)((float)(uVar6 & 0x7fffff | 0x3f800000) - fVar1) *
                          (double)(float)(param_1 - dVar11) + dVar11) + fStack00000020;
      fStack_48 = (float)((double)((float)(uVar7 & 0x7fffff | 0x3f800000) - fVar1) *
                          (double)(float)(param_1 - dVar11) + dVar11) + fStack00000028;
      fn_825F5C70(dVar10,dVar10,
                        (double)(float)((double)((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) -
                                                fVar1) * (double)lbl_821917C0 + dVar12),
                        (double)(((float)(uVar8 & 0x7fffff | 0x3f800000) - fVar1) + lbl_821917B0),
                        *(undefined4 *)(param_3 + 0x10),auStack_80);
    }
  }
  return;
}

