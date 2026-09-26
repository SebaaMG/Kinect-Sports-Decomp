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
extern int fn_8225F160();
extern int fn_8228ABB8();
extern int fn_8234F338();
extern int fn_82484768();
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_82A81CC0();
extern int fn_82F68CC0();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;


void fn_82288040(int param_1,int param_2)

{
  float fVar1;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  float afStack_40 [2];
  longlong alStack_38 [7];
  
  pcVar4 = strstr((char *)(*(int *)(param_1 + 0x11f0) + 0x234),"boxing");
  if (pcVar4 == (char *)0x0) {
    uVar8 = (longlong)(int)lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    if ((longlong)uVar8 < 1) {
      uVar5 = 0;
      goto LAB_822880c4;
    }
  }
  else {
    uVar5 = fn_82A81CC0((ulonglong)*(uint *)(param_1 + 0x11f0) + 0x844);
    uVar8 = (ulonglong)lbl_83265A28;
    uVar5 = (uint)LZCOUNT((uVar5 & 0xff) - 1) >> 5;
LAB_822880c4:
    if (uVar5 == 0) {
      lbl_83265A28 = (int)uVar8 * 0x19660d + 0x3c6ef35f;
      uVar5 = *(uint *)(param_1 + 0x1230);
      afStack_40[0] = (float)(lbl_83265A28 & 0x7fffff | 0x3f800000);
      fVar1 = (afStack_40[0] - lbl_821CA460) * (float)(longlong)*(int *)(param_1 + 0x1238);
      goto LAB_82288178;
    }
  }
  lbl_83265A28 = (int)uVar8 * 0x19660d + 0x3c6ef35f;
  uVar5 = *(uint *)(param_1 + 0x122c);
  afStack_40[0] = (float)(lbl_83265A28 & 0x7fffff | 0x3f800000);
  fVar1 = (afStack_40[0] - lbl_821CA460) * (float)(longlong)*(int *)(param_1 + 0x1234);
LAB_82288178:
  alStack_38[0] = (longlong)(int)fVar1;
  lVar9 = (ulonglong)(uint)(int)fVar1 * 0x24 + (ulonglong)uVar5;
  iVar6 = fn_8225F160();
  iVar6 = param_2 * 0x28 + iVar6;
  fn_82F68CC0(iVar6 + 300,lVar9,0x24);
  *(undefined4 *)(iVar6 + 0x150) = 1;
  uVar2 = fn_8251F720(lVar9 + 0x20,0);
  uVar3 = fn_82484768(*(undefined4 *)(param_1 + 0x11f0));
  fn_8234F338((ulonglong)*(uint *)(param_1 + 0x11f0) + 0x234,uVar3,alStack_38,afStack_40);
  fn_8228ABB8(param_1,param_2,uVar2,alStack_38,afStack_40);
  iVar6 = param_2 * 0x40 + param_1;
  *(undefined4 *)(iVar6 + 0x6a8) = 2;
  uVar7 = fn_82484768(*(undefined4 *)(param_1 + 0x11f0));
  *(undefined4 *)(iVar6 + 0x6c4) = uVar7;
  *(undefined4 *)(iVar6 + 0x6b8) = 0;
  *(undefined4 *)(iVar6 + 0x6bc) = 1;
  fn_8251FA58(uVar2);
  return;
}

