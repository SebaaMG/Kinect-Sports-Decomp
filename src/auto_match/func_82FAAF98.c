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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
#define _uStack_50 ((*(U64*)&uStack_50))
extern unsigned int *auStack_60;
extern int fn_82FAAC50();
extern int fn_82FAD0A8();
extern unsigned int uStack_50;
extern unsigned int uStack_58;


ulonglong fn_82FAAF98(int param_1,undefined8 param_2,undefined4 *param_3,uint *param_4)

{
  int iVar1;
  int *piVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar2;
  uint auStack_60 [2];
  uint uStack_58;
  int *piStack_54;
  uint uStack_50;
  int *piStack_4c;
  
  uStack_58 = (**(code **)(**(int **)(param_1 + 8) + 0x18))();
  if ((uStack_58 != 0) && (piVar3 = (int *)fn_82FAD0A8(), piVar3 != (int *)0x0)) {
    iVar1 = piVar3[0x10];
    iVar4 = 3;
    *param_3 = 0;
    piStack_54 = piVar3;
    if ((iVar1 != 0) && ((*(byte *)(iVar1 + 0x34) & 0x80) != 0)) {
      iVar4 = fn_82FAAC50(param_1,&uStack_58,param_2,param_4);
      if (iVar4 == 2) {
        return 0;
      }
      if (iVar4 == 0) {
        return (ulonglong)(uint)piVar3[3] + (ulonglong)*param_4;
      }
    }
    piStack_4c = piStack_54;
    uStack_50 = uStack_58;
    iVar5 = (**(code **)(*piVar3 + 0xc))(piVar3,*(undefined4 *)(param_1 + 8),&uStack_50,auStack_60);
    _uStack_50 = CONCAT44(uStack_50,iVar5);
    if (iVar5 != 0) {
      if (*(int *)(iVar5 + 0x40) == 0) {
        if (((iVar4 == 1) && (iVar1 != 0)) && ((*(byte *)(iVar1 + 0x34) & 0x80) != 0)) {
          *param_4 = auStack_60[0] - piVar3[3];
          return (ulonglong)auStack_60[0];
        }
      }
      else if ((iVar4 != 3) || ((*(byte *)(*(int *)(iVar5 + 0x40) + 0x34) & 0x80) != 0)) {
        *param_3 = 1;
        uVar2 = fn_82FAAC50(param_1,&uStack_50,param_2,param_4);
        if ((uVar2 & 0xffffffff) < 4) {
          if ((int)uVar2 == 0) {
            return (ulonglong)*param_4 + (ulonglong)auStack_60[0];
          }
          if ((uVar2 != 1) && (iVar4 != 3)) {
            *param_4 = 0;
            return (ulonglong)auStack_60[0];
          }
        }
        return 0;
      }
    }
  }
  return 0;
}

