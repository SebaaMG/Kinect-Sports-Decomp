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
extern int fn_827B86F8();


int * fn_827B8AD0(uint *param_1,ulonglong param_2,ulonglong param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  short sVar4;
  short sVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  if (*param_4 == 0) {
    if (((ulonglong)*(ushort *)(param_4 + 7) < (param_2 & 0xffffffff)) ||
       ((ulonglong)*(ushort *)((int)param_4 + 0x1e) < (param_3 & 0xffffffff))) {
      piVar1 = (int *)0x0;
    }
    else {
      uVar7 = *(ushort *)(param_4 + 7) - param_2;
      uVar6 = *(ushort *)((int)param_4 + 0x1e) - param_3;
      sVar5 = (short)param_2;
      sVar4 = (short)param_3;
      if (((ulonglong)*param_1 <= (uVar7 & 0xffffffff)) ||
         ((ulonglong)*param_1 <= (uVar6 & 0xffffffff))) {
        puVar3 = param_1 + 0x19;
        if ((uVar6 & 0xffffffff) < (uVar7 & 0xffffffff)) {
          iVar2 = fn_827B86F8(puVar3,param_4);
          param_4[4] = iVar2;
          *(short *)(iVar2 + 0x18) = *(short *)(param_4 + 6) + sVar5;
          *(short *)(param_4[4] + 0x1c) = (short)uVar7;
          if ((ulonglong)*param_1 <= (uVar6 & 0xffffffff)) {
            iVar2 = fn_827B86F8(puVar3,param_4);
            param_4[5] = iVar2;
            *(undefined4 *)(iVar2 + 0x10) = 0;
            *(short *)(param_4[5] + 0x1a) = *(short *)((int)param_4 + 0x1a) + sVar4;
            *(short *)(param_4[5] + 0x1e) = (short)uVar6;
            *(short *)(param_4[5] + 0x1c) = sVar5;
          }
        }
        else {
          iVar2 = fn_827B86F8(puVar3,param_4);
          param_4[4] = iVar2;
          *(short *)(iVar2 + 0x1a) = *(short *)((int)param_4 + 0x1a) + sVar4;
          *(short *)(param_4[4] + 0x1e) = (short)uVar6;
          if ((ulonglong)*param_1 <= (uVar7 & 0xffffffff)) {
            iVar2 = fn_827B86F8(puVar3,param_4);
            param_4[5] = iVar2;
            *(undefined4 *)(iVar2 + 0x10) = 0;
            *(short *)(param_4[5] + 0x18) = *(short *)(param_4 + 6) + sVar5;
            *(short *)(param_4[5] + 0x1c) = (short)uVar7;
            *(short *)(param_4[5] + 0x1e) = sVar4;
          }
        }
      }
      *(short *)(param_4 + 7) = sVar5;
      *(short *)((int)param_4 + 0x1e) = sVar4;
      piVar1 = param_4;
    }
  }
  else {
    piVar1 = (int *)0x0;
    if (((param_4[4] == 0) || (piVar1 = (int *)((int (*)())fn_827B8AD0)(param_1), piVar1 == (int *)0x0)) &&
       (param_4[5] != 0)) {
      piVar1 = (int *)((int (*)())fn_827B8AD0)(param_1,param_2,param_3);
    }
  }
  return piVar1;
}

