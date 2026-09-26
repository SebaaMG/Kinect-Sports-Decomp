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
extern int fn_82381BC0();
extern int fn_823AA970();
extern int fn_8265C9E0();
extern int fn_82886518();
extern int fn_82897BD0();
extern int fn_8289F2E0();
extern int fn_8289F350();
extern int fn_828AECC0();
extern int fn_828B1340();
extern int fn_828BE158();
extern int fn_828C8008();
extern int fn_82A4AAA8();
extern int fn_82F65350();


undefined8 fn_828D8D98(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar11;
  undefined8 uVar4;
  int *piVar9;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar10;
  ulonglong uVar7;
  undefined8 uVar8;
  int aiStack_40 [16];
  
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  iVar2 = *(int *)(param_1 + 0x6c);
  uVar3 = *(undefined4 *)(param_1 + 0x84);
  iVar10 = *(int *)(param_1 + 0x80);
  cVar11 = fn_828B1340();
  if (cVar11 == '\0') {
    piVar9 = (int *)fn_8289F2E0(iVar2,uVar1);
    uVar5 = (**(code **)(*piVar9 + 0xc))();
    if ((((iVar10 == 0) && (piVar9 = (int *)fn_8289F350(iVar2,uVar3), piVar9 != (int *)0x0))
        && (uVar6 = (**(code **)(*piVar9 + 0xc))(), (uVar6 & 0xffffffff) != 0)) &&
       ((((uVar5 & 0xffffffff) == 0 || (iVar10 = fn_82A4AAA8(uVar5), iVar10 != 2)) &&
        (iVar10 = fn_82A4AAA8(uVar6), iVar10 != 2)))) {
      if ((uVar5 & 0xffffffff) != 0) {
        uVar7 = fn_82F65350();
        if (uVar7 == ((longlong)((int)uVar7 >> 1) + (ulonglong)((int)uVar7 < 0 && (uVar7 & 1) != 0)
                     & 0x7fffffff) << 1) {
          uVar6 = uVar5;
        }
      }
      aiStack_40[0] = **(int **)(iVar2 + 0x230);
      if ((int *)aiStack_40[0] != *(int **)(iVar2 + 0x230)) {
        do {
          uVar1 = *(undefined4 *)(aiStack_40[0] + 0x10);
          uVar5 = fn_8265C9E0(0x90);
          if ((uVar5 & 0xffffffff) == 0) {
            uVar4 = 0;
          }
          else {
            uVar4 = fn_823AA970(uVar6);
            uVar4 = fn_828C8008(uVar5,3,uVar4,0x16);
          }
          fn_82886518(uVar4,0xffffffffffffffff,0xffffffffffffffff);
          uVar8 = fn_82897BD0(uVar1);
          fn_828BE158(iVar2,uVar4,uVar8,0);
          fn_82381BC0(aiStack_40);
        } while (aiStack_40[0] != *(int *)(iVar2 + 0x230));
      }
      fn_828AECC0(uVar6,2);
    }
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}

