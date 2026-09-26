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
extern int fn_82ACA920();
extern int fn_82AD1978();
extern int fn_82AD19D8();
extern int fn_82AD20C0();
extern int fn_82AF9DC8();
extern int fn_82AFC3B8();
extern int fn_82B841E8();
extern int fn_82B8AC10();


bool fn_82B004A8(undefined8 param_1,undefined8 param_2,int param_3,int param_4,undefined8 param_5,
                  int param_6,int param_7,uint param_8)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar7;
  char cVar9;
  undefined8 uVar6;
  undefined4 uVar8;
  uint *puVar10;
  int *piVar11;
  ulonglong uVar12;
  int *in_stack_00000054;
  undefined4 *in_stack_0000005c;
  undefined4 in_stack_00000064;
  undefined4 in_stack_0000006c;
  
  uVar4 = fn_82ACA920(param_1,param_3,*(undefined4 *)(param_3 + 0xc));
  uVar5 = fn_82ACA920(param_1,param_6,*(undefined4 *)(param_6 + 0xc));
  iVar7 = fn_82AFC3B8(param_1,param_2,uVar4,param_5,uVar5,*(undefined4 *)(param_8 + 0x1c),
                            param_8,in_stack_00000064);
  uVar12 = 0;
  uVar3 = *(uint *)(*(int *)(iVar7 + 0xc) + 8) >> 7 & 0x7f;
  if ((uVar3 == 0) || (bVar2 = true, 0x66 < uVar3)) {
    bVar2 = false;
  }
  if (bVar2) {
    uVar12 = fn_82AD19D8(param_8,*(int *)(iVar7 + 0xc),param_1);
  }
  uVar4 = fn_82B841E8(param_1,*(undefined4 *)(param_8 + 0x1c),0,0x75,0,0);
  uVar3 = (uint)uVar4 & 0xfffffffe;
  puVar10 = (uint *)((param_8 & 0xfffffffe) + 0x24);
  *(uint *)(uVar3 + 0x24) = *puVar10;
  *(uint *)(*puVar10 & 0xfffffffe) = uVar3;
  *(uint *)(uVar3 + 0x28) = param_8 & 0xfffffffe;
  *puVar10 = uVar3 + 0x28;
  fn_82AD1978(uVar4,iVar7);
  cVar9 = fn_82AF9DC8(param_1,param_2,param_4,param_5,param_7,param_8,in_stack_0000006c);
  if (cVar9 != '\0') {
    uVar5 = fn_82ACA920(param_1,param_4,*(undefined4 *)(param_4 + 0xc));
    uVar6 = fn_82ACA920(param_1,param_7,*(undefined4 *)(param_7 + 0xc));
    uVar8 = fn_82AFC3B8(param_1,param_2,uVar5,param_5,uVar6,*(undefined4 *)(param_8 + 0x1c),
                              param_8,in_stack_0000006c);
    *in_stack_00000054 = iVar7;
    *in_stack_0000005c = uVar8;
  }
  if ((uVar12 & 0xffffffff) != 0) {
    fn_82AD20C0(param_8,uVar12,param_1);
  }
  piVar11 = *(int **)(iVar7 + 0x10);
  for (iVar1 = *piVar11; iVar1 != iVar7; iVar1 = *(int *)(iVar1 + 4)) {
    piVar11 = (int *)(iVar1 + 4);
  }
  *piVar11 = *(int *)(iVar7 + 4);
  *(undefined4 *)(iVar7 + 0x10) = 0;
  fn_82B8AC10(param_1,uVar4,0,1);
  return cVar9 != '\0';
}

