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
extern int fn_8267BE38();
extern int fn_8267C4C8();
extern int fn_82683F88();
extern int fn_82687270();
extern int fn_82687F98();
extern int fn_8268CAB0();
extern int fn_826D6828();
extern int fn_826D9388();
extern int fn_826D93E8();
extern int fn_826DB990();
extern int fn_826DCEE0();
extern int fn_826F30F0();
extern int fn_826F3210();
extern unsigned int iStack_70;
extern unsigned int iStack_78;
extern unsigned int uStack_6c;
extern unsigned int uStack_74;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern U64 storeWordConditionalIndexed();


void fn_826DD3D0(int param_1,int *param_2,uint param_3,int param_4,char param_5)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  int iVar6;
  char cVar9;
  char *pcVar7;
  int iVar8;
  char cVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint *puVar13;
  uint uVar14;
  int iVar15;
  char in_RESERVE;
  byte bVar16;
  uint uStack_80;
  uint uStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  
  cVar10 = '\0';
  uVar14 = 0;
  if (param_2[1] != 0) {
    iVar15 = 0;
    do {
      iStack_70 = 0;
      uStack_6c = 0;
      puVar13 = (uint *)(iVar15 + *param_2);
      cVar9 = fn_826DB990(param_3,&iStack_70,puVar13);
      if (cVar9 == '\0') {
        if (*(uint *)(param_4 + 0xc) != 0) {
          fn_82683F88((ulonglong)*(uint *)(param_4 + 0xc) + 0xc,0xffffffff8200c6f0,
                            ((ulonglong)*puVar13 & 0xfffffffc) + 8,
                            ((ulonglong)(uint)param_2[3] & 0xfffffffc) + 8);
        }
      }
      else {
        uStack_7c = puVar13[1];
        cVar10 = fn_826DCEE0(param_1,&uStack_7c,&iStack_70,((ulonglong)*puVar13 & 0xfffffffc) + 8)
        ;
      }
      if (iStack_70 != 0) {
        fn_82687270();
      }
      uVar14 = uVar14 + 1;
      iVar15 = iVar15 + 0xc;
    } while (uVar14 < (uint)param_2[1]);
  }
  if ((cVar10 != '\0') && (param_5 == '\0')) {
    RtlEnterCriticalSection(param_1 + 0x54);
    if (param_3 != 0) {
      fn_8267C4C8(param_3);
    }
    uStack_7c = param_3;
    fn_826D93E8(param_1 + 0x48,&uStack_7c);
    if (param_3 != 0) {
      fn_82687270(param_3);
    }
    RtlLeaveCriticalSection(param_1 + 0x54);
  }
  if (param_5 == '\0') {
    bVar5 = false;
    fn_8268CAB0(&uStack_80,param_2 + 3);
    pcVar7 = strstr((char *)((uStack_80 & 0xfffffffc) + 8),"_glyphs");
    bVar16 = (pcVar7 == (char *)0x0) << 1;
    if (pcVar7 != (char *)0x0) {
      bVar5 = true;
      if (param_3 != 0) {
        fn_8267C4C8(param_3);
      }
      uStack_7c = param_3;
      fn_826D9388(param_4 + 0x48,&uStack_7c);
      if (param_3 != 0) {
        fn_82687270(param_3);
      }
    }
    iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0xc) + 0x20) + 0x98);
    sync(1);
    iVar15 = *(int *)(*(int *)(*(int *)(*(int *)(param_3 + 0x1c) + 0xc) + 0x20) + 0x98);
    sync(1);
    while (iVar2 != 0) {
      piVar3 = *(int **)(iVar2 + 4);
      iVar8 = (**(code **)(*piVar3 + 0x38))(piVar3);
      bVar16 = (iVar8 == 0) << 1;
      iVar6 = iVar15;
      if ((iVar8 == 0) || (bVar16 = !bVar5 << 1, bVar5)) {
        while (iVar6 != 0) {
          piVar4 = *(int **)(iVar6 + 4);
          iVar8 = (**(code **)(*piVar4 + 0x38))(piVar4);
          bVar16 = (iVar8 == 0) << 1;
          if (iVar8 != 0) {
            cVar10 = fn_826D6828(piVar3,piVar4);
            bVar16 = (cVar10 == '\0') << 1;
            if (cVar10 != '\0') {
              iVar8 = *(int *)(param_3 + 0x1c);
              iStack_78 = 0;
              uStack_74 = 0;
              bVar1 = *(char *)(iVar8 + 0x40) == '\0';
              bVar16 = bVar1 << 1;
              if ((bVar1) || (*(uint *)(iVar8 + 0x1c) <= *(uint *)(iVar6 + 8))) {
                fn_826F30F0(iVar8 + 0x18,&iStack_78);
              }
              else {
                fn_82687F98(&iStack_78,
                                  (ulonglong)*(uint *)(iVar8 + 0x20) +
                                  ((ulonglong)*(uint *)(iVar6 + 8) & 0x1fffffff) * 8);
              }
              if ((iStack_78 != 0) &&
                 (fn_826F3210(param_1 + 0x18,*(undefined4 *)(iVar2 + 8),&iStack_78),
                 iStack_78 != 0)) {
                fn_82687270();
              }
              break;
            }
          }
          sync(1);
          iVar6 = *(int *)(iVar6 + 0xc);
        }
      }
      iVar2 = *(int *)(iVar2 + 0xc);
      sync(1);
    }
    lVar12 = ((ulonglong)uStack_80 & 0xfffffffc) + 4;
    do {
      puVar13 = (uint *)lVar12;
      uVar11 = (ulonglong)*puVar13;
      if (in_RESERVE != '\0') {
        uVar14 = storeWordConditionalIndexed(uVar11 - 1,0,lVar12);
        *puVar13 = uVar14;
        bVar16 = 2;
      }
    } while (!(bool)(bVar16 >> 1 & 1));
    if (uVar11 == 1) {
      fn_8267BE38();
    }
  }
  return;
}

