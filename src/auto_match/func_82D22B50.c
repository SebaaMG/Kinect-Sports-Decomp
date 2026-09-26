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
extern unsigned int *auStack_70;
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_82D38870();
extern unsigned int iStack_7c;
extern unsigned int iStack_80;
extern unsigned int lbl_821347BC;
extern unsigned int lbl_82134828;
extern unsigned int lbl_82134848;
extern unsigned int lbl_821348D0;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_78;
extern unsigned int uStack_8c;


void fn_82D22B50(int param_1,int *param_2,int *param_3)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  undefined **ppuStack_90;
  undefined4 uStack_8c;
  undefined **ppuStack_88;
  int *piStack_84;
  int iStack_80;
  int iStack_7c;
  uint uStack_78;
  undefined1 auStack_70 [112];
  
  iStack_80 = 0;
  piStack_84 = &iStack_80;
  iStack_7c = 0;
  ppuStack_88 = &lbl_82134848;
  uStack_78 = 0x80000000;
  uVar1 = (**(code **)(*param_2 + 0xc))(auStack_70);
  fn_82D38870(param_1 + 0x720,uVar1,&ppuStack_88);
  iVar3 = 0;
  ppuStack_88 = &lbl_821347BC;
  if (0 < iStack_7c) {
    iVar4 = 0;
    dVar6 = (double)lbl_821AAD20;
    do {
      uStack_8c = *(undefined4 *)(*(int *)(iVar4 + iStack_80) + 0x20);
      ppuStack_90 = &lbl_821348D0;
      dVar5 = (double)(**(code **)(**(int **)(param_1 + 0x38) + 4))
                                (*(int **)(param_1 + 0x38),param_2,&ppuStack_90,1);
      if (dVar5 <= dVar6) {
        iVar2 = fn_82CE5410();
        if (param_3[1] == (param_3[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
          fn_82CE63B0(*(undefined4 *)(iVar2 + 0x10),param_3,4);
        }
        *(undefined4 *)(param_3[1] * 4 + *param_3) = uStack_8c;
        param_3[1] = param_3[1] + 1;
      }
      iVar3 = iVar3 + 1;
      ppuStack_90 = &lbl_82134828;
      iVar4 = iVar4 + 4;
    } while (iVar3 < iStack_7c);
  }
  iVar3 = fn_82CE5410();
  iStack_7c = 0;
  if ((uStack_78 & 0x80000000) == 0) {
    (**(code **)(**(int **)(iVar3 + 0x10) + 0x10))
              (*(int **)(iVar3 + 0x10),iStack_80,uStack_78 & 0x3fffffff,4);
  }
  return;
}

