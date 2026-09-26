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
extern unsigned int *auStack_4c;
extern int fn_8265C9E0();
extern int fn_8288C1B8();
extern int fn_8288CBD8();
extern int fn_8288CD40();
extern int fn_82897B50();
extern int fn_828A12E8();
extern int fn_828B55F8();
extern int fn_828B57E8();
extern int fn_828C7F70();
extern int fn_828E9D90();
extern int fn_828E9DA8();
extern int fn_828E9FF8();
extern unsigned int uStack_50;


void fn_8288EFC0(int param_1,undefined8 param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  int iVar6;
  int iVar7;
  longlong lVar3;
  int *piVar8;
  undefined1 uVar9;
  undefined8 uVar4;
  ulonglong uVar5;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined4 uStack_50;
  undefined1 auStack_4c [76];
  
  lVar2 = fn_828A12E8(*(undefined4 *)(param_1 + 0x6c));
  iVar10 = param_1 + 0x80;
  fn_828B57E8(iVar10,*(undefined4 *)(param_1 + 0x6c),param_2);
  iVar6 = fn_828E9DA8(param_2);
  iVar7 = fn_828E9D90(param_2);
  if (iVar6 - iVar7 < 1) {
    lVar3 = 0;
  }
  else {
    lVar3 = fn_828E9FF8(param_2,1);
  }
  *(char *)(param_1 + 0x9d) = '\x01' - (lVar3 == 0);
  uStack_50 = fn_828B55F8(iVar10);
  piVar8 = (int *)fn_8288CD40(auStack_4c,lVar2 + 0x94,&uStack_50);
  uVar11 = (ulonglong)*(uint *)(*(int *)(*piVar8 + 0x40) + 8);
  if (*(char *)(param_1 + 0x9d) != '\0') {
    iVar6 = fn_828E9DA8(param_2);
    iVar7 = fn_828E9D90(param_2);
    if (iVar6 - iVar7 < 8) {
      uVar9 = 0;
    }
    else {
      uVar9 = fn_828E9FF8(param_2,8);
    }
    *(undefined1 *)(param_1 + 0x9e) = uVar9;
    fn_8288C1B8(param_1 + 0x8c,uVar11);
    uVar12 = 0;
    if (uVar11 != 0) {
      do {
        iVar6 = fn_828E9DA8(param_2);
        iVar7 = fn_828E9D90(param_2);
        if (iVar6 - iVar7 < 1) {
          iVar6 = 0;
        }
        else {
          iVar6 = fn_828E9FF8(param_2,1);
        }
        uStack_50 = 0;
        if (iVar6 != 0) {
          uStack_50 = 0;
          uVar1 = *(undefined4 *)(param_1 + 0x6c);
          uVar4 = fn_828B55F8(iVar10);
          fn_82897B50(uVar1,uVar4,uVar12,1,&uStack_50);
          uVar5 = fn_8265C9E0(0x24);
          if ((uVar5 & 0xffffffff) == 0) {
            uStack_50 = 0;
          }
          else {
            uStack_50 = fn_828C7F70(uVar5,*(undefined4 *)(param_1 + 0x6c),
                                        *(undefined4 *)(param_1 + 0x18),param_2,uStack_50);
          }
        }
        fn_8288CBD8(param_1 + 0x8c,&uStack_50);
        uVar12 = uVar12 + 1;
      } while ((uVar12 & 0xffffffff) < uVar11);
    }
  }
  return;
}

