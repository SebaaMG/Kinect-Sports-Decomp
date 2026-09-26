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
extern int fn_82248B90();
extern int fn_82517978();
extern int fn_8288F9A0();
extern int fn_828A12E8();
extern int fn_828BCC48();
extern int fn_828C2BD8();


/* WARNING: Type propagation algorithm not settling */

undefined8 fn_825167F8(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  int aiStack_3c [15];
  
  for (puVar9 = *(uint **)(param_1 + 0x68); puVar9 != *(uint **)(param_1 + 0x6c);
      puVar9 = puVar9 + 4) {
    uVar2 = *(undefined4 *)(param_1 + 0x10);
    uVar6 = fn_828A12E8(uVar2);
    iVar7 = fn_8288F9A0(uVar6,1);
    aiStack_3c[0] = **(int **)(iVar7 + 4);
    while( true ) {
      iVar7 = aiStack_3c[0];
      uVar6 = fn_828A12E8(uVar2);
      iVar8 = fn_8288F9A0(uVar6,1);
      if (iVar7 == *(int *)(iVar8 + 4)) break;
      uVar4 = puVar9[2];
      uVar1 = *puVar9;
      uVar5 = *(undefined4 *)(param_1 + 0x10);
      uVar6 = (**(code **)(**(int **)(iVar7 + 0x14) + 0x44))();
      fn_828C2BD8(uVar5,uVar6,(ulonglong)uVar1 + 0xc,(ulonglong)uVar4 + 8);
      fn_82248B90(aiStack_3c);
    }
  }
  puVar9 = *(uint **)(param_1 + 0x78);
  if (puVar9 != *(uint **)(param_1 + 0x7c)) {
    do {
      uVar2 = *(undefined4 *)(param_1 + 0x10);
      uVar6 = fn_828A12E8(uVar2);
      iVar7 = fn_8288F9A0(uVar6,1);
      aiStack_3c[0] = **(int **)(iVar7 + 4);
      while( true ) {
        iVar7 = aiStack_3c[0];
        uVar6 = fn_828A12E8(uVar2);
        iVar8 = fn_8288F9A0(uVar6,1);
        if (iVar7 == *(int *)(iVar8 + 4)) break;
        aiStack_3c[1] = 0;
        aiStack_3c[2] = 0;
        piVar3 = *(int **)(iVar7 + 0x14);
        fn_82517978(aiStack_3c + 1,puVar9[2],puVar9[3],0);
        uVar4 = *puVar9;
        uVar5 = *(undefined4 *)(param_1 + 0x10);
        uVar6 = (**(code **)(*piVar3 + 0x44))(piVar3);
        fn_828BCC48(uVar5,uVar6,(ulonglong)uVar4 + 0xc,aiStack_3c + 1);
        fn_82248B90(aiStack_3c);
      }
      puVar9 = puVar9 + 4;
    } while (puVar9 != *(uint **)(param_1 + 0x7c));
  }
  return 0;
}

