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


undefined8
fn_8299BF68(int param_1,int *param_2,int *param_3,int *param_4,uint param_5,int param_6)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  
  if (param_6 == 0) {
    uVar6 = 0;
    if (param_5 != 0) {
      do {
        puVar1 = (uint *)*param_4;
        if (((*puVar1 & 0xfff00000) != 0x11000000) && ((*puVar1 & 0xfff00000) != 0x72100000)) {
          iVar2 = *(int *)puVar1[2];
          iVar3 = *(int *)(iVar2 * 4 + *(int *)(param_1 + 0x14));
          if ((*(uint *)(*(int *)(*(int *)(iVar3 + 4) * 4 + *(int *)(param_1 + 0x10)) + 4) & 0x840)
              != 0) {
            uVar4 = *(uint *)(iVar3 + 0xc);
            if ((5 < uVar4) || (param_2[uVar4] != 0)) {
              return 0;
            }
            if (param_3[uVar4] == -1) {
              param_3[uVar4] = iVar2;
            }
            else if (param_3[uVar4] != iVar2) {
              return 0;
            }
            param_2[uVar4] = (int)puVar1;
            *param_4 = 0;
            param_3[uVar4] = *(int *)puVar1[2];
          }
        }
        uVar6 = uVar6 + 1;
        param_4 = param_4 + 1;
      } while (uVar6 < param_5);
    }
  }
  else if (param_6 == 1) {
    uVar6 = 0;
    if (param_5 != 0) {
      do {
        puVar1 = (uint *)*param_4;
        if (((puVar1 != (uint *)0x0) && ((*puVar1 & 0xfff00000) != 0x11000000)) &&
           ((*puVar1 & 0xfff00000) != 0x72100000)) {
          uVar4 = 0;
          piVar5 = param_3;
          do {
            if ((*(int *)(((int)param_2 - (int)param_3) + (int)piVar5) == 0) &&
               ((*piVar5 == *(int *)puVar1[2] || (*piVar5 == -1)))) break;
            uVar4 = uVar4 + 1;
            piVar5 = piVar5 + 1;
          } while (uVar4 < 6);
          if (uVar4 == 6) {
            return 0;
          }
          param_3[uVar4] = *(int *)puVar1[2];
          param_2[uVar4] = (int)puVar1;
          *param_4 = 0;
        }
        uVar6 = uVar6 + 1;
        param_4 = param_4 + 1;
      } while (uVar6 < param_5);
    }
  }
  else if ((param_6 == 2) && (uVar6 = 0, param_5 != 0)) {
    do {
      puVar1 = (uint *)*param_4;
      if ((puVar1 != (uint *)0x0) &&
         (((*puVar1 & 0xfff00000) == 0x11000000 || ((*puVar1 & 0xfff00000) == 0x72100000)))) {
        uVar4 = 0;
        piVar5 = param_2;
        do {
          if (*piVar5 == 0) break;
          uVar4 = uVar4 + 1;
          piVar5 = piVar5 + 1;
        } while (uVar4 < 6);
        if (uVar4 == 6) {
          return 0;
        }
        param_3[uVar4] = *(int *)puVar1[2];
        param_2[uVar4] = (int)puVar1;
        *param_4 = 0;
      }
      uVar6 = uVar6 + 1;
      param_4 = param_4 + 1;
    } while (uVar6 < param_5);
  }
  return 1;
}

