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
extern int fn_8263AB38();
extern unsigned int iStack_60;


ulonglong fn_8263AC58(uint *param_1,uint *param_2,uint *param_3,int param_4,undefined8 param_5,
                       ulonglong param_6,int param_7)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iStack_60;
  int aiStack_5c [23];
  
  iVar3 = 0x20;
  iVar4 = 4;
  if ((param_6 & 0xffffffff) != 2) {
    iVar4 = 1;
  }
  fn_8263AB38(param_5,aiStack_5c,&iStack_60);
  if (param_7 == 0) {
    uVar1 = ((longlong)(aiStack_5c[0] * iStack_60) * (longlong)param_4 & 0xffffffffU) >> 3;
    if (uVar1 != 0) {
      trapWord(6,uVar1,0);
      if (0x1f < 0x100 / uVar1) {
        iVar3 = (int)(0x100 / uVar1);
      }
    }
  }
  iStack_60 = iStack_60 * ((-(uint)(param_6 != 0) & 0x1f) + 1);
  *param_1 = (*param_1 + aiStack_5c[0] * iVar3) - 1 & ~(aiStack_5c[0] * iVar3 - 1U);
  *param_2 = (*param_2 + iStack_60) - 1 & ~(iStack_60 - 1U);
  uVar2 = (*param_3 + iVar4) - 1 & ~(iVar4 - 1U);
  *param_3 = uVar2;
  iVar3 = (*param_1 * param_4 >> 3) * *param_2;
  if ((param_6 & 0xffffffff) == 2) {
    uVar1 = (longlong)(int)uVar2 * (longlong)iVar3 + 0xfffU & 0xfffff000;
  }
  else {
    uVar1 = (longlong)(int)(iVar3 + 0xfffU & 0xfffff000) * (longlong)(int)uVar2;
  }
  return uVar1;
}

