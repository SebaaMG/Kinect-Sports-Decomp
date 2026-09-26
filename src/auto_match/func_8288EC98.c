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
extern unsigned int *auStack_58;
extern int fn_823AA970();
extern int fn_8240D928();
extern int fn_8265C9E0();
extern int fn_82886518();
extern int fn_8288B2D8();
extern int fn_8288BE40();
extern int fn_8288D9D8();
extern int fn_82897620();
extern int fn_82897BA8();
extern int fn_82897BD0();
extern int fn_828BE158();
extern int fn_82F622E0();


void fn_8288EC98(int *param_1,undefined8 param_2)

{
  uint uVar1;
  ulonglong uVar2;
  undefined4 *puVar5;
  int iVar6;
  char cVar10;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar3;
  undefined8 uVar4;
  int aiStack_60 [2];
  undefined1 auStack_58 [88];
  
  uVar2 = fn_8240D928(param_2);
  if ((ulonglong)(uint)param_1[0x13] <= (uVar2 & 0xffffffff)) {
                    /* WARNING: Subroutine does not return */
    fn_82F622E0(0xffffffff82023604);
  }
  aiStack_60[0] = param_1[0xf];
  aiStack_60[1] = 0;
  puVar5 = (undefined4 *)fn_8288BE40(auStack_58,aiStack_60,uVar2);
  *(uint *)*puVar5 = *(uint *)*puVar5 & ~(1 << (puVar5[1] & 0x3f));
  iVar6 = (**(code **)(*param_1 + 8))(param_1);
  iVar9 = *(int *)(iVar6 + 0x10);
  if (*(char *)(iVar9 + 0x14) != '\0') {
    uVar1 = *(uint *)(iVar9 + 8);
    uVar2 = 0;
    if (uVar1 != 0) {
      do {
        fn_8288B2D8(iVar9,uVar2);
        cVar10 = fn_82897BA8();
        if (cVar10 != '\0') {
          iVar7 = fn_82897620(iVar6,uVar2);
          if ((*(int **)(iVar7 + 0x20) != (int *)0x0) &&
             (iVar8 = (**(code **)(**(int **)(iVar7 + 0x20) + 4))(), iVar8 != 0)) {
            if (*(int **)(iVar7 + 0x20) == (int *)0x0) {
              iVar7 = 0;
            }
            else {
              iVar7 = (**(code **)(**(int **)(iVar7 + 0x20) + 4))();
            }
            iVar8 = fn_8240D928(param_2);
            *(undefined4 *)((iVar8 + 3) * 4 + iVar7) = 0;
          }
        }
        uVar2 = uVar2 + 1;
      } while ((uVar2 & 0xffffffff) < (ulonglong)uVar1);
    }
    iVar9 = fn_8240D928(param_2);
    *(undefined1 *)(iVar9 + iVar6 + 0x34) = 0;
  }
  uVar2 = fn_8265C9E0(0xa0);
  if ((uVar2 & 0xffffffff) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = fn_823AA970(param_2);
    uVar3 = fn_8288D9D8(uVar2,param_1,uVar3,1);
  }
  fn_82886518(uVar3,1000,0xffffffffffffffff);
  iVar9 = param_1[4];
  uVar4 = fn_82897BD0(param_2);
  fn_828BE158(iVar9,uVar3,uVar4,0);
  return;
}

