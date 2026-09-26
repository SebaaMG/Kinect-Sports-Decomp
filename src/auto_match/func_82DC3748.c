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
#define TBLr 0
extern int fn_82CE8E78();
extern int fn_82D80CB8();
extern int fn_82D80CE8();
extern int fn_82DAA408();
extern int fn_82DC9F60();
extern unsigned int lbl_8202CF7C;
extern unsigned int lbl_8323B4A0;


undefined8 fn_82DC3748(undefined4 *param_1,ulonglong param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar6;
  int iVar7;
  undefined8 uVar5;
  int iVar8;
  
  iVar6 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar6 + 4);
  if (puVar1 < *(undefined4 **)(iVar6 + 0xc)) {
    *puVar1 = "LtNarrowPhase";
    puVar1[3] = "StPostCollide";
    uVar5 = TBLr;
    puVar1[1] = (int)uVar5;
    *(undefined4 **)(iVar6 + 4) = puVar1 + 4;
  }
  iVar6 = *(int *)(param_3 + 0x14);
  fn_82D80CB8(*param_1,iVar6);
  iVar8 = 0;
  iVar2 = **(int **)(param_3 + 0x20);
  if (0 < iVar2) {
    do {
      if (iVar8 < iVar2 + -4) {
        dataCacheBlockTouch((ulonglong)
                            *(uint *)(((short)((short)iVar8 + 4) + 3) * 4 + *(int *)(param_3 + 0x20)
                                     ));
      }
      piVar4 = *(int **)(((short)iVar8 + 3) * 4 + *(int *)(param_3 + 0x20));
      iVar7 = *(int *)(iVar6 + 8);
      if (*(int *)(iVar6 + 8) <= *piVar4) {
        iVar7 = *piVar4;
      }
      *(int *)(iVar6 + 8) = iVar7;
      *(int *)(iVar6 + 0xc) = piVar4[1] + *(int *)(iVar6 + 0xc);
      *(int *)(iVar6 + 0x10) = piVar4[2] + *(int *)(iVar6 + 0x10);
      *(int *)(iVar6 + 0x14) = piVar4[3] + *(int *)(iVar6 + 0x14);
      uVar3 = piVar4[5];
      if (uVar3 != 0) {
        iVar7 = KeTlsGetValue(lbl_8323B4A0);
        puVar1 = *(undefined4 **)(iVar7 + 4);
        if (puVar1 < *(undefined4 **)(iVar7 + 0xc)) {
          *puVar1 = "MinumCmds";
          puVar1[1] = (float)(longlong)(int)(uVar3 >> 4);
          *(undefined4 **)(iVar7 + 4) = puVar1 + 2;
        }
        fn_82DC9F60(*param_1,(int)piVar4 + piVar4[4] + 0x10,piVar4[5]);
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar2);
  }
  fn_82DAA408(*(undefined4 *)(param_3 + 0x20));
  fn_82D80CE8(*param_1,iVar6);
  iVar6 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar6 + 4);
  if (puVar1 < *(undefined4 **)(iVar6 + 0xc)) {
    *puVar1 = &lbl_8202CF7C;
    uVar5 = TBLr;
    puVar1[1] = (int)uVar5;
    *(undefined4 **)(iVar6 + 4) = puVar1 + 3;
  }
  if ((param_2 & 0xffffffff) == 0) {
    uVar5 = 2;
  }
  else {
    uVar5 = fn_82CE8E78(param_2,param_3,param_3,0);
  }
  return uVar5;
}

