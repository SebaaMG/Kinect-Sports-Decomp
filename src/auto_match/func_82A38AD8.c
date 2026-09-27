extern int *piRam83219598;
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
extern int fn_82A33D80();
extern int fn_82A381F0();


undefined8
fn_82A38AD8(ulonglong param_1,undefined8 param_2,ulonglong *param_3,undefined8 param_4,
             undefined8 param_5)

{
  int *piVar1;
  int iVar3;
  int iVar4;
  undefined8 uVar2;
  ulonglong uVar5;
  ulonglong auStack_50;

  piVar1 = piRam83219598;
  iVar3 = fn_82A381F0(piRam83219598 + 0x14,param_1,0);
  if (iVar3 != 0) {
    iVar4 = (int)param_5;
    if (iVar4 == 0xe) {
      uVar5 = *param_3;
      iVar4 = fn_82A33D80(piVar1,iVar3,uVar5 & 0xffffffff,0);
      if (iVar4 == 0) {
        return 0xffffffffc000000d;
      }
      *(ulonglong *)(iVar3 + 0x30) = uVar5;
      return 0;
    }
    if ((((iVar4 != 0x13) && (iVar4 != 0x14)) && (iVar4 != 0x1c)) &&
       ((iVar4 == 5 || (iVar4 == 0x22)))) {
      uVar2 = (**(code **)(*piVar1 + 0x20))(*(undefined4 *)(iVar3 + 4),param_2,&auStack_50,8,0x13);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      if (iVar4 == 5) {
        *param_3 = auStack_50;
        param_3[1] = auStack_50;
      }
      else if (iVar4 == 0x22) {
        param_3[4] = auStack_50;
        param_3[5] = auStack_50;
      }
    }
    param_1 = (ulonglong)*(uint *)(iVar3 + 4);
  }
  uVar2 = (**(code **)(*piVar1 + 0x24))(param_1,param_2,param_3,param_4,param_5);
  return uVar2;
}
