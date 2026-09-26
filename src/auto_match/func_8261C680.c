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
extern int fn_8251E4D0();
extern int fn_82599808();
extern int fn_825D0598();
extern int fn_825D2CA8();
extern int fn_82A1DD38();
extern unsigned int uStack_3c;
extern V16 vectorConditionalSelect();
extern V16 vectorMultiplyAddFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_8261C680(int param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar5;
  longlong lVar3;
  uint *puVar6;
  undefined8 uVar4;
  ulonglong uVar7;
  int *piVar8;
  uint *puVar9;
  undefined1 in_vs32 [16];
  undefined1 in_vs38 [16];
  undefined1 in_vs39 [16];
  undefined1 in_vs40 [16];
  undefined1 in_vs41 [16];
  undefined1 in_vs42 [16];
  undefined1 in_vs43 [16];
  undefined1 auVar10 [16];
  undefined1 in_vs44 [16];
  undefined1 in_vs45 [16];
  uint *puStack_40;
  undefined4 uStack_3c;
  
  fn_82599808(param_1 + 0x40);
  if (*(int **)(param_1 + 0x8c0) == (int *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = (**(code **)(**(int **)(param_1 + 0x8c0) + 0x1c))();
  }
  iVar5 = *(int *)(*(int *)(iVar5 + 0x10) + 0x24);
  if (iVar5 != 0) {
    fn_825D0598(param_2 + 0xcec,iVar5,param_1);
  }
  piVar8 = (int *)(*(int *)(param_1 + 0x8c0) + 0x98);
  if ((piVar8 != (int *)0x0) &&
     (uVar1 = *(uint *)(*(int *)(param_1 + 0x8c0) + 0x9c), uVar7 = (ulonglong)uVar1, 0 < (int)uVar1)
     ) {
    iVar5 = 0;
    do {
      piVar2 = *(int **)(*piVar8 + iVar5);
      if (piVar2 != (int *)0x0) {
        lVar3 = (**(code **)(*piVar2 + 0x2c))();
        if (lVar3 != 0) {{ V16 _vt0 = vectorMultiplyAddFloatingPoint(in_vs42,in_vs38,in_vs43); memcpy(auVar10, &_vt0, 16); }{ V16 _vt1 = vectorMultiplyAddFloatingPoint(in_vs39,in_vs41,auVar10); memcpy(in_vs43, &_vt1, 16); }{ V16 _vt2 = vectorMultiplyAddFloatingPoint(in_vs40,in_vs45,in_vs43); memcpy(in_vs45, &_vt2, 16); }
          vectorConditionalSelect(in_vs45,in_vs32,in_vs44);
          fn_825D0598(param_2 + 0xcec,lVar3,param_1);
        }
      }
      uVar7 = uVar7 - 1;
      iVar5 = iVar5 + 0x1a0;
    } while (uVar7 != 0);
  }
  puVar6 = (uint *)(**(code **)(**(int **)(param_1 + 0x8c0) + 0x44))();
  if (puVar6 != (uint *)0x0) {
    uVar7 = (ulonglong)*puVar6;
    puVar9 = puVar6 + 1;
    if (0 < (int)*puVar6) {
      do {
        uStack_3c = 0;
        puStack_40 = puVar9;
        uVar4 = fn_8251E4D0(param_2 + 0xd24);
        fn_82A1DD38(uVar4,&puStack_40,*(undefined2 *)(param_2 + 0xd30));
        uVar7 = uVar7 - 1;
        puVar9 = (uint *)((uint)*(byte *)(puVar9 + 1) + (int)puVar9);
      } while (uVar7 != 0);
    }
  }
  fn_825D2CA8(param_2 + 0xd18,(ulonglong)*(uint *)(param_1 + 0x8c0) + 0x98);
  return;
}

