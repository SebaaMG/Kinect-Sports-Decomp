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
extern unsigned int *auStack_50;
extern int fn_82A1DDC0();
extern unsigned int uStack_40;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;


undefined8 fn_82FF86F0(undefined4 *param_1,longlong param_2,ulonglong param_3,int *param_4)

{
  int *piVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  uint *puVar5;
  ulonglong uVar6;
  undefined1 auStack_50 [4];
  uint uStack_4c;
  ulonglong uStack_48;
  ulonglong uStack_40;
  
  *param_4 = 0;
  if (param_1[7] == 0) {
    if ((ulonglong)(uint)param_1[2] <= (param_3 & 0xffffffff)) {
      param_3 = (ulonglong)(uint)param_1[2];
    }
    *param_4 = (int)param_3;
    param_1[2] = param_1[2] - (int)param_3;
    fn_82A1DDC0(param_2,param_1[6],*param_4);
    param_1[6] = param_1[6] + *param_4;
  }
  else if ((param_3 & 0xffffffff) != 0) {
    puVar5 = param_1 + 2;
    do {
      uVar6 = (ulonglong)*puVar5;
      if (uVar6 == 0) {
        piVar1 = (int *)param_1[7];
        if ((param_3 & 0xffffffff) < (ulonglong)(uint)param_1[3]) {
          uVar2 = param_1[4];
          trapWord(6,(ulonglong)uVar2,0);
          uVar6 = (longlong)(int)((uint)param_1[3] / uVar2) * (longlong)(int)uVar2;
          uStack_40 = uVar6 & 0xffffffff;
          uVar3 = (**(code **)(*piVar1 + 0x14))
                            ((double)((float)uStack_40 / (float)param_1[8]),piVar1,*param_1,uVar6,1,
                             *(undefined1 *)(param_1 + 9),uStack_40,puVar5);
          if ((int)uVar3 != 1) {
            return uVar3;
          }
          iVar4 = (**(code **)(*(int *)param_1[7] + 0x2c))();
          if (iVar4 != 1) {
            return uVar3;
          }
          param_1[1] = *param_1;
          if (*puVar5 == 0) {
            return 1;
          }
        }
        else {
          uVar2 = param_1[4];
          trapWord(6,(ulonglong)uVar2,0);
          uStack_48 = (longlong)(int)((param_3 & 0xffffffff) / (ulonglong)uVar2) *
                      (longlong)(int)uVar2 & 0xffffffff;
          uVar3 = (**(code **)(*piVar1 + 0x14))
                            ((double)((float)uStack_48 / (float)param_1[8]),piVar1,param_2);
          if ((int)uVar3 != 1) {
            return uVar3;
          }
          iVar4 = (**(code **)(*(int *)param_1[7] + 0x2c))();
          if (iVar4 != 1) {
            return uVar3;
          }
          param_3 = param_3 - uStack_4c;
          param_2 = (ulonglong)uStack_4c + param_2;
          *param_4 = *param_4 + uStack_4c;
          if ((ulonglong)(uint)param_1[3] <= (param_3 & 0xffffffff)) {
            (**(code **)(*(int *)param_1[7] + 0x1c))((int *)param_1[7],auStack_50);
            return 2;
          }
        }
      }
      else {
        if ((param_3 & 0xffffffff) <= uVar6) {
          uVar6 = param_3;
        }
        fn_82A1DDC0(param_2,param_1[1],uVar6);
        param_2 = uVar6 + param_2;
        iVar4 = (int)uVar6;
        param_3 = param_3 - uVar6;
        param_1[1] = param_1[1] + iVar4;
        *param_4 = *param_4 + iVar4;
        *puVar5 = *puVar5 - iVar4;
      }
      if ((param_3 & 0xffffffff) == 0) {
        return 1;
      }
    } while( true );
  }
  return 1;
}

