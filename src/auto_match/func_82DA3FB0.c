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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
#define TBLr 0
extern unsigned int fStack_34;
extern unsigned int fStack_38;
extern int fn_82DA3900();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_8323B4A0;
extern unsigned int uStack_40;


ulonglong fn_82DA3FB0(double param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined8 uVar3;
  int iVar5;
  ulonglong uVar4;
  undefined8 uStack_40;
  float fStack_38;
  float fStack_34;
  
  iVar5 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar5 + 4);
  if (puVar1 < *(undefined4 **)(iVar5 + 0xc)) {
    *puVar1 = "TtPhysics";
    uVar3 = TBLr;
    puVar1[1] = (int)uVar3;
    *(undefined4 **)(iVar5 + 4) = puVar1 + 3;
  }
  *(float *)(param_2 + 0x1c) = (float)param_1;
  fStack_38 = (float)((double)(float)((double)*(float *)(param_2 + 0x18) + param_1) -
                     (double)*(float *)(param_2 + 0x18));
  fStack_34 = lbl_821AAD20;
  if (fStack_38 != lbl_821AAD20) {
    fStack_34 = lbl_82002AE0 / fStack_38;
  }
  iVar5 = *(int *)(param_2 + 0xc);
  *(undefined8 *)(iVar5 + 0x1d0) = uStack_40;
  *(ulonglong *)(iVar5 + 0x1d8) = CONCAT44(fStack_38,fStack_34);
  iVar5 = *(int *)(*(int *)(param_2 + 0xc) + 0x78);
  *(undefined8 *)(iVar5 + 0x50) = uStack_40;
  *(ulonglong *)(iVar5 + 0x58) = CONCAT44(fStack_38,fStack_34);
  piVar2 = *(int **)(*(int *)(param_2 + 0xc) + 0x4c);
  (**(code **)(*piVar2 + 0x10))(piVar2,*(int *)(param_2 + 0xc),&uStack_40);
  uVar4 = fn_82DA3900(param_2,&uStack_40);
  *(int *)(param_2 + 0x28) = (int)uVar4;
  if ((uVar4 & 0xffffffff) == 0) {
    *(undefined1 *)(param_2 + 0x10) = 0;
  }
  iVar5 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar5 + 4);
  if (puVar1 < *(undefined4 **)(iVar5 + 0xc)) {
    *puVar1 = &lbl_82132BC4;
    uVar3 = TBLr;
    puVar1[1] = (int)uVar3;
    *(undefined4 **)(iVar5 + 4) = puVar1 + 3;
  }
  return uVar4;
}

