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
extern unsigned int *auStack_240;
extern unsigned int *auStack_258;
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_82CED958();
extern int fn_82CEDB38();
extern int fn_82CEE578();
extern unsigned int *lbl_8323B464;
extern unsigned int uStack_260;


void fn_82DE1848(int *param_1,int *param_2,byte *param_3)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined4 uVar6;
  ulonglong in_r0;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined8 uStack_260;
  undefined1 auStack_258 [24];
  undefined1 auStack_240 [576];
  
LAB_82de1874:
  bVar1 = *param_3;
  uVar9 = (ulonglong)bVar1;
  if (0x6b < uVar9) {
switchD_82de1894_caseD_8:
    fn_82CEE578(auStack_258,auStack_240,0x200);
    fn_82CEDB38(auStack_258,0xffffffff82142a88);
    iVar7 = (**(code **)(*lbl_8323B464 + 0xc))
                      (lbl_8323B464,3,0x1298fedd,auStack_240,0xffffffff82142ddc,0x131);
    if (iVar7 != 0) {
      trapWord(0x1f,in_r0,0x16);
    }
                    /* WARNING: Subroutine does not return */
    fn_82CED958(auStack_258);
  }
  in_r0 = (ulonglong)*(uint *)((uint)bVar1 * 4 + -0x7d21e768);
  switch(bVar1) {
  case 0:
    goto switchD_82de1894_caseD_0;
  case 1:
  case 2:
  case 3:
  case 4:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
    param_3 = param_3 + 4;
    goto LAB_82de1874;
  case 5:
    param_3 = param_3 + param_3[1] + 2;
    goto LAB_82de1874;
  case 6:
    param_3 = param_3 + (uint)param_3[1] * 0x100 + (uint)param_3[2] + 3;
    goto LAB_82de1874;
  case 7:
    param_3 = param_3 + ((uint)param_3[1] * 0x100 + (uint)param_3[2]) * 0x100 + (uint)param_3[3] + 4
    ;
    goto LAB_82de1874;
  case 8:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x5b:
  case 0x5c:
  case 0x5d:
  case 0x5e:
  case 0x5f:
    goto switchD_82de1894_caseD_8;
  case 9:
    pbVar2 = param_3 + 1;
    if (param_2 != (int *)&uStack_260) {
      uStack_260 = *(undefined8 *)param_2;
      param_2 = (int *)&uStack_260;
    }
    param_3 = param_3 + 2;
    uStack_260 = CONCAT44((((U64)(uStack_260) >> 0) & 0xFFFFFFFF) + (uint)*pbVar2,(((U64)(uStack_260) >> 32) & 0xFFFFFFFF));
    goto LAB_82de1874;
  case 10:
    pbVar2 = param_3 + 1;
    pbVar3 = param_3 + 2;
    if (param_2 != (int *)&uStack_260) {
      uStack_260 = *(undefined8 *)param_2;
      param_2 = (int *)&uStack_260;
    }
    param_3 = param_3 + 3;
    uStack_260 = CONCAT44((uint)*pbVar2 * 0x100 + (uint)*pbVar3 + (((U64)(uStack_260) >> 0) & 0xFFFFFFFF),(((U64)(uStack_260) >> 32) & 0xFFFFFFFF))
    ;
    goto LAB_82de1874;
  case 0xb:
    if (param_2 != (int *)&uStack_260) {
      uStack_260 = *(undefined8 *)param_2;
      param_2 = (int *)&uStack_260;
    }
    uStack_260 = CONCAT44((((uint)param_3[1] * 0x100 + (uint)param_3[2]) * 0x100 + (uint)param_3[3])
                          * 0x100 + (uint)param_3[4],(((U64)(uStack_260) >> 32) & 0xFFFFFFFF));
    param_3 = param_3 + 5;
    goto LAB_82de1874;
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x26:
  case 0x27:
  case 0x28:
    param_3 = param_3 + 3;
    goto LAB_82de1874;
  case 0x23:
  case 0x24:
  case 0x25:
    param_3 = param_3 + (uint)param_3[3] * 0x100 + (uint)param_3[4] + 7;
    goto LAB_82de1874;
  case 0x29:
  case 0x2a:
  case 0x2b:
    param_3 = param_3 + 7;
    goto LAB_82de1874;
  default:
    uVar10 = bVar1 - 0x30;
    break;
  case 0x50:
    uVar10 = (uint)param_3[1];
    break;
  case 0x51:
    uVar10 = (uint)param_3[1] * 0x100 + (uint)param_3[2];
    break;
  case 0x52:
    uVar10 = ((uint)param_3[1] * 0x100 + (uint)param_3[2]) * 0x100 + (uint)param_3[3];
    break;
  case 0x53:
    uVar10 = (uint)param_3[3] * 0x100 + (uint)param_3[4] +
             ((uint)param_3[1] * 0x100 + (uint)param_3[2]) * 0x10000;
    break;
  case 0x60:
  case 0x61:
  case 0x62:
  case 99:
    pbVar2 = param_3 + 1;
    param_3 = param_3 + 2;
    *(uint *)(auStack_258 + (int)((uVar9 - 0x60 & 0xffffffff) << 2) + -4) = (uint)*pbVar2;
    goto LAB_82de1c08;
  case 100:
  case 0x65:
  case 0x66:
  case 0x67:
    pbVar2 = param_3 + 1;
    pbVar3 = param_3 + 2;
    param_3 = param_3 + 3;
    *(uint *)(auStack_258 + (int)((uVar9 - 100 & 0xffffffff) << 2) + -4) =
         (uint)*pbVar2 * 0x100 + (uint)*pbVar3;
    goto LAB_82de1c08;
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6b:
    pbVar2 = param_3 + 1;
    pbVar3 = param_3 + 2;
    pbVar4 = param_3 + 3;
    pbVar5 = param_3 + 4;
    param_3 = param_3 + 5;
    *(uint *)(auStack_258 + (int)((uVar9 - 0x68 & 0xffffffff) << 2) + -4) =
         (((uint)*pbVar2 * 0x100 + (uint)*pbVar3) * 0x100 + (uint)*pbVar4) * 0x100 + (uint)*pbVar5;
LAB_82de1c08:
    uVar6 = (((U64)(uStack_260) >> 32) & 0xFFFFFFFF);
    if (param_2 != (int *)&uStack_260) {
      uStack_260 = *(undefined8 *)param_2;
      param_2 = (int *)&uStack_260;
    }
    uStack_260 = CONCAT44((((U64)(uStack_260) >> 0) & 0xFFFFFFFF),uVar6);
    goto LAB_82de1874;
  }
  iVar7 = *param_2;
  param_1 = (int *)*param_1;
  iVar8 = fn_82CE5410();
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
    fn_82CE63B0(*(undefined4 *)(iVar8 + 0x10),param_1,4);
  }
  iVar8 = param_1[1];
  param_1[1] = iVar8 + 1;
  *(uint *)(iVar8 * 4 + *param_1) = iVar7 + uVar10;
switchD_82de1894_caseD_0:
  return;
}

