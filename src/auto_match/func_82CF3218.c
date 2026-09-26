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
extern int fn_82CE5410();
extern int fn_82CF24D0();
extern int fn_82CF28E8();
extern unsigned int lbl_8200133C;


undefined8 fn_82CF3218(longlong param_1,longlong param_2,int *param_3,int param_4,int *param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  float afStack_80 [2];
  int aiStack_78 [30];
  
  uVar2 = *(uint *)(param_4 + 4);
  if (0 < param_3[1]) {
    uVar9 = (ulonglong)(uVar2 >> 0x1f) - (ulonglong)(1 < uVar2) & 0x20;
    if (((int)uVar9 <= (int)param_1) &&
       (uVar3 = *(uint *)(param_4 + 0x14), (int)param_1 < (int)uVar3)) {
      uVar6 = (ulonglong)*(uint *)(param_4 + 0xc) + (ulonglong)*(uint *)(param_4 + 8);
      uVar7 = (longlong)(int)uVar6 * (longlong)param_3[1] + (ulonglong)*(uint *)(param_4 + 0x10);
      iVar5 = (int)uVar7;
      if ((-1 < (int)param_2) && ((int)param_2 < (int)((longlong)iVar5 * (longlong)(int)uVar2))) {
        uVar8 = ((longlong)iVar5 * (longlong)(int)uVar2 - param_2) - 1;
        aiStack_78[0] = 0;
        aiStack_78[2] = 0x80000000;
        afStack_80[0] = lbl_8200133C;
        aiStack_78[1] = 0;
        uVar10 = uVar8 - (longlong)((int)uVar8 / iVar5) * (longlong)iVar5;
        trapWord(6,uVar7,0);
        iVar5 = (int)uVar8 / iVar5;
        trapWord(6,uVar7,0);
        trapWord(5,uVar7 & ~(((uVar8 & 0x7fffffff) << 1 | (uVar8 & 0xffffffff) >> 0x1f) - 1),0xffff)
        ;
        trapWord(5,uVar7 & ~(((uVar8 & 0x7fffffff) << 1 | (uVar8 & 0xffffffff) >> 0x1f) - 1),0xffff)
        ;
        iVar1 = (int)uVar10 / (int)uVar6;
        trapWord(6,uVar6,0);
        trapWord(5,uVar6 & ~(((uVar10 & 0x7fffffff) << 1 | (uVar10 & 0xffffffff) >> 0x1f) - 1),
                 0xffff);
        fn_82CF28E8(param_3,param_4,param_5,afStack_80,aiStack_78);
        uVar4 = fn_82CF24D0((double)afStack_80[0],(double)*(float *)(iVar5 * 4 + aiStack_78[0]),
                              *(undefined4 *)(iVar1 * 0xc + *param_5),iVar5,param_1 - uVar9,
                              (ulonglong)*(uint *)(iVar1 * 4 + *param_3) + 0x30,uVar3 - uVar9);
        iVar5 = fn_82CE5410();
        aiStack_78[1] = 0;
        if ((aiStack_78[2] & 0x80000000U) != 0) {
          return uVar4;
        }
        (**(code **)(**(int **)(iVar5 + 0x10) + 0x10))
                  (*(int **)(iVar5 + 0x10),aiStack_78[0],aiStack_78[2] & 0x3fffffff,4);
        return uVar4;
      }
    }
  }
  return 0;
}

