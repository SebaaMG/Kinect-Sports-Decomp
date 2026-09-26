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
extern int fn_82CE4220();
extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82D3DAC0();


void fn_82D3E1F0(int param_1,int *param_2,longlong param_3,int param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined1 auStack_60 [96];
  
  piVar6 = (int *)(param_1 + 0x18);
  iVar1 = fn_82CE5410();
  iVar5 = (int)param_3;
  if ((int)(*(uint *)(param_1 + 0x20) & 0x3fffffff) < iVar5) {
    lVar3 = ((ulonglong)*(uint *)(param_1 + 0x20) & 0x3fffffff) << 1;
    if ((int)lVar3 <= iVar5) {
      lVar3 = param_3;
    }
    fn_82CE6310(*(undefined4 *)(iVar1 + 0x10),piVar6,lVar3,0x10);
  }
  *(int *)(param_1 + 0x1c) = iVar5;
  if (0 < iVar5) {
    iVar4 = 0;
    iVar1 = param_4 - (int)param_2;
    do {
      if (*param_2 != 0) {
        *(int *)(iVar4 + *piVar6) = *param_2;
        if (param_4 == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = *(undefined4 *)(iVar1 + (int)param_2);
        }
        *(undefined4 *)(iVar4 + *piVar6 + 4) = uVar2;
        *(int *)(iVar4 + *piVar6 + 0xc) = iVar5;
        *(undefined4 *)(iVar4 + *piVar6 + 8) = 0;
      }
      param_2 = param_2 + 1;
      iVar4 = iVar4 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  if (param_5 == 1) {
    fn_82CE4220(*piVar6,*(undefined4 *)(param_1 + 0x1c),0x10);
  }
  fn_82D3DAC0(param_1,auStack_60);
  return;
}

