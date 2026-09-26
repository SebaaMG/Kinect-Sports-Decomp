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
extern int fn_82341E28();
extern unsigned int lbl_821CC160;


void fn_82341110(double param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  
  uVar5 = lbl_821CC160;
  iVar1 = *(int *)param_2[3];
  if ((*(int *)(iVar1 + 0x120) != 0) && (*(int *)(*(int *)(iVar1 + 0x14) + 0x1d0) == 0)) {
    iVar2 = *(int *)(*(int *)(iVar1 + 0x1a0) + 8);
    if ((iVar2 != ((int *)param_2[3])[1]) &&
       (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar1 + 0x1a0) + 0xc) + 0x174) + 0x5c) + 0x2b4)
        == 0)) {
      uVar3 = *(undefined4 *)(param_2[3] + 4);
      *(int *)(param_2[3] + 4) = iVar2;
      *(undefined4 *)(param_2[3] + 0x14) = uVar5;
      (**(code **)(*param_2 + 0x20))(param_2,uVar3,*(undefined4 *)(param_2[3] + 4));
    }
    piVar4 = (int *)param_2[3];
    piVar4[5] = (int)(float)((double)(float)piVar4[5] + param_1);
    iVar2 = *(int *)(*(int *)(*(int *)(iVar1 + 0x1a0) + 0xc) + 0x174);
    if ((*(int *)(*(int *)(iVar2 + 0x5c) + 0x1d4) != -1) &&
       (iVar2 = *(int *)(iVar2 + 0x5c),
       *(int *)(*(int *)(iVar2 + 0x1d4) * 4 + *(int *)(iVar2 + 0x1c4)) != 0)) {
      if ((*(int *)(iVar1 + 0x24) != 0) &&
         (iVar2 = *(int *)(*(int *)(*(int *)(*piVar4 + 0x1a0) + 0xc) + 0x174),
         *(char *)(iVar2 + 0xc9) == '\0')) {
        if (*(int *)(*(int *)(iVar2 + 0x5c) + 0x2b4) == 0) {
          (**(code **)(*param_2 + 0x28))(param_1,param_2);
        }
        if (*(int *)(*(int *)(iVar1 + 0x1a0) + 0x18c) == 0) {
          return;
        }
        fn_82341E28(param_1,param_2);
        return;
      }
      if (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*piVar4 + 0x1a0) + 0xc) + 0x174) + 0x5c) +
                  0x2b4) == 0) {
        (**(code **)(*param_2 + 0x24))(param_1,param_2);
      }
    }
  }
  return;
}

