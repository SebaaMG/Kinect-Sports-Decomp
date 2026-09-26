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
extern int fn_82B9F410();


uint fn_82B9F578(int *param_1,uint *param_2,uint param_3,undefined8 param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar3 = param_1[5];
  uVar4 = 0;
  iVar5 = 1;
  if (param_3 != 0) {
    puVar1 = (uint *)*param_1;
    if (puVar1 == (uint *)0x0) {
      puVar1 = (uint *)fn_82B9F410(param_1,*param_2,0);
      *param_1 = (int)puVar1;
      param_1[5] = param_1[5] + 1;
    }
    if (param_3 != 0) {
      do {
        uVar2 = *param_2;
        if (uVar2 == *puVar1) {
          uVar4 = uVar4 + 1;
          param_2 = param_2 + 1;
          if (uVar4 == param_3) break;
          if (puVar1[3] == 0) {
            uVar2 = fn_82B9F410(param_1,*param_2,puVar1);
            puVar1[3] = uVar2;
            param_1[5] = param_1[5] + 1;
          }
          puVar1 = (uint *)puVar1[3];
        }
        else if (uVar2 < *puVar1) {
          if (puVar1[1] == 0) {
            uVar2 = fn_82B9F410(param_1,uVar2,puVar1);
            puVar1[1] = uVar2;
            param_1[5] = param_1[5] + 1;
          }
          puVar1 = (uint *)puVar1[1];
        }
        else {
          if (puVar1[2] == 0) {
            uVar2 = fn_82B9F410(param_1,uVar2,puVar1);
            puVar1[2] = uVar2;
            param_1[5] = param_1[5] + 1;
          }
          puVar1 = (uint *)puVar1[2];
        }
        iVar5 = iVar5 + 1;
      } while (uVar4 < param_3);
    }
    if (uVar3 < (uint)param_1[5]) {
      uVar3 = fn_82B9F410(param_1,param_4,puVar1);
      puVar1[3] = uVar3;
      param_1[5] = param_1[5] + 1;
      if ((uint)param_1[6] < iVar5 + 1U) {
        param_1[6] = iVar5 + 1U;
      }
      return puVar1[3];
    }
  }
  return 0;
}

