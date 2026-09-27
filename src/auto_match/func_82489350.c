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
#define NAN(x) ((x) != (x))
extern int fn_8234FDF0();
extern int fn_823504A8();
extern int fn_82547650();
extern int fn_8255AFA8();
extern int fn_8257EF78();
extern int fn_8257F0E8();
extern int fn_8257FDD8();
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821955AC;
extern unsigned int lbl_821CC160;
extern float lbl_8327F894;


void fn_82489350(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  float fVar5;
  int *piVar6;
  undefined4 *puVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  iVar2 = *(int *)(param_1 + 0xd54);
  fn_8255AFA8(*(undefined4 *)(param_1 + 0x844));
  dVar11 = (double)lbl_821CC160;
  fVar5 = lbl_8327F894 * *(float *)(param_1 + 0x820);
  if (*(int *)(param_1 + 0x838) != 0) {
    dVar9 = (double)(*(float *)(param_1 + 0x838) - fVar5);
    dVar8 = -dVar9;
    dVar10 = dVar11;
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((dVar8 < dVar11) << 2) | (uint)(NAN(dVar8) || NAN(dVar11)) << 2)) <
        0.0) {
      dVar10 = dVar9;
    }
    *(float *)(param_1 + 0x838) = (float)dVar10;
  }
  fVar5 = fVar5 * lbl_821955AC + *(float *)(param_1 + 0x840);
  iVar1 = (int)fVar5;
  *(int *)(param_1 + 0x83c) = iVar1;
  *(float *)(param_1 + 0x840) = fVar5 - (float)(longlong)iVar1;
  iVar1 = *(int *)(param_1 + 0xac);
  dVar10 = dVar11;
  if ((double)*(float *)(iVar1 + 0x838) <= dVar11) {
    dVar10 = (double)(*(float *)(iVar1 + 0x820) * lbl_8327F894);
  }
  iVar3 = *(int *)(param_1 + 0x7c);
  while (iVar3 != 0) {
    piVar6 = (int *)(iVar3 + -0x38);
    iVar3 = *(int *)(iVar3 + 4);
    (**(code **)(*piVar6 + 0x14))(dVar10,piVar6,iVar1);
  }
  puVar7 = *(undefined4 **)(param_1 + 0xa0);
  for (puVar4 = (undefined4 *)*puVar7; puVar4 != puVar7; puVar4 = (undefined4 *)*puVar4) {
    if (((int *)puVar4[2])[2] == 2) {
      (**(code **)(*(int *)puVar4[2] + 0x14))(dVar10);
    }
    puVar7 = *(undefined4 **)(param_1 + 0xa0);
  }
  piVar6 = *(int **)(param_1 + 0x3e4);
  if ((piVar6 != (int *)0x0) && (piVar6[0xe] == 0)) {
    if ((double)*(float *)(param_1 + 0x838) <= dVar11) {
      dVar11 = (double)(lbl_8327F894 * *(float *)(param_1 + 0x820));
    }
    piVar6[0x2cf] = (int)(float)((double)(float)piVar6[0x2d0] * dVar11);
    (**(code **)(*piVar6 + 0x14))(piVar6,param_1);
  }
  fn_8257EF78(*(undefined4 *)(param_1 + 0x3e0),param_1);
  fn_8257F0E8(param_1 + 0xcc0);
  fn_8257FDD8(*(undefined4 *)(param_1 + 0x7e4));
  if ((*(int *)(iVar2 + 0x14) != 0) && (*(int *)(iVar2 + 0x18) == 0)) {
    fn_8234FDF0();
  }
  fn_82547650();
  if ((*(int *)(iVar2 + 0x14) != 0) && (*(int *)(iVar2 + 0x18) == 0)) {
    fn_823504A8();
  }
  return;
}

