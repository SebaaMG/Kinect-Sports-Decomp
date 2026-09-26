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


undefined8 fn_82C1E938(int param_1,ushort *param_2,int *param_3,uint *param_4,int *param_5)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  byte bVar4;
  char cVar5;
  char cVar6;
  undefined1 auStack_50 [80];
  
  piVar1 = *(int **)(param_1 + 0x1c);
  uVar3 = 0;
  cVar5 = '\0';
  if ((((piVar1 == (int *)0x0) || (param_2 == (ushort *)0x0)) || (param_4 == (uint *)0x0)) ||
     ((param_5 == (int *)0x0 || (param_3 == (int *)0x0)))) {
    uVar3 = 0xffffffff80070057;
  }
  else {
    *param_2 = 0;
    if (*param_4 < 2) {
      bVar4 = 0;
      cVar6 = '\0';
      do {
        if (*param_4 == 0) {
          uVar3 = (**(code **)(*piVar1 + 0x10))(*piVar1,*param_5,param_3,param_4,auStack_50);
          if ((int)uVar3 < 0) {
            return uVar3;
          }
          cVar5 = '\0';
          *(ulonglong *)(piVar1 + 2) = (ulonglong)*param_4 + *(longlong *)(piVar1 + 2);
          *param_5 = *param_5 - *param_4;
        }
        bVar4 = bVar4 + 1;
        iVar2 = (int)cVar5;
        cVar5 = cVar5 + '\x01';
        *param_2 = (ushort)*(byte *)(*param_3 + iVar2) << ((int)cVar6 & 0x3fU) | *param_2;
        *param_4 = *param_4 - 1;
        cVar6 = cVar6 + '\b';
      } while (bVar4 < 2);
      *param_3 = (int)cVar5 + *param_3;
    }
    else {
      *param_2 = (ushort)((byte *)*param_3)[1] * 0x100 + (ushort)*(byte *)*param_3;
      *param_3 = *param_3 + 2;
      *param_4 = *param_4 - 2;
    }
  }
  return uVar3;
}

