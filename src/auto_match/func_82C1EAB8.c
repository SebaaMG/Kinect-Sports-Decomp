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


undefined8 fn_82C1EAB8(int param_1,uint *param_2,int *param_3,uint *param_4,int *param_5)

{
  int *piVar1;
  byte *pbVar2;
  int iVar3;
  undefined8 uVar4;
  byte bVar5;
  char cVar6;
  char cVar7;
  undefined1 auStack_50 [80];
  
  piVar1 = *(int **)(param_1 + 0x1c);
  uVar4 = 0;
  cVar6 = '\0';
  if ((((piVar1 == (int *)0x0) || (param_2 == (uint *)0x0)) || (param_4 == (uint *)0x0)) ||
     ((param_5 == (int *)0x0 || (param_3 == (int *)0x0)))) {
    uVar4 = 0xffffffff80070057;
  }
  else {
    *param_2 = 0;
    if (*param_4 < 4) {
      bVar5 = 0;
      cVar7 = '\0';
      do {
        if (*param_4 == 0) {
          uVar4 = (**(code **)(*piVar1 + 0x10))(*piVar1,*param_5,param_3,param_4,auStack_50);
          if ((int)uVar4 < 0) {
            return uVar4;
          }
          cVar6 = '\0';
          *(ulonglong *)(piVar1 + 2) = (ulonglong)*param_4 + *(longlong *)(piVar1 + 2);
          *param_5 = *param_5 - *param_4;
        }
        bVar5 = bVar5 + 1;
        iVar3 = (int)cVar6;
        cVar6 = cVar6 + '\x01';
        *param_2 = (uint)*(byte *)(*param_3 + iVar3) << ((int)cVar7 & 0x3fU) | *param_2;
        *param_4 = *param_4 - 1;
        cVar7 = cVar7 + '\b';
      } while (bVar5 < 4);
      *param_3 = (int)cVar6 + *param_3;
    }
    else {
      pbVar2 = (byte *)*param_3;
      *param_2 = (((uint)pbVar2[3] * 0x100 + (uint)pbVar2[2]) * 0x100 + (uint)pbVar2[1]) * 0x100 +
                 (uint)*pbVar2;
      *param_3 = *param_3 + 4;
      *param_4 = *param_4 - 4;
    }
  }
  return uVar4;
}

