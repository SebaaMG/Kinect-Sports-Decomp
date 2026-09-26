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


undefined8 fn_828D8C08(int param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  undefined4 uVar1;
  char cVar9;
  undefined8 uVar2;
  int *piVar7;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar8;
  ulonglong uVar5;
  undefined8 uVar6;
  int aiStack_40 [16];
  
  cVar9 = fn_828B1340();
  if (cVar9 == '\0') {
    piVar7 = (int *)fn_8289F2E0(param_1,param_2);
    uVar3 = (**(code **)(*piVar7 + 0xc))();
    if ((((param_3 == 0) &&
         (piVar7 = (int *)fn_8289F350(param_1,param_4), piVar7 != (int *)0x0)) &&
        (uVar4 = (**(code **)(*piVar7 + 0xc))(), (uVar4 & 0xffffffff) != 0)) &&
       ((((uVar3 & 0xffffffff) == 0 || (iVar8 = fn_82A4AAA8(uVar3), iVar8 != 2)) &&
        (iVar8 = fn_82A4AAA8(uVar4), iVar8 != 2)))) {
      if ((uVar3 & 0xffffffff) != 0) {
        uVar5 = fn_82F65350();
        if (uVar5 == ((longlong)((int)uVar5 >> 1) + (ulonglong)((int)uVar5 < 0 && (uVar5 & 1) != 0)
                     & 0x7fffffff) << 1) {
          uVar4 = uVar3;
        }
      }
      aiStack_40[0] = **(int **)(param_1 + 0x230);
      if ((int *)aiStack_40[0] != *(int **)(param_1 + 0x230)) {
        do {
          uVar1 = *(undefined4 *)(aiStack_40[0] + 0x10);
          uVar3 = fn_8265C9E0(0x90);
          if ((uVar3 & 0xffffffff) == 0) {
            uVar2 = 0;
          }
          else {
            uVar2 = fn_823AA970(uVar4);
            uVar2 = fn_828C8008(uVar3,3,uVar2,0x16);
          }
          fn_82886518(uVar2,0xffffffffffffffff,0xffffffffffffffff);
          uVar6 = fn_82897BD0(uVar1);
          fn_828BE158(param_1,uVar2,uVar6,0);
          fn_82381BC0(aiStack_40);
        } while (aiStack_40[0] != *(int *)(param_1 + 0x230));
      }
      fn_828AECC0(uVar4,2);
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

