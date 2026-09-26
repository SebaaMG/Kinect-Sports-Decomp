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
#define ZEXT48(x) ((U64)((U32)(x)))
extern int fn_823AAD88();
extern int fn_82A1E438();
extern int fn_82C0BD58();
extern int fn_82C0BE40();
extern U64 storeWordConditionalIndexed();


void fn_82C0F520(ulonglong param_1)

{
  int *piVar3;
  ulonglong uVar1;
  uint uVar4;
  int iVar5;
  int *piVar6;
  ulonglong uVar2;
  longlong lVar7;
  uint *puVar8;
  undefined8 in_MSR;
  char in_RESERVE;
  byte in_cr0;
  code *pcVar9;
  int *piStack_40;
  int *apiStack_3c [15];
  
  piVar3 = (int *)param_1;
  uVar1 = (**(code **)(*piVar3 + 0x100))();
joined_r0x82c0f548:
  if ((uVar1 & 4) == 0) {
    (**(code **)(*(int *)piVar3[0xb] + 0x40))((int *)piVar3[0xb],&piStack_40,0,0);
    if (piStack_40 != (int *)0x0) {
      (**(code **)(*(int *)piVar3[0xb] + 0x44))((int *)piVar3[0xb],apiStack_3c,0,0);
      (**(code **)(*piStack_40 + 0xc))();
      (**(code **)(*piStack_40 + 0x30))(piStack_40,1,0xffffffff82c0d590,param_1);
      pcVar9 = *(code **)(*piStack_40 + 0x14);
      uVar1 = ZEXT48(piStack_40);
      do {
        while( true ) {
          (*pcVar9)(uVar1);
          uVar4 = (**(code **)(*piVar3 + 0x100))(param_1);
          uVar1 = param_1;
          if (uVar4 != 0) break;
LAB_82c0f6c4:
          (**(code **)(*piVar3 + 0x108))(param_1,3);
          (**(code **)(*piStack_40 + 0xc))();
          iVar5 = fn_823AAD88(apiStack_3c[0]);
          if (iVar5 == 0) {
            (**(code **)(*piStack_40 + 0x14))();
            pcVar9 = *(code **)(*piVar3 + 0xac);
          }
          else {
            uVar1 = fn_82C0BD58(apiStack_3c[0]);
            piVar6 = (int *)uVar1;
            uVar2 = (**(code **)(*piVar6 + 0x58))();
            if ((uVar2 & 0xffffffff) == 0) {
              (**(code **)(*piVar6 + 8))(uVar1);
              pcVar9 = *(code **)(*piStack_40 + 0x14);
              goto LAB_82c0f8e8;
            }
            (**(code **)(*piVar6 + 0x38))(uVar1,1);
            lVar7 = param_1 + 0xf4;
            do {
              puVar8 = (uint *)lVar7;
              if (in_RESERVE != '\0') {
                uVar4 = storeWordConditionalIndexed((ulonglong)*puVar8 + 1,0,lVar7);
                *puVar8 = uVar4;
                in_cr0 = 2;
              }
            } while (!(bool)(in_cr0 >> 1 & 1));
            pcVar9 = *(code **)(*piStack_40 + 0x38);
            (*pcVar9)(piStack_40,uVar1,pcVar9,*piStack_40,in_MSR);
            (**(code **)(*piVar6 + 0x48))(uVar1,8);
            iVar5 = (**(code **)(*piStack_40 + 0x50))(piStack_40,uVar2 - 8);
            if (iVar5 < 0) {
              if (iVar5 != -0x7ffffff6) goto LAB_82c0f7bc;
              (**(code **)(*piVar6 + 0x48))(uVar1,uVar2 - 8);
              do {
                if (in_RESERVE != '\0') {
                  uVar4 = storeWordConditionalIndexed((ulonglong)*puVar8 - 1,0,lVar7);
                  *puVar8 = uVar4;
                  in_cr0 = 2;
                }
              } while (!(bool)(in_cr0 >> 1 & 1));
              (**(code **)(*piStack_40 + 0x14))();
              pcVar9 = *(code **)(*piVar3 + 0xac);
              uVar2 = param_1;
            }
            else {
              fn_82C0BE40(apiStack_3c[0]);
LAB_82c0f7bc:
              pcVar9 = *(code **)(*piStack_40 + 0x14);
              uVar2 = ZEXT48(piStack_40);
            }
            (*pcVar9)(uVar2);
            pcVar9 = *(code **)(*piVar6 + 8);
          }
        }
        if ((uVar4 & 6) != 0) goto LAB_82c0f86c;
        if ((uVar4 & 1) == 0) goto LAB_82c0f6c4;
        iVar5 = (**(code **)(*piVar3 + 0xf4))(param_1);
        if (iVar5 != 5) {
          (**(code **)(*piVar3 + 0x108))(param_1,4);
          (**(code **)(*piStack_40 + 0xc))();
          (**(code **)(*piStack_40 + 0x54))(piStack_40,3);
          (**(code **)(*piStack_40 + 0x14))();
          (**(code **)(*piVar3 + 0x108))(param_1,5);
        }
        pcVar9 = *(code **)(*piVar3 + 0xac);
      } while( true );
    }
    goto LAB_82c0f9dc;
  }
LAB_82c0fa64:
  (**(code **)(*piVar3 + 0x108))(param_1,8);
  (**(code **)(*piVar3 + 0xdc))(param_1);
  return;
LAB_82c0f86c:
  (**(code **)(*piVar3 + 0x108))(param_1,6);
  (**(code **)(*piStack_40 + 0xc))();
  (**(code **)(*piStack_40 + 0x54))(piStack_40,4);
  pcVar9 = *(code **)(*piStack_40 + 0x14);
LAB_82c0f8e8:
  (*pcVar9)();
  iVar5 = (**(code **)(*piVar3 + 0xf4))(param_1);
  if (iVar5 != 6) {
    (**(code **)(*piVar3 + 0x108))(param_1,6);
    (**(code **)(*piStack_40 + 0xc))();
    (**(code **)(*piStack_40 + 0x54))(piStack_40,2);
    (**(code **)(*piStack_40 + 0x14))();
  }
  (**(code **)(*piStack_40 + 0xc))();
  (**(code **)(*piStack_40 + 0x3c))();
  (**(code **)(*piStack_40 + 0x14))();
  if (piStack_40 != (int *)0x0) {
    (**(code **)(*piStack_40 + 8))();
    piStack_40 = (int *)0x0;
  }
  if (apiStack_3c[0] != (int *)0x0) {
    (**(code **)(*apiStack_3c[0] + 8))();
    apiStack_3c[0] = (int *)0x0;
  }
LAB_82c0f9dc:
  (**(code **)(*piVar3 + 0xb4))(param_1);
  uVar4 = (**(code **)(*piVar3 + 0x100))(param_1);
  if ((uVar4 & 4) != 0) goto LAB_82c0fa64;
  (**(code **)(*piVar3 + 0x108))(param_1,7);
  (**(code **)(*piVar3 + 0xdc))(param_1);
  fn_82A1E438(piVar3[0x44]);
  uVar1 = (**(code **)(*piVar3 + 0x100))(param_1);
  goto joined_r0x82c0f548;
}

