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
extern unsigned int *auStack_44;
extern unsigned int *auStack_68;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern int fn_82883E60();
extern int fn_828A0B78();
extern int fn_828A0BB0();
extern int fn_828AD0F8();
extern int fn_828AD488();
extern int fn_828AEBB8();
extern int fn_828B0488();
extern int fn_828B0528();
extern int fn_828B0ED0();
extern int fn_828B1468();
extern int fn_828D92C8();
extern int fn_828D93E0();
extern int fn_828EDE00();
extern int fn_82F68CC0();
extern unsigned int uStack_70;


void fn_828D9620(int param_1,ulonglong param_2)

{
  bool bVar1;
  char cVar6;
  int *piVar3;
  int iVar4;
  int iVar5;
  char cVar7;
  undefined8 uVar2;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 auStack_90 [2];
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined1 auStack_68 [36];
  undefined1 auStack_44 [68];
  
  cVar6 = fn_828B0528(*(undefined4 *)(param_1 + 0x14));
  if ((cVar6 == '\0') || (piVar3 = (int *)fn_828B0488(param_1), piVar3 == (int *)0x0))
  goto LAB_828d97c4;
  uVar9 = (ulonglong)*(uint *)(*(int *)(param_1 + 0x14) + 0x8c);
  iVar4 = (**(code **)(*piVar3 + 0xc))();
  iVar5 = fn_828B0ED0((ulonglong)*(uint *)(iVar4 + 0x4c) + 0x38,0,0);
  if (iVar5 == 3) {
    bVar1 = 0x1d4c < param_2;
  }
  else {
    if (iVar5 != 6) goto LAB_828d97c4;
    lVar8 = (ulonglong)*(uint *)(iVar4 + 0x4c) + 0x98;
    iVar5 = fn_828D92C8(lVar8,0,0);
    if (iVar5 != 0) {
      cVar6 = fn_828AD488(*(undefined4 *)(param_1 + 0x14));
      if (cVar6 == '\0') {
        cVar6 = fn_828AD0F8(*(undefined4 *)(param_1 + 0x14));
        if (cVar6 != '\0') {
          fn_828D93E0(lVar8,auStack_90,auStack_80);
          uVar2 = fn_828AEBB8(iVar4);
          fn_82F68CC0(auStack_68,uVar2,0x24);
          uStack_70 = auStack_90[0];
          fn_82F68CC0(auStack_44,auStack_80,0x10);
          fn_82883E60(uVar9 + 0x14,&uStack_70);
          cVar6 = fn_828EDE00(uVar9,&uStack_70);
          if (cVar6 != '\0') {
            fn_828B1468(param_1,5);
            return;
          }
        }
      }
      else {
        fn_828D93E0(lVar8,auStack_90,auStack_80);
        cVar6 = fn_828A0B78(uVar9 + 0x14,auStack_90);
        cVar7 = fn_828A0BB0(uVar9 + 0x40,auStack_80);
        if ((cVar6 != '\0') && (cVar7 != '\0')) {
          fn_828B1468(param_1,6);
          return;
        }
      }
      goto LAB_828d97c4;
    }
    bVar1 = 10000 < param_2;
  }
  if (!bVar1) {
    return;
  }
LAB_828d97c4:
  fn_828B1468(param_1,7);
  return;
}

