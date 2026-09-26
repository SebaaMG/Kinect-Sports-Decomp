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
extern unsigned int *auStack_30;
extern float fRam831cccf8;
extern float fRam831cccfc;
extern int fn_822315A0();
extern int fn_822E5FA8();
extern unsigned int iStack_2c;
extern unsigned int iStack_34;
extern unsigned int iStack_38;
extern unsigned int lbl_82192734;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_83265A28;


double fn_822F9450(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  bool bVar5;
  bool bVar6;
  int *piVar7;
  ulonglong uVar8;
  double dVar9;
  int iStack_38;
  int iStack_34;
  undefined1 auStack_30 [4];
  int iStack_2c;
  
  bVar5 = false;
  fn_822E5FA8(&iStack_38,*(undefined4 *)(param_1 + 8));
  if (iStack_38 != 0) {
    bVar5 = true;
    piVar7 = (int *)fn_822E5FA8(auStack_30,*(undefined4 *)(param_1 + 8));
    bVar6 = false;
    if (*(float *)(*piVar7 + 0x24) <= lbl_821CC160) goto LAB_822f94b4;
  }
  bVar6 = true;
LAB_822f94b4:
  if ((bVar5) && (iStack_2c != 0)) {
    fn_822315A0();
  }
  uVar8 = (ulonglong)*(uint *)(*(int *)(param_1 + 4) + 0x844);
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x83c);
  fVar1 = *(float *)((int)((uVar8 + 0x23 & 0xffffffff) << 2) + iVar3);
  fVar2 = *(float *)((int)((uVar8 + 0x28 & 0xffffffff) << 2) + iVar3);
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  fVar4 = fRam831cccf8;
  if (fRam831cccf8 - fVar1 < 0.0) {
    fVar4 = fVar1;
  }
  fVar1 = fRam831cccfc;
  if (fRam831cccfc - fVar2 < 0.0) {
    fVar1 = fVar2;
  }
  fVar2 = lbl_821CA460;
  if (bVar6) {
    fVar2 = lbl_82192734;
  }
  dVar9 = (double)(fVar2 * ((fVar1 - fVar4) *
                            ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) + fVar4))
  ;
  if (iStack_34 != 0) {
    fn_822315A0();
  }
  return dVar9;
}

