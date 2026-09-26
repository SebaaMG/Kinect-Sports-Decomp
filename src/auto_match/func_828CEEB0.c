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
extern unsigned int *auStack_a0;
extern int fn_8223B6E0();
extern int fn_822D7FE0();
extern int fn_823AA970();
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern int fn_828865A0();
extern int fn_82886C90();
extern int fn_8288C2E0();
extern int fn_8289F2E0();
extern int fn_828B22F0();
extern int fn_828B27A8();
extern int fn_828CD558();
extern int fn_828CD7B8();
extern int fn_828CED70();
extern int fn_828E9D60();
extern int fn_828E9D90();
extern unsigned int iStack_68;
extern unsigned int iStack_94;
extern unsigned int iStack_98;
extern unsigned int lbl_82026584;
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_9c;


undefined8 fn_828CEEB0(undefined8 param_1,int param_2,int *param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  char cVar8;
  int iVar5;
  undefined8 uVar3;
  int *piVar6;
  uint *puVar7;
  ulonglong uVar4;
  undefined4 uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined1 auStack_a0 [4];
  uint uStack_9c;
  int iStack_98;
  int iStack_94;
  undefined1 auStack_80 [24];
  int iStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  
  fn_8288C2E0(&iStack_98,auStack_a0);
  cVar8 = fn_828865A0(param_3);
  if (cVar8 != '\0') {
    (**(code **)(*param_3 + 4))(param_3);
    iVar5 = fn_82886C90();
    if (iVar5 == 0) {
      (**(code **)(*param_3 + 0x48))(param_3,param_4);
      fn_822D7FE0(auStack_80);
      (**(code **)(*param_3 + 0xc))(param_3,auStack_80);
      iVar5 = fn_828E9D90(auStack_80);
      uVar10 = (ulonglong)(iVar5 + 0x18ff) / 0x1900;
      if (uVar10 == 1) {
        (**(code **)(*param_3 + 0x48))(param_3,0xffffffffffffffff);
        fn_828CD7B8(param_1,&iStack_98);
        fn_8223B6E0(auStack_80);
      }
      else {
        uVar3 = fn_8289F2E0(*(undefined4 *)(param_2 + 0x10),param_4);
        uStack_9c = fn_823AA970();
        piVar6 = (int *)fn_828CED70(param_2,&uStack_9c);
        iVar1 = *piVar6;
        uStack_9c = fn_823AA970(uVar3);
        puVar7 = (uint *)fn_828CED70(param_2,&uStack_9c);
        uVar12 = 0;
        lVar11 = 0;
        *puVar7 = iVar1 + 1U & 0xff;
        if (uVar10 != 0) {
          do {
            fn_828E9D60(auStack_80,lVar11);
            uVar4 = fn_8265C9E0(200);
            iVar2 = iStack_98;
            if ((uVar4 & 0xffffffff) == 0) {
              uStack_9c = 0;
            }
            else {
              uStack_9c = iVar5 - (int)lVar11;
              if (iStack_94 == 0) {
                uVar9 = 0;
              }
              else {
                uVar9 = *(undefined4 *)(*(int *)(iStack_98 + 4) + 8);
              }
              puVar7 = &uStack_9c;
              if (0x18ff < uStack_9c) {
                puVar7 = (uint *)&lbl_82026584;
              }
              uStack_9c = fn_828CD558(uVar4,param_3,uVar9,iVar1,uVar12,uVar10,auStack_80,*puVar7);
            }
            fn_828B27A8(&iStack_98,iVar2,&uStack_9c);
            uVar12 = uVar12 + 1;
            lVar11 = lVar11 + 0x1900;
          } while ((uVar12 & 0xffffffff) < uVar10);
        }
        fn_828CD7B8(param_1,&iStack_98);
        if (iStack_68 != 0) {
          fn_8265CA20();
        }
        iStack_68 = 0;
        uStack_64 = 0;
        uStack_60 = 0;
      }
      goto LAB_828cf0d4;
    }
  }
  fn_828CD7B8(param_1,&iStack_98);
LAB_828cf0d4:
  fn_828B22F0(&iStack_98);
  fn_8265CA20(iStack_98);
  return param_1;
}

