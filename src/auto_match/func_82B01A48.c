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
extern int fn_82AF4E80();
extern int fn_82AF58C0();
extern int fn_82AFBD10();
extern int fn_82AFE520();
extern int fn_82B85568();
extern int fn_82B8D2B8();
extern int fn_82B8D3D0();
extern int fn_82BA02A8();
extern unsigned int lbl_820D7D3F;


undefined8 fn_82B01A48(undefined8 param_1,int param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  bool bVar5;
  char cVar7;
  uint uVar6;
  uint uVar8;
  uint uVar9;
  
  fn_82BA02A8(param_1,param_4);
  uVar3 = *(uint *)(param_2 + 8) >> 7 & 0x7f;
  if ((uVar3 < 0x20) || (bVar5 = true, 0x52 < uVar3)) {
    bVar5 = false;
  }
  if ((!bVar5) || ((*(uint *)(param_2 + 8) & 0x1c000) < 0x4001)) {
    for (iVar1 = *(int *)(param_3 + 4); iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
      iVar2 = *(int *)(iVar1 + 0x10);
      if ((iVar2 != 0) && (param_2 != iVar2)) {
        uVar3 = *(uint *)(param_2 + 8);
        uVar8 = *(uint *)(iVar2 + 8);
        if ((((((uVar8 ^ uVar3) & 0x3f80) == 0) &&
             ((cVar7 = fn_82AF58C0(param_1,iVar2), cVar7 == '\0' &&
              (((uVar8 ^ uVar3) & 1) == 0)))) &&
            (((uVar3 >> 0x17 & 1) != 0 || ((uVar8 >> 0x17 & 1) == 0)))) &&
           ((cVar7 = fn_82B85568(param_2,iVar2,param_1), cVar7 != '\0' &&
            (cVar7 = fn_82B8D2B8(param_1,param_2,iVar2,1,1), cVar7 != '\0')))) {
          uVar3 = *(uint *)(iVar2 + 8);
          uVar8 = uVar3 >> 7 & 0x7f;
          if ((uVar8 < 0x20) || (bVar5 = true, 0x52 < uVar8)) {
            bVar5 = false;
          }
          if ((bVar5) && (0x4000 < (uVar3 & 0x1c000))) {
            return 0;
          }
          for (puVar4 = *(uint **)(param_2 + 4); puVar4 != (uint *)0x0; puVar4 = (uint *)puVar4[2])
          {
            uVar8 = puVar4[4];
            if (((uVar8 != 0) && ((*(uint *)(uVar8 + 8) & 0x3f80) == 0x3700)) &&
               ((*puVar4 & 0xe000000) != 0)) goto LAB_82b01bac;
          }
          uVar8 = 0;
LAB_82b01bac:
          for (puVar4 = *(uint **)(iVar2 + 4); puVar4 != (uint *)0x0; puVar4 = (uint *)puVar4[2]) {
            uVar9 = puVar4[4];
            if (((uVar9 != 0) && ((*(uint *)(uVar9 + 8) & 0x3f80) == 0x3700)) &&
               ((*puVar4 & 0xe000000) != 0)) goto LAB_82b01bec;
          }
          uVar9 = 0;
LAB_82b01bec:
          if ((uVar8 == uVar9) ||
             (((uVar6 = fn_82AF4E80(param_1,uVar8,param_2,uVar9,iVar2), uVar6 < 5 &&
               ((uVar8 == 0 || (uVar9 == 0)))) &&
              (((*(uint *)(param_2 + 8) >> 0x17 & 1) == 0 || ((uVar3 >> 0x17 & 1) == 0)))))) {
            fn_82B8D3D0(param_1,param_2,iVar2,1,1);
            if ((uVar8 != 0) || (uVar9 != 0)) {
              uVar3 = *(uint *)(param_2 + 8) >> 0xe & 7;
              fn_82AFBD10(param_1,uVar8,param_2,uVar3,uVar9,iVar2,(&lbl_820D7D3F)[uVar3],
                                *(uint *)(iVar2 + 8) >> 0xe & 7);
            }
            fn_82AFE520(param_1,param_2,iVar2,0xe4,1,1);
            return 1;
          }
        }
      }
    }
  }
  return 0;
}

