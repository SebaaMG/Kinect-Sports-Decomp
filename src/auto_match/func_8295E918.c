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
extern unsigned int *auStack_40;
extern int fn_829548C8();
extern int fn_8295D0A8();
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


undefined8 fn_8295E918(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 auStack_40 [16];
  
  if (param_1[0xd] == 0) {
    uVar6 = 0xffffffff80004001;
  }
  else {
    if (*(int *)(param_1[0x41] + 0xc) != 0) {
      uVar7 = 0;
      iVar2 = *(int *)(**(int **)(param_1[0x41] + 0x10) * 4 + param_1[5]);
      do {
        iVar3 = *(int *)(*(int *)(*(int *)(param_1[0x41] + 0xc) * uVar7 * 4 +
                                 *(int *)(param_1[0x41] + 8)) * 4 + param_1[5]);
        if ((((*(int *)(iVar3 + 4) != *(int *)(iVar2 + 4)) ||
             (*(int *)(iVar3 + 8) != *(int *)(iVar2 + 8))) ||
            (*(int *)(iVar3 + 0xc) != *(int *)(iVar2 + 0xc))) ||
           (*(int *)(iVar3 + 0x10) != *(int *)(iVar2 + 0x10))) {
          uVar6 = fn_8295D0A8(param_1,1);
          if ((int)uVar6 < 0) {
            return uVar6;
          }
          iVar4 = *(int *)(*(int *)(iVar3 + 0x14) * 4 + param_1[5]);
          uVar1 = *(uint *)(iVar4 + 0x10);
          uVar5 = *(uint *)(iVar4 + 0xc) & 0x7ff;
          uVar8 = uVar5 | 0xb0001000;
          if (uVar1 != 0) {
            if (uVar1 == 1) {
              uVar8 = uVar5 | 0xb0551000;
            }
            else if (uVar1 < 3) {
              uVar8 = uVar5 | 0xb0aa1000;
            }
            else if (uVar1 == 3) {
              uVar8 = uVar5 | 0xb0ff1000;
            }
          }
          if (*(int *)(iVar3 + 0x18) == 0) {
            uVar8 = uVar8 | 0xd000000;
          }
          uVar6 = (**(code **)(*param_1 + 0x140))
                            (param_1,*(undefined4 *)
                                      (**(int **)(param_1[0x41] + 0x10) * 4 + param_1[5]),&uStack_50
                             ,0,&uStack_48);
          if ((int)uVar6 < 0) {
            return uVar6;
          }
          uVar6 = (**(code **)(*param_1 + 0x144))
                            (param_1,*(undefined4 *)(param_1[0x41] + 0x10),
                             *(undefined4 *)(param_1[0x41] + 0xc),&uStack_4c,uStack_48);
          if ((int)uVar6 < 0) {
            return uVar6;
          }
          uVar6 = (**(code **)(*param_1 + 0x138))(param_1,uStack_50,uStack_4c,uVar8);
          if ((int)uVar6 < 0) {
            return uVar6;
          }
          uVar6 = (**(code **)(*param_1 + 0x148))
                            (param_1,*(undefined4 *)
                                      (*(int *)(*(int *)(param_1[0x41] + 0xc) * uVar7 * 4 +
                                               *(int *)(param_1[0x41] + 8)) * 4 + param_1[5]),
                             &uStack_50,&uStack_44);
          if ((int)uVar6 < 0) {
            return uVar6;
          }
          iVar3 = *(int *)(param_1[0x41] + 0xc);
          uVar6 = (**(code **)(*param_1 + 0x14c))
                            (param_1,((longlong)iVar3 * (longlong)(int)uVar7 & 0x3fffffffU) * 4 +
                                     (ulonglong)*(uint *)(param_1[0x41] + 8),iVar3,uStack_4c,
                             auStack_40);
          if ((int)uVar6 < 0) {
            return uVar6;
          }
          uVar6 = (**(code **)(*param_1 + 0x13c))(param_1,uStack_50,auStack_40[0],uStack_44);
          if ((int)uVar6 < 0) {
            return uVar6;
          }
          uVar6 = (**(code **)(*param_1 + 0x134))(param_1);
          if ((int)uVar6 < 0) {
            return uVar6;
          }
          uVar6 = fn_829548C8(param_1);
          if ((int)uVar6 < 0) {
            return uVar6;
          }
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < 2);
    }
    uVar6 = 0;
  }
  return uVar6;
}

