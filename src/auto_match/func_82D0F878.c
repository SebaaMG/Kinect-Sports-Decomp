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
extern unsigned int *auStack_60;
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_82D0BB70();
extern int fn_82D0D770();
extern int fn_82D127A0();
extern int fn_82D1A660();


void fn_82D0F878(undefined8 param_1,undefined8 param_2,longlong param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar3;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  undefined4 *puStack_70;
  undefined4 *apuStack_6c [3];
  undefined1 auStack_60 [96];
  
  param_4[1] = 0;
  uVar4 = fn_82D0D770();
  iVar5 = fn_82CE5410();
  if (param_4[1] == (param_4[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
    fn_82CE63B0(*(undefined4 *)(iVar5 + 0x10),param_4,4);
  }
  *(undefined4 *)(param_4[1] * 4 + *param_4) = uVar4;
  param_4[1] = param_4[1] + 1;
  if (0 < (int)param_3) {
    do {
      iVar5 = param_4[1];
      iVar8 = 0;
      if (0 < iVar5) {
        iVar9 = 0;
        do {
          puVar2 = *(undefined4 **)(iVar9 + *param_4);
          fn_82D127A0(puVar2[2]);
          uVar3 = fn_82D0BB70(auStack_60,puVar2);
          iVar6 = fn_82D1A660(param_1,puVar2[2],uVar3,&puStack_70,apuStack_6c);
          puVar7 = apuStack_6c[0];
          puVar1 = puStack_70;
          if (iVar6 == 3) {
            if (puStack_70 == (undefined4 *)0x0) {
LAB_82d0fa1c:
              if (puVar7 == (undefined4 *)0x0) goto LAB_82d0fa3c;
              puVar1 = (undefined4 *)*puVar7;
            }
            else {
              if (apuStack_6c[0] == (undefined4 *)0x0) {
                (**(code **)*puStack_70)(puStack_70,1);
                goto LAB_82d0fa1c;
              }
              iVar6 = fn_82CE5410();
              if (param_4[1] == (param_4[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
                fn_82CE63B0(*(undefined4 *)(iVar6 + 0x10),param_4,4);
              }
              *(undefined4 **)(param_4[1] * 4 + *param_4) = puVar1;
              param_4[1] = param_4[1] + 1;
              iVar6 = fn_82CE5410();
              if (param_4[1] == (param_4[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
                fn_82CE63B0(*(undefined4 *)(iVar6 + 0x10),param_4,4);
              }
              *(undefined4 **)(param_4[1] * 4 + *param_4) = puVar7;
              iVar6 = param_4[1];
              param_4[1] = iVar6;
              if (iVar6 != iVar8) {
                *(undefined4 *)(iVar9 + *param_4) = *(undefined4 *)(iVar6 * 4 + *param_4);
              }
              puVar1 = (undefined4 *)*puVar2;
              puVar7 = puVar2;
            }
            (*(code *)*puVar1)(puVar7,1);
          }
LAB_82d0fa3c:
          iVar8 = iVar8 + 1;
          iVar9 = iVar9 + 4;
        } while (iVar8 < iVar5);
      }
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

