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
extern unsigned int *auStack_38;


undefined8 fn_82FF8988(int *param_1,ulonglong param_2,uint *param_3)

{
  int *piVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  uint *puVar5;
  uint uVar6;
  char acStack_40 [8];
  ulonglong auStack_38 [7];
  
  *param_3 = 0;
  uVar4 = 1;
  if (param_1[7] == 0) {
    uVar6 = (uint)param_2;
    if ((ulonglong)(uint)param_1[2] <= (param_2 & 0xffffffff)) {
      uVar6 = param_1[2];
    }
    *param_3 = uVar6;
    param_1[2] = param_1[2] - uVar6;
    param_1[6] = param_1[6] + *param_3;
  }
  else if ((param_2 & 0xffffffff) != 0) {
    puVar5 = (uint *)(param_1 + 2);
    do {
      uVar3 = (ulonglong)*puVar5;
      if (uVar3 == 0) {
        piVar1 = (int *)param_1[7];
        if ((param_2 & 0xffffffff) <= (ulonglong)(uint)param_1[3]) {
          uVar6 = param_1[4];
          trapWord(6,(ulonglong)uVar6,0);
          uVar3 = (longlong)(int)((uint)param_1[3] / uVar6) * (longlong)(int)uVar6;
          auStack_38[0] = uVar3 & 0xffffffff;
          uVar4 = (**(code **)(*piVar1 + 0x14))
                            ((double)((float)auStack_38[0] / (float)param_1[8]),piVar1,*param_1,
                             uVar3,1,*(undefined1 *)(param_1 + 9),auStack_38[0],puVar5);
          if ((int)uVar4 != 1) {
            return uVar4;
          }
          iVar2 = (**(code **)(*(int *)param_1[7] + 0x2c))();
          if (iVar2 != 1) {
            return uVar4;
          }
          (**(code **)(*(int *)param_1[7] + 0x1c))((int *)param_1[7],acStack_40);
          if ((acStack_40[0] != '\0') && ((ulonglong)*puVar5 < (param_2 & 0xffffffff))) {
            return 2;
          }
          iVar2 = (int)param_2;
          param_1[1] = *param_1 + iVar2;
          *param_3 = *param_3 + iVar2;
          *puVar5 = *puVar5 - iVar2;
          return uVar4;
        }
        uVar4 = (**(code **)(*piVar1 + 0x20))(piVar1,param_2 & 0xffffffff,1,auStack_38);
        if ((int)uVar4 != 1) {
          return uVar4;
        }
        uVar3 = auStack_38[0] & 0xffffffff;
        *param_3 = (int)auStack_38[0] + *param_3;
      }
      else {
        if ((param_2 & 0xffffffff) <= uVar3) {
          uVar3 = param_2;
        }
        iVar2 = (int)uVar3;
        param_1[1] = param_1[1] + iVar2;
        *param_3 = *param_3 + iVar2;
        *puVar5 = *puVar5 - iVar2;
      }
      param_2 = param_2 - uVar3;
    } while ((param_2 & 0xffffffff) != 0);
  }
  return uVar4;
}

