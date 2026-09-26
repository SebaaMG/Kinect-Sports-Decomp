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
extern int fn_82A1E438();
extern int fn_82C0BD48();
extern int fn_82C0BDA8();
extern int fn_82C0BEA8();


void fn_82C0DB78(int *param_1)

{
  ulonglong uVar1;
  uint uVar3;
  int *piVar4;
  longlong lVar2;
  int iVar5;
  int *piStack_40;
  int *piStack_3c;
  int aiStack_38 [14];
  
  uVar1 = (**(code **)(*param_1 + 0x100))();
  while ((uVar1 & 4) == 0) {
    (**(code **)(*(int *)param_1[0xb] + 0x3c))((int *)param_1[0xb],&piStack_40,0,0);
    if (piStack_40 != (int *)0x0) {
      (**(code **)(*(int *)param_1[0xb] + 0x44))((int *)param_1[0xb],&piStack_3c,0,0);
      uVar1 = (**(code **)(*param_1 + 0x100))(param_1);
      while ((uVar1 & 6) == 0) {
        (**(code **)(*piStack_40 + 0xc))();
        uVar3 = fn_82C0BD48(piStack_3c);
        if (((uint)param_1[0x3d] < uVar3) && (param_1[0x41] == 0)) {
          piVar4 = (int *)fn_82C0BDA8(piStack_3c);
          (**(code **)(*piVar4 + 0x38))(piVar4,1);
          (**(code **)(*piStack_40 + 0x48))(piStack_40,piVar4);
          iVar5 = *piStack_40;
          lVar2 = (**(code **)(*piVar4 + 0x54))(piVar4);
          iVar5 = (**(code **)(iVar5 + 0x78))(piStack_40,lVar2 + -8,aiStack_38);
          if (iVar5 < 0) {
            (**(code **)(*piVar4 + 8))(piVar4);
            (**(code **)(*piStack_40 + 0x14))();
            (**(code **)(*param_1 + 0x60))(param_1);
            break;
          }
          (**(code **)(*piVar4 + 8))(piVar4);
          fn_82C0BEA8(piStack_3c);
          (**(code **)(*piStack_40 + 0x14))();
          (**(code **)(*param_1 + 0xcc))(param_1);
          if (aiStack_38[0] == 0) break;
        }
        else {
          (**(code **)(*piStack_40 + 0x14))();
          (**(code **)(*param_1 + 0xa4))(param_1);
        }
        uVar1 = (**(code **)(*param_1 + 0x100))(param_1);
      }
      (**(code **)(*piStack_40 + 0x50))();
      if (piStack_40 != (int *)0x0) {
        (**(code **)(*piStack_40 + 8))();
        piStack_40 = (int *)0x0;
      }
      if (piStack_3c != (int *)0x0) {
        (**(code **)(*piStack_3c + 8))();
        piStack_3c = (int *)0x0;
      }
    }
    uVar3 = (**(code **)(*param_1 + 0x100))(param_1);
    if ((uVar3 & 4) != 0) break;
    (**(code **)(*param_1 + 0xd4))(param_1);
    fn_82A1E438(param_1[0x42]);
    uVar1 = (**(code **)(*param_1 + 0x100))(param_1);
  }
  (**(code **)(*param_1 + 0xd4))(param_1);
  return;
}

