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
extern int fn_82275530();
extern int fn_82275C58();
extern int fn_82276128();
extern int fn_8265CA20();
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;


undefined4 *
fn_82275DB0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,int param_4,int param_5,
             int param_6)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  int aiStack_50 [20];
  
  if ((param_5 < param_4) || (iVar1 = fn_82275530(param_6), iVar1 < param_4)) {
    iVar1 = fn_82275530(param_6);
    if (iVar1 < param_5) {
      if ((param_1 != param_2) && (param_2 != param_3)) {
        fn_82276128(param_1,param_2,param_3);
      }
      param_1 = param_1 + param_5 * 2;
    }
    else {
      uStack_70 = 0;
      uStack_6c = 0;
      uStack_68 = 0;
      uStack_64 = 0;
      (*(undefined4 **)(param_6 + 0x10))[1] = **(undefined4 **)(param_6 + 0x10);
      uStack_60 = *(undefined4 *)(param_6 + 0x10);
      fn_82275C58(aiStack_50,param_2,param_3,&uStack_70);
      if (aiStack_50[0] != 0) {
        fn_8265CA20();
      }
      if (param_1 != param_2) {
        puVar2 = param_2;
        do {
          puVar3 = puVar2 + -2;
          *(undefined4 *)(((int)param_3 - (int)param_2) + (int)puVar3) = *puVar3;
          *(undefined4 *)((int)puVar3 + ((int)param_3 - (int)param_2) + 4) = puVar2[-1];
          puVar2 = puVar3;
        } while (puVar3 != param_1);
      }
      puVar2 = (undefined4 *)(*(undefined4 **)(param_6 + 0x10))[1];
      for (puVar3 = (undefined4 *)**(undefined4 **)(param_6 + 0x10); puVar3 != puVar2;
          puVar3 = puVar3 + 2) {
        *param_1 = *puVar3;
        param_1[1] = puVar3[1];
        param_1 = param_1 + 2;
      }
    }
  }
  else {
    uStack_70 = 0;
    uStack_6c = 0;
    uStack_68 = 0;
    uStack_64 = 0;
    (*(undefined4 **)(param_6 + 0x10))[1] = **(undefined4 **)(param_6 + 0x10);
    uStack_60 = *(undefined4 *)(param_6 + 0x10);
    fn_82275C58(aiStack_50,param_1,param_2,&uStack_70);
    if (aiStack_50[0] != 0) {
      fn_8265CA20();
    }
    if (param_2 != param_3) {
      puVar2 = param_2;
      do {
        *(undefined4 *)(((int)param_1 - (int)param_2) + (int)puVar2) = *puVar2;
        puVar3 = puVar2 + 2;
        *(undefined4 *)((int)puVar2 + ((int)param_1 - (int)param_2) + 4) = puVar2[1];
        puVar2 = puVar3;
      } while (puVar3 != param_3);
    }
    puVar2 = (undefined4 *)**(int **)(param_6 + 0x10);
    puVar3 = (undefined4 *)(*(int **)(param_6 + 0x10))[1];
    param_1 = param_3;
    while (puVar2 != puVar3) {
      param_1[-2] = puVar3[-2];
      param_1[-1] = puVar3[-1];
      puVar3 = puVar3 + -2;
      param_1 = param_1 + -2;
    }
  }
  return param_1;
}

