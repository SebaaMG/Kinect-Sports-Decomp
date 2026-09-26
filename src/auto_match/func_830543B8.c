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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern unsigned int *auStack_68;
extern int fn_830503D0();
extern unsigned int iStack_78;
extern unsigned int uStack_70;


void fn_830543B8(int param_1,ulonglong param_2)

{
  int iVar1;
  int iVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  bool bVar6;
  int *piVar7;
  char acStack_80 [8];
  int iStack_78;
  ulonglong *puStack_74;
  undefined8 uStack_70;
  ulonglong auStack_68 [13];
  
  acStack_80[0] = '\x01';
  puVar5 = *(ulonglong **)(param_1 + 0xa0);
  puVar4 = (ulonglong *)0x0;
  do {
    puVar3 = puVar5;
    if (puVar3 == (ulonglong *)0x0) goto LAB_83054524;
    puVar5 = puVar3;
    if (param_2 <= puVar3[2]) break;
    puVar5 = *(ulonglong **)((int)puVar3 + 0xc);
    acStack_80[0] = '\0';
    puVar4 = puVar3;
  } while (*puVar3 < param_2);
  if (puVar5 != (ulonglong *)0x0) {
    while( true ) {
      iVar1 = *(int *)((int)puVar5 + 0xc);
      piVar7 = (int *)((int)puVar5 + 0xc);
      if (puVar5 == *(ulonglong **)(param_1 + 0xa0)) {
        *(int *)(param_1 + 0xa0) = iVar1;
      }
      else {
        *(int *)((int)puVar4 + 0xc) = iVar1;
      }
      if (puVar5 == *(ulonglong **)(param_1 + 0xa4)) {
        *(ulonglong **)(param_1 + 0xa4) = puVar4;
      }
      uStack_70 = CONCAT44(iVar1,puVar4);
      *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + -1;
      iStack_78 = iVar1;
      puStack_74 = puVar4;
      if ((*(uint *)(puVar5 + 6) & 0xe0000000) == 0x20000000) {
        auStack_68[0] = puVar5[2];
        fn_830503D0(param_1,auStack_68,*(undefined4 *)(puVar5 + 4),
                     *(undefined4 *)((int)puVar5 + 0x1c),0);
        iVar2 = *(int *)(param_1 + 0x60);
        RtlEnterCriticalSection(iVar2 + 0x10);
        if (*(int *)(iVar2 + 0x98) == 0) {
          *(ulonglong **)(iVar2 + 0x98) = puVar5;
          *piVar7 = 0;
        }
        else {
          *piVar7 = *(int *)(iVar2 + 0x98);
          *(ulonglong **)(iVar2 + 0x98) = puVar5;
        }
        RtlLeaveCriticalSection(iVar2 + 0x10);
      }
      else {
        *(uint *)(puVar5 + 6) = *(uint *)(puVar5 + 6) & 0x1fffffff | 0x40000000;
        if (*(int *)(param_1 + 0xac) == 0) {
          *(ulonglong **)(param_1 + 0xac) = puVar5;
          *piVar7 = 0;
        }
        else {
          *piVar7 = *(int *)(param_1 + 0xac);
          *(ulonglong **)(param_1 + 0xac) = puVar5;
        }
      }
      if (iVar1 == 0) break;
      puVar4 = (((U64)(uStack_70) >> 32) & 0xFFFFFFFF);
      puVar5 = (((U64)(uStack_70) >> 0) & 0xFFFFFFFF);
    }
  }
LAB_83054524:
  bVar6 = true;
  iVar1 = *(int *)(param_1 + 0xac);
  while (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0xc);
    piVar7 = *(int **)(*(int *)(param_1 + 0x60) + 0x80);
    if (bVar6) {
      if ((*(uint *)(iVar1 + 0x30) & 0x10000000) == 0) {
        (**(code **)(*piVar7 + 0x18))(piVar7,param_1 + 0x18,iVar1 + 0x10,acStack_80);
      }
      else {
        acStack_80[0] = '\0';
      }
    }
    *(uint *)(iVar1 + 0x30) = *(uint *)(iVar1 + 0x30) | 0x10000000;
    bVar6 = acStack_80[0] == '\0';
    iVar1 = iVar2;
  }
  return;
}

