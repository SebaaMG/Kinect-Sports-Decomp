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
extern unsigned int *auStack_38;
extern int fn_82E5FD40();


ulonglong fn_82E604D0(int *param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar5;
  int *piStack_40;
  int *piStack_3c;
  uint auStack_38 [14];
  uint uVar4;
  
  if ((param_1 == (int *)0x0) || ((param_3 & 0xffffffff) < 0xd)) {
    return 0;
  }
  piStack_40 = (int *)0x0;
  uVar5 = 0;
  piStack_3c = (int *)0x0;
  uVar1 = (**(code **)(*param_1 + 0x90))(param_1,&piStack_40);
  if (-1 < (longlong)uVar1) {
    if (piStack_40 == (int *)0x0) {
      uVar1 = 0xffffffffc00d36bb;
      goto LAB_82e6064c;
    }
    auStack_38[0] = 0;
    iVar2 = fn_82E5FD40(piStack_40,auStack_38);
    if (iVar2 == 0) {
      iVar2 = (**(code **)*piStack_40)(piStack_40,0xffffffff821531d8,&piStack_3c);
      if (-1 < iVar2) {
        iVar2 = (**(code **)(*piStack_3c + 0x98))();
        uVar4 = *(uint *)(iVar2 + 0x30);
        if (uVar4 != 0) {
          trapDoubleWordImmediate(6,(ulonglong)uVar4,0);
          uVar5 = ((ulonglong)*(uint *)(iVar2 + 0x34) * 10000000) / (ulonglong)uVar4;
          if (uVar5 != 0) {
            trapDoubleWordImmediate(6,uVar5,0);
            trapWord(6,param_3 - 0xc,0);
            uVar5 = ((longlong)
                     ((int)((((param_2 & 0xffffffff) * uVar5) / 80000000 & 0xffffffff) /
                           (param_3 - 0xc & 0xffffffff)) + 2) * 1360000000 & 0xffffffffU) / uVar5;
            goto LAB_82e6062c;
          }
        }
      }
      uVar5 = 0x550;
    }
    else {
      uVar4 = auStack_38[0];
      if (auStack_38[0] == 0) {
        uVar4 = 1;
      }
      uVar3 = ((ulonglong)uVar4 & 0x1fffffff) << 3;
      uVar5 = (param_2 * 0x88 & 0xffffffff) / uVar3;
      trapWord(6,uVar3,0);
    }
  }
LAB_82e6062c:
  if (piStack_40 != (int *)0x0) {
    (**(code **)(*piStack_40 + 8))();
    piStack_40 = (int *)0x0;
  }
LAB_82e6064c:
  if (piStack_3c != (int *)0x0) {
    (**(code **)(*piStack_3c + 8))();
  }
  return ((uVar1 & 0xffffffff) >> 0x1f) - 1 & uVar5;
}

