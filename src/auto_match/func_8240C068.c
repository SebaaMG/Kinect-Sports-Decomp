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
extern int fn_8240BCE8();
extern unsigned int lbl_83265A28;


void fn_8240C068(int param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  int *piVar8;
  bool bVar9;
  
  iVar4 = *(int *)(param_1 + 0x4c);
  if (*(int *)(param_1 + 100) < iVar4) {
    uVar2 = (**(code **)(*(int *)(param_1 + 0x44) + 8))(param_1 + 0x44);
    pcVar1 = *(code **)(*(int *)(param_1 + 0x44) + 4);
  }
  else {
    if (*(int *)(param_1 + 100) <= iVar4) {
      if (iVar4 < 1) {
        uVar2 = 0;
        uVar3 = 0;
        uVar6 = 5;
        goto LAB_8240c1dc;
      }
      piVar8 = *(int **)(*(int *)(param_1 + 4) + 0x84);
      if (piVar8 == (int *)0x0) {
        lVar7 = (longlong)lbl_83265A28 * 0x19660d + 0x3c6ef35f;
        lbl_83265A28 = (int)lVar7;
        if (lVar7 < 1) {
          bVar9 = false;
          goto LAB_8240c16c;
        }
        bVar9 = true;
LAB_8240c174:
        pcVar1 = *(code **)(*(int *)(param_1 + 0x44) + 8);
      }
      else {
        iVar4 = (**(code **)(*piVar8 + 4))();
        cVar5 = (**(code **)(*(int *)(iVar4 + 0x2e0) + 0x3c))();
        bVar9 = cVar5 != '\0';
LAB_8240c16c:
        if (bVar9) goto LAB_8240c174;
        pcVar1 = *(code **)(*(int *)(param_1 + 0x44) + 4);
      }
      piVar8 = (int *)(param_1 + 0x44);
      uVar2 = (*pcVar1)(piVar8);
      if (bVar9) {
        pcVar1 = *(code **)(*piVar8 + 4);
      }
      else {
        pcVar1 = *(code **)(*piVar8 + 8);
      }
      uVar3 = (*pcVar1)(piVar8);
      uVar6 = 1;
      goto LAB_8240c1dc;
    }
    uVar2 = (**(code **)(*(int *)(param_1 + 0x44) + 4))(param_1 + 0x44);
    pcVar1 = *(code **)(*(int *)(param_1 + 0x44) + 8);
  }
  uVar3 = (*pcVar1)(param_1 + 0x44);
  uVar6 = 1;
LAB_8240c1dc:
  fn_8240BCE8(param_1,uVar6,uVar3,uVar2);
  return;
}

