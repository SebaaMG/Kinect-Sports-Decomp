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
extern int fn_82E50BE8();
extern int fn_82E50CB8();
extern int fn_82E50F10();
extern int fn_82E54898();
extern int fn_82E55600();
extern int fn_82EE2D50();


ulonglong fn_82E55768(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  ulonglong uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  uint auStack_60 [24];
  
  uVar6 = 0;
  auStack_60[0] = 0;
  if (param_2 == (undefined4 *)0x0) {
    return 0xffffffff80070057;
  }
  *param_2 = 0;
  fn_82E50CB8(param_1 + 8);
  uVar2 = fn_82E50BE8(0x68,0,0,0,0);
  if ((uVar2 & 0xffffffff) == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)fn_82E55600(uVar2,auStack_60);
    uVar6 = (ulonglong)auStack_60[0];
  }
  if (piVar3 == (int *)0x0) {
    uVar6 = 0xffffffff8007000e;
  }
  else {
    if (-1 < (int)uVar6) {
      piVar3[0x11] = *(int *)(param_1 + 0x44);
      piVar3[0x12] = *(int *)(param_1 + 0x48);
      piVar3[0x13] = *(int *)(param_1 + 0x4c);
      piVar3[0x14] = *(int *)(param_1 + 0x50);
      iVar4 = fn_82EE2D50(piVar3 + 0x15,*(undefined4 *)(param_1 + 0x58),0xffffffffffffffff);
      if (iVar4 == 0) {
LAB_82e55844:
        uVar6 = 0xffffffff8007000e;
      }
      else {
        uVar7 = 0;
        if (*(int *)(param_1 + 0x58) != 0) {
          iVar4 = 0;
          do {
            if (*(uint *)(param_1 + 0x58) <= uVar7) {
              uVar6 = 0xffffffff8000ffff;
              goto LAB_82e55934;
            }
            uVar1 = *(undefined4 *)(iVar4 + *(int *)(param_1 + 0x54));
            uVar2 = fn_82E50BE8(0xc,0,0,0,0);
            if ((uVar2 & 0xffffffff) == 0) {
              iVar5 = 0;
            }
            else {
              iVar5 = fn_82E54898(uVar2,uVar1,auStack_60);
              uVar6 = (ulonglong)auStack_60[0];
            }
            if (iVar5 == 0) goto LAB_82e55844;
            if ((int)uVar6 < 0) goto LAB_82e55934;
            if ((uint)piVar3[0x16] <= uVar7) {
              uVar6 = 0xffffffff8000ffff;
              break;
            }
            uVar7 = uVar7 + 1;
            *(int *)(piVar3[0x15] + iVar4) = iVar5;
            iVar4 = iVar4 + 4;
          } while (uVar7 < *(uint *)(param_1 + 0x58));
        }
        if ((-1 < (int)uVar6) &&
           (uVar6 = (**(code **)*piVar3)(piVar3,0xffffffff8215467c,param_2), -1 < (longlong)uVar6))
        goto LAB_82e5594c;
      }
    }
LAB_82e55934:
    (**(code **)(*piVar3 + 0x30))(piVar3,1);
  }
LAB_82e5594c:
  fn_82E50F10(param_1 + 8);
  return uVar6;
}

