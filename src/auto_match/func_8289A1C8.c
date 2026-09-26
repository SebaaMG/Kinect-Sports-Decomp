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
extern int fn_8236D750();
extern int fn_8240D928();
extern int fn_82898308();
extern int fn_82898C40();
extern int fn_828A1318();


void fn_8289A1C8(int param_1,undefined8 param_2)

{
  int iVar3;
  int *piVar4;
  ulonglong uVar1;
  undefined8 uVar2;
  char cVar6;
  uint uVar5;
  int iVar7;
  
  if ((*(int **)(param_1 + 0x20) == (int *)0x0) ||
     (iVar3 = (**(code **)(**(int **)(param_1 + 0x20) + 4))(), iVar3 == 0)) {
    if ((*(int **)(param_1 + 0x20) == (int *)0x0) ||
       (iVar3 = (**(code **)(**(int **)(param_1 + 0x20) + 0x10))(), iVar3 == 0)) {
      if ((*(int **)(param_1 + 0x20) != (int *)0x0) &&
         (iVar3 = (**(code **)(**(int **)(param_1 + 0x20) + 0x14))(), iVar3 != 0)) {
        if (*(int **)(param_1 + 0x20) == (int *)0x0) {
          iVar3 = 0;
        }
        else {
          iVar3 = (**(code **)(**(int **)(param_1 + 0x20) + 0x14))();
        }
        uVar5 = fn_8240D928(param_2);
        if (uVar5 < 4) {
          uVar2 = fn_8236D750(*(undefined4 *)(param_1 + 0x18));
          fn_82898308(iVar3 + 0xc,uVar5,uVar2,0);
          uVar2 = fn_8236D750(*(undefined4 *)(param_1 + 0x18));
          fn_82898308(iVar3 + 0x28,uVar5,uVar2,0);
          *(undefined1 *)(uVar5 + iVar3 + 5) = 0;
          iVar3 = ((int)uVar5 >> 3) + (uint)((int)uVar5 < 0 && (uVar5 & 7) != 0) + iVar3;
          *(byte *)(iVar3 + 4) =
               *(byte *)(iVar3 + 4) &
               ~(byte)(1 << (uVar5 + (((int)uVar5 >> 3) + (uint)((int)uVar5 < 0 && (uVar5 & 7) != 0)
                                     ) * -8 & 0x3f));
        }
      }
    }
    else {
      if (*(int **)(param_1 + 0x20) == (int *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (**(code **)(**(int **)(param_1 + 0x20) + 0x10))();
      }
      uVar5 = fn_8240D928(param_2);
      if (uVar5 < 4) {
        *(undefined1 *)(uVar5 + iVar3 + 4) = 0;
        uVar2 = fn_8236D750(*(undefined4 *)(param_1 + 0x18));
        fn_82898308(iVar3 + 8,uVar5,uVar2,0);
      }
    }
  }
  else {
    if (*(int **)(param_1 + 0x20) == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = (int *)(**(code **)(**(int **)(param_1 + 0x20) + 4))();
    }
    uVar1 = fn_8240D928(param_2);
    if ((uVar1 & 0xffffffff) < 4) {
      (**(code **)(*piVar4 + 0x20))(piVar4,uVar1);
      iVar3 = *piVar4;
      uVar2 = fn_8236D750(*(undefined4 *)(param_1 + 0x18));
      (**(code **)(iVar3 + 0x28))(piVar4,uVar1,uVar2);
      iVar7 = (int)uVar1;
      iVar3 = (iVar7 >> 3) + (uint)(iVar7 < 0 && (uVar1 & 7) != 0);
      *(byte *)((int)piVar4 + iVar3 + 4) =
           *(byte *)((int)piVar4 + iVar3 + 4) &
           ~(byte)(1 << (iVar7 + ((iVar7 >> 3) + (uint)(iVar7 < 0 && (uVar1 & 7) != 0)) * -8 & 0x3f)
                  );
      uVar2 = fn_8236D750(*(undefined4 *)(param_1 + 0x18));
      cVar6 = fn_82898C40(param_1 + 4,0,uVar2,0);
      if (cVar6 == '\0') {
        fn_828A1318(*(undefined4 *)(param_1 + 0x28),param_1);
      }
    }
  }
  return;
}

