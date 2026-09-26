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
extern unsigned int *auStack_70;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern int fn_82230110();
extern int fn_82230180();
extern int fn_822315A0();
extern int fn_822360C8();
extern int fn_8223A888();
extern int fn_822402F8();
extern int fn_82248B90();
extern int fn_82297E18();
extern int fn_823AB158();
extern int fn_82516F48();
extern int fn_82516FD8();
extern int fn_8265C9E0();
extern int fn_8287C878();
extern int fn_8288F9A0();
extern int fn_8289D8D0();
extern int fn_8289DAD0();
extern int fn_828A0B50();
extern int fn_828A12E8();
extern int fn_828A9248();
extern int fn_828AA278();
extern int fn_828AD488();
extern int fn_828BABE8();
extern int fn_828BB690();
extern int fn_828BE2C0();
extern int fn_828D9A48();
extern int fn_828DE190();
extern int fn_828DE1F0();
extern int fn_828DE290();
extern int fn_828DEA38();
extern int fn_828EA610();
extern int fn_828EA820();
extern unsigned int iStack_ac;
extern unsigned int iStack_b4;
extern unsigned int iStack_b8;
extern unsigned int stack0x00000018;


void fn_828DEC20(int *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  char cVar9;
  int iVar7;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar8;
  ulonglong uVar6;
  int *piVar10;
  longlong lStack00000018;
  int aiStack_c0 [2];
  int iStack_b8;
  int iStack_b4;
  undefined1 auStack_b0 [4];
  int iStack_ac;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [112];
  
  lStack00000018 = param_2;
  cVar9 = fn_828D9A48();
  if ((((cVar9 == '\0') && (cVar9 = fn_828AD488(param_1), cVar9 != '\0')) &&
      (iVar7 = fn_8289D8D0(param_1), iVar7 != 0)) &&
     ((cVar9 = fn_8289DAD0(), cVar9 != '\0' &&
      (cVar9 = (**(code **)(*param_1 + 0x20))(param_1), cVar9 != '\0')))) {
    piVar10 = param_1 + 0x68;
    for (puVar1 = *(undefined4 **)param_1[0x68];
        (puVar1 != (undefined4 *)param_1[0x68] && (*(longlong *)(puVar1 + 2) != param_2));
        puVar1 = (undefined4 *)*puVar1) {
    }
    if (puVar1 == (undefined4 *)*piVar10) {
      if (9 < (uint)param_1[0x69]) {
        fn_828DE190(piVar10);
      }
      fn_828DE1F0(piVar10,*piVar10,&stack0x00000018);
      uVar2 = param_1[0x23];
      uVar4 = fn_828A0B50(param_1);
      uVar5 = fn_828A12E8(param_1);
      iVar7 = fn_8288F9A0(uVar5,1);
      fn_82230110(auStack_70,0xffffffff82196582);
      iVar8 = 0;
      aiStack_c0[0] = **(int **)(iVar7 + 4);
      if ((int *)aiStack_c0[0] != *(int **)(iVar7 + 4)) {
        do {
          uVar3 = *(undefined4 *)(aiStack_c0[0] + 0x14);
          cVar9 = fn_828A9248(uVar3);
          if (cVar9 == '\0') {
            fn_823AB158(uVar3);
            cVar9 = fn_828EA610();
            if (cVar9 == '\0') {
              uVar5 = fn_828AA278(auStack_90,uVar3);
              fn_822402F8(auStack_70,uVar5);
              fn_82230180(auStack_90);
              fn_823AB158(uVar3);
              iVar8 = fn_828EA820();
              break;
            }
          }
          fn_82248B90(aiStack_c0);
        } while (aiStack_c0[0] != *(int *)(iVar7 + 4));
      }
      fn_82516F48(auStack_a0,param_1 + iVar8 * 4 + 0x52);
      fn_828BB690(&iStack_b8,param_1,0xffffffff8315a140);
      if (iStack_b8 != 0) {
        uVar5 = fn_8287C878(auStack_90,auStack_70);
        fn_828BABE8(auStack_b0,uVar5);
        fn_82297E18(auStack_90);
        uVar5 = fn_828DE290(auStack_90,&iStack_b8,auStack_b0);
        fn_82516FD8(auStack_a0,uVar5);
        fn_8223A888(auStack_90);
        if (iStack_ac != 0) {
          fn_822315A0();
        }
      }
      uVar6 = fn_8265C9E0(0x108);
      if ((uVar6 & 0xffffffff) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = fn_828DEA38(uVar6,param_2,param_4,param_1[10],(ulonglong)uVar2 + 0x14,
                              (ulonglong)uVar2 + 0x40,uVar4,param_1 + iVar8 * 4 + 0x42);
      }
      fn_828BE2C0(param_1,uVar4);
      if (iStack_b4 != 0) {
        fn_822315A0();
      }
      fn_822360C8(auStack_a0);
      fn_82230180(auStack_70);
    }
  }
  return;
}

