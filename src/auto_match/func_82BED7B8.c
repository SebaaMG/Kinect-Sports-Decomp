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
extern int fn_82BE8D50();
extern int fn_82BED360();
extern int fn_82BED468();
extern int fn_82BF6B38();
extern int fn_82BF6BC0();
extern int fn_82BF7B48();
extern unsigned int lbl_83175468;


void fn_82BED7B8(int *param_1)

{
  int iVar2;
  ulonglong uVar1;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  
  if ((param_1[0x14] != 2) && (param_1[0x14] == 0)) {
    iVar4 = param_1[0xd];
    if (iVar4 == 0) {
      uVar1 = thunk_FUN_82be5550(0x1c);
      if ((uVar1 & 0xffffffff) == 0) {
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = (int *)fn_82BF7B48(uVar1,0,param_1[2],lbl_83175468,0,0);
      }
      if (piVar3 == (int *)0x0) {
        param_1[0x14] = 2;
      }
      else {
        iVar4 = fn_82BF6B38(param_1 + 0xb,piVar3);
        if ((iVar4 == 0) || (iVar4 = (**(code **)(*piVar3 + 4))(piVar3), iVar4 == 0)) {
          param_1[0x14] = 2;
        }
        fn_82BE8D50(piVar3);
      }
    }
    else {
      piVar3 = *(int **)(iVar4 + 0x10);
      if (piVar3 != (int *)0x0) {
        iVar2 = (**(code **)(*piVar3 + 8))(piVar3);
        if (iVar2 == 0) {
          return;
        }
        iVar2 = (**(code **)(*piVar3 + 0xc))(piVar3);
        if (iVar2 != 0) {
          if (piVar3[4] == 0) {
            uVar5 = 0;
          }
          else {
            uVar5 = *(undefined4 *)(piVar3[4] + 0x10);
          }
          iVar2 = fn_82BED468(param_1,uVar5);
          if (iVar2 != 0) {
            if (piVar3[4] == 0) {
              iVar2 = 0;
            }
            else {
              iVar2 = *(int *)(piVar3[4] + 0x10);
            }
            param_1[0x11] = *(int *)(iVar2 + 0xc);
            fn_82BF6BC0(param_1 + 0xb,iVar4);
            (**(code **)(*param_1 + 0x10))(param_1);
            return;
          }
        }
      }
      fn_82BED360(param_1);
    }
  }
  return;
}

