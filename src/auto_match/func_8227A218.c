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
extern unsigned int *auStack_b0;
extern unsigned int *auStack_c0;
extern int fn_82264E68();
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_82526C70();
extern int fn_8266F668();
extern int fn_82672C20();
extern unsigned int uStack_cc;
extern unsigned int uStack_d0;


void fn_8227A218(int param_1,ulonglong param_2,ulonglong param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  double dStack_c8;
  ulonglong auStack_c0 [2];
  undefined1 auStack_b0 [176];
  
  uVar7 = 1;
  *(undefined4 *)(param_1 + 0xfc) = 1;
  if (*(int *)(param_1 + 0xdc) != 0) {
    iVar5 = (int)param_3;
    if ((iVar5 < 0x14) || (99 < iVar5)) {
      uVar7 = 0;
    }
    piVar1 = *(int **)(param_1 + 0xa4);
    *(undefined4 *)(param_1 + 0x100) = uVar7;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1,param_2,param_3);
    }
    puVar6 = *(undefined4 **)(param_1 + 0x10);
    for (puVar2 = (undefined4 *)*puVar6; puVar2 != puVar6; puVar2 = (undefined4 *)*puVar2) {
      iVar3 = puVar2[2];
      if ((ulonglong)*(uint *)(iVar3 + 0x10) == (param_2 & 0xffffffff)) {
        if (((0x28 < *(uint *)(iVar3 + 0x278)) && (*(uint *)(iVar3 + 0x278) < 100)) &&
           ((param_3 & 0xffffffff) == 0)) {
          uVar4 = fn_8266F668(auStack_c0,*(undefined4 *)(param_1 + 8));
          fn_82264E68(uVar4,iVar3 + 0x18,iVar3 + 100);
        }
        *(int *)(iVar3 + 0x278) = iVar5;
        uStack_d0 = 0;
        uStack_cc = 0;
        fn_82273CD8(&uStack_d0,3);
        auStack_c0[0] = param_3 & 0xffffffff;
        dStack_c8 = (double)auStack_c0[0];
        fn_82526C70(auStack_b0,0x80,0xffffffff821a8218,iVar3 + 0x18);
        fn_82672C20(*(undefined4 *)(iVar3 + 8),auStack_b0,&uStack_d0,1);
        fn_82273C88(&uStack_d0);
        break;
      }
      puVar6 = *(undefined4 **)(param_1 + 0x10);
    }
  }
  *(undefined4 *)(param_1 + 0xfc) = 0;
  return;
}

