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
extern int fn_82CE5410();
extern int fn_82D38870();
extern unsigned int iStack_74;
extern unsigned int iStack_78;
extern unsigned int lbl_821347BC;
extern unsigned int lbl_82134848;
extern unsigned int uStack_70;


undefined8 fn_82D229F0(double param_1,int param_2,int *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  undefined **ppuStack_80;
  int *piStack_7c;
  int iStack_78;
  int iStack_74;
  uint uStack_70;
  undefined1 auStack_60 [96];
  
  iStack_78 = 0;
  piStack_7c = &iStack_78;
  iStack_74 = 0;
  ppuStack_80 = &lbl_82134848;
  uStack_70 = 0x80000000;
  uVar1 = (**(code **)(*param_3 + 0xc))(auStack_60);
  fn_82D38870(param_4,uVar1,&ppuStack_80);
  iVar2 = 0;
  ppuStack_80 = &lbl_821347BC;
  if (0 < iStack_74) {
    iVar3 = 0;
    do {
      dVar4 = (double)(**(code **)(**(int **)(param_2 + 0x38) + 4))
                                (*(int **)(param_2 + 0x38),param_3,
                                 *(undefined4 *)(*(int *)(iVar3 + iStack_78) + 0x20),1);
      if (dVar4 < param_1) {
        iVar2 = fn_82CE5410();
        iStack_74 = 0;
        if ((uStack_70 & 0x80000000) == 0) {
          (**(code **)(**(int **)(iVar2 + 0x10) + 0x10))
                    (*(int **)(iVar2 + 0x10),iStack_78,uStack_70 & 0x3fffffff,4);
        }
        return 1;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar2 < iStack_74);
  }
  iVar2 = fn_82CE5410();
  iStack_74 = 0;
  if ((uStack_70 & 0x80000000) == 0) {
    (**(code **)(**(int **)(iVar2 + 0x10) + 0x10))
              (*(int **)(iVar2 + 0x10),iStack_78,uStack_70 & 0x3fffffff,4);
  }
  return 0;
}

