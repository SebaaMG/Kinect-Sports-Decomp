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
extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern int fn_82BE50B0();
extern int fn_82BE5240();
extern int fn_82BF0438();
extern int fn_82F643F8();
extern int memcpy();
extern unsigned int iStack_5c;
extern float lbl_8200F038;
extern unsigned int lbl_8201543C;
extern unsigned int lbl_8209AA0C;
extern unsigned int lbl_820EB368;
extern unsigned int lbl_820EB38C;
extern unsigned int lbl_820EB3AC;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_831754D8;
extern unsigned int lbl_8322B270;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 fn_82BF0578(int param_1,int param_2,int param_3,int param_4)

{
  float fVar1;
  ushort uVar2;
  int iVar3;
  int *piVar4;
  undefined8 uVar5;
  uint uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  int iStack_5c;
  
  iVar3 = *(int *)(param_1 + 0x2c);
  if (iVar3 == 0) {
    uVar2 = *(ushort *)(param_1 + 0x5c);
  }
  else {
    uVar2 = *(ushort *)(iVar3 + 0x5a);
  }
  if (iVar3 == 0) {
    fVar1 = *(float *)(param_1 + 0x60);
  }
  else {
    fVar1 = *(float *)(iVar3 + 0x5c);
  }
  dVar8 = (double)fVar1;
  iVar3 = *(int *)(param_2 + 8);
  if (iVar3 == 0) {
    return 0;
  }
  piVar4 = (int *)fn_82BE50B0(iVar3,1);
  if (piVar4 == (int *)0x0) {
    return 0;
  }
  fn_82BF0438(param_1,*(undefined2 *)(piVar4 + 4),*(undefined2 *)((int)piVar4 + 0x12));
  *(undefined4 *)(iVar3 + 0x60) = 3;
  if (*piVar4 == 0) {
    uVar6 = piVar4[5];
    if ((uVar6 == 0) || (lbl_831754D8 < uVar6)) {
      uVar5 = 0xffffffff820eb31c;
LAB_82bf08b4:
      fn_82BE5240(param_1,0x19a,uVar5,uVar6,*(undefined2 *)((int)piVar4 + 0x12),
                        *(undefined2 *)(piVar4 + 4));
      return 0;
    }
  }
  else if (*piVar4 == 1) {
    uVar6 = piVar4[5];
    if ((uVar6 == 0) ||
       ((uint)*(ushort *)((int)piVar4 + 0x12) * (uint)*(ushort *)(piVar4 + 4) < uVar6)) {
      uVar5 = 0xffffffff820eb3b0;
      goto LAB_82bf08b4;
    }
    piVar4[5] = (int)(longlong)((double)SQRT((float)uVar6) * lbl_8200F038);
  }
  uVar6 = piVar4[1];
  dVar9 = (double)lbl_8209AA0C;
  if (uVar6 != 0) {
    if (uVar6 == 1) {
      dVar8 = (double)(float)piVar4[6];
      if ((dVar8 < (double)lbl_821AAD20) || ((double)lbl_820EB38C < dVar8)) {
        fn_82BE5240(param_1,0x19a,0xffffffff820eb36c,dVar8);
        return 0;
      }
    }
    else {
      if (2 < uVar6) goto LAB_82bf0770;
      dVar8 = (double)(float)piVar4[6];
      if ((dVar8 < (double)lbl_821AAD20) || ((double)lbl_8201543C < dVar8)) {
        fn_82BE5240(param_1,0x19a,0xffffffff820eb390,dVar8);
        return 0;
      }
      piVar4[6] = (int)(float)(dVar8 * (double)lbl_820EB3AC);
    }
                    /* WARNING: Subroutine does not return */
    fn_82F643F8();
  }
  dVar7 = (double)(float)piVar4[6];
  if ((dVar7 < (double)lbl_820EB368) || (dVar9 < dVar7)) {
    fn_82BE5240(param_1,0x19a,0xffffffff820eb344,dVar7);
    return 0;
  }
LAB_82bf0770:
  if (piVar4[3] != 0) {
    *(undefined4 *)(iVar3 + 0x60) = 1;
    dVar7 = (double)(float)piVar4[6];
    fVar1 = (float)(uint)piVar4[5] * lbl_8322B270;
    iStack_5c = (int)(longlong)fVar1;
    piVar4[5] = iStack_5c;
    if (((dVar8 <= dVar7) && ((ulonglong)uVar2 <= ((longlong)fVar1 & 0xffffffffU))) &&
       (dVar7 < dVar9)) {
      *(undefined4 *)(iVar3 + 0x60) = 2;
      if ((float)*(uint *)(param_3 + 0x14) * *(float *)(param_3 + 0x18) <=
          (float)(uint)piVar4[5] * (float)piVar4[6]) {
        memcpy(param_3,piVar4,0x24);
      }
      return 1;
    }
    if ((param_4 == 0) &&
       ((float)*(uint *)(param_3 + 0x14) * *(float *)(param_3 + 0x18) <=
        (float)((double)(uint)piVar4[5] * dVar7))) {
      memcpy(param_3,piVar4,0x24);
    }
  }
  return 0;
}

