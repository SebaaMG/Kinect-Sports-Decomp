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
extern unsigned int *auStack_28;
extern int fn_82D2BB28();
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


uint * fn_82D2C878(uint *param_1,undefined8 param_2,uint *param_3,undefined8 param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  uint uStack_30;
  uint uStack_2c;
  undefined1 auStack_28 [40];
  
  uStack_30 = *param_3;
  uStack_2c = param_3[1];
  puVar3 = (uint *)fn_82D2BB28(auStack_28,param_2,&uStack_30);
  uVar1 = *puVar3;
  *param_3 = uVar1;
  uVar5 = (ulonglong)puVar3[1];
  param_3[1] = puVar3[1];
  if (*(int *)((int)(((-(ulonglong)(uVar5 != 2) & uVar5 + 1) + 2 & 0xffffffff) << 2) + uVar1) !=
      param_5) {
    iVar2 = *(int *)((int)((uVar5 + 2 & 0xffffffff) << 2) + uVar1);
    iVar6 = *(int *)(iVar2 + 8);
    if ((((iVar6 == 0) || (iVar6 == 0x7fff)) || (iVar6 = *(int *)(iVar2 + 0xc), iVar6 == 0)) ||
       (iVar6 == 0x7fff)) {
      for (uVar1 = *(uint *)((int)((uVar5 + 5 & 0xffffffff) << 2) + uVar1);
          (uVar1 & 0xfffffffc) != 0; uVar1 = *(uint *)((uVar4 + 5) * 4 + uVar1)) {
        uVar1 = *(uint *)((param_3[1] + 5) * 4 + *param_3);
        uVar4 = uVar1 & 3;
        uVar1 = uVar1 & 0xfffffffc;
        *param_3 = uVar1;
        uVar4 = -(uint)(uVar4 != 2) & uVar4 + 1;
        param_3[1] = uVar4;
      }
    }
    iVar6 = *(int *)(((-(uint)(param_3[1] != 2) & param_3[1] + 1) + 2) * 4 + *param_3);
    while (iVar6 != param_5) {
      if (param_3[1] == 0) {
        iVar6 = 2;
      }
      else {
        iVar6 = param_3[1] - 1;
      }
      uVar1 = *(uint *)((iVar6 + 5) * 4 + *param_3);
      uVar4 = uVar1 & 3;
      uVar1 = uVar1 & 0xfffffffc;
      param_3[1] = uVar4;
      *param_3 = uVar1;
      iVar6 = *(int *)(((-(uint)(uVar4 != 2) & uVar4 + 1) + 2) * 4 + uVar1);
    }
  }
  uVar1 = param_3[1];
  *param_1 = *param_3;
  param_1[1] = uVar1;
  return param_1;
}

