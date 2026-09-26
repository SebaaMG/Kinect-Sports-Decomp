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
extern int fn_8267B890();
extern int fn_8267BE38();
extern int fn_826944C8();
extern int fn_8269A608();
extern int fn_8269F1B8();
extern int fn_826FF4E8();


int fn_8269F500(int *param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar5;
  int iVar6;
  longlong lVar3;
  ulonglong uVar4;
  int aiStack_30 [12];
  
  if (param_1[0x20] == 0) {
    iVar5 = (**(code **)(*param_1 + 0x40))();
    iVar6 = (**(code **)(param_1[0x1a] + 8))(param_1 + 0x1a);
    if ((iVar6 == 2) && ((*(byte *)((int)param_1 + 0x66) & 0x10) != 0)) {
      lVar3 = fn_8267B890(*(undefined4 *)(iVar5 + 0x14),0x14,0);
      if (lVar3 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = (**(code **)(*param_1 + 0x58))(param_1);
        iVar5 = fn_8269F1B8(lVar3,(ulonglong)*(uint *)(iVar5 + 0x78) + 8,0,0);
      }
      puVar1 = (uint *)param_1[0x20];
      if (puVar1 != (uint *)0x0) {
        uVar2 = *puVar1;
        *puVar1 = (uint)((ulonglong)uVar2 - 1);
        if ((longlong)((ulonglong)uVar2 - 1) < 1) {
          fn_8269A608(puVar1);
          fn_8267BE38(puVar1);
        }
      }
      param_1[0x20] = iVar5;
    }
    else {
      fn_826FF4E8(aiStack_30,iVar5);
      uVar4 = fn_8267B890(*(undefined4 *)(iVar5 + 0x14),0x14,0);
      if ((uVar4 & 0xffffffff) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = fn_8269F1B8(uVar4,aiStack_30,param_1[8],param_1);
      }
      puVar1 = (uint *)param_1[0x20];
      if (puVar1 != (uint *)0x0) {
        uVar2 = *puVar1;
        *puVar1 = (uint)((ulonglong)uVar2 - 1);
        if ((longlong)((ulonglong)uVar2 - 1) < 1) {
          fn_8269A608(puVar1);
          fn_8267BE38(puVar1);
        }
      }
      param_1[0x20] = iVar5;
      lVar3 = (ulonglong)*(uint *)(aiStack_30[0] + 8) - 1;
      *(int *)(aiStack_30[0] + 8) = (int)lVar3;
      if (lVar3 == 0) {
        fn_826944C8(aiStack_30[0]);
      }
    }
  }
  return param_1[0x20];
}

