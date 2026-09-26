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
extern unsigned int *auStack_90;
extern int fn_82CE5410();
extern int fn_82CF68D8();
extern int fn_82CFC050();
extern int fn_82D00D60();
extern int fn_82D01108();


undefined8 fn_82CF7DA0(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar6;
  undefined8 uVar4;
  int iVar7;
  int iVar8;
  ulonglong uVar5;
  int *piVar9;
  undefined4 *puVar10;
  longlong lVar11;
  undefined4 *puVar12;
  int iVar13;
  undefined4 *puVar14;
  undefined1 auStack_90 [144];
  
  RtlEnterCriticalSection(param_1 + 0x18);
  fn_82D01108(param_2);
  piVar1 = *(int **)(param_1 + 0x44);
  uVar5 = (ulonglong)(uint)piVar1[1];
  iVar6 = (int)(uVar5 & 0x7fffffff);
  if (iVar6 != 0) {
    param_2[2] = iVar6;
    iVar6 = fn_82CE5410();
    lVar11 = ((uVar5 & 0x7fffffff) + (uVar5 & 0x1fffffff) * 8 & 0x1fffffff) << 3;
    uVar4 = (**(code **)(**(int **)(iVar6 + 0x14) + 4))(*(int **)(iVar6 + 0x14),lVar11);
    param_2[1] = (int)uVar4;
    fn_82CF68D8(uVar4,0,lVar11);
    iVar6 = fn_82CE5410();
    iVar7 = (**(code **)(**(int **)(iVar6 + 0x14) + 4))
                      (*(int **)(iVar6 + 0x14),(uVar5 & 0x3fffffff) << 2);
    *param_2 = iVar7;
    puVar14 = (undefined4 *)param_2[1];
    iVar8 = fn_82CE5410();
    iVar6 = piVar1[2];
    iVar13 = 0;
    if (-1 < iVar6) {
      piVar9 = (int *)*piVar1;
      do {
        if (*piVar9 != -1) break;
        iVar13 = iVar13 + 1;
        piVar9 = piVar9 + 4;
      } while (iVar13 <= iVar6);
    }
    if (iVar13 <= iVar6) {
      puVar12 = (undefined4 *)(iVar7 + -4);
      do {
        puVar10 = (undefined4 *)(iVar13 * 0x10 + *piVar1);
        uVar2 = puVar10[1];
        uVar3 = puVar10[2];
        puVar12[1] = *puVar10;
        uVar5 = fn_82D00D60(param_1 + 8,uVar2,auStack_90,0x10);
        puVar14[0x11] = (int)uVar5;
        fn_82CFC050(puVar14 + 1,auStack_90,(uVar5 & 0x3fffffff) << 2);
        *puVar14 = uVar3;
        puVar12 = puVar12 + 1;
        (**(code **)(**(int **)(iVar8 + 0x10) + 0x2c))(*(int **)(iVar8 + 0x10),*puVar12,uVar3);
        iVar6 = piVar1[2];
        iVar13 = iVar13 + 1;
        puVar14 = puVar14 + 0x12;
        if (iVar13 <= iVar6) {
          piVar9 = (int *)(iVar13 * 0x10 + *piVar1);
          do {
            if (*piVar9 != -1) break;
            iVar13 = iVar13 + 1;
            piVar9 = piVar9 + 4;
          } while (iVar13 <= iVar6);
        }
      } while (iVar13 <= iVar6);
    }
  }
  RtlLeaveCriticalSection(param_1 + 0x18);
  return 0;
}

