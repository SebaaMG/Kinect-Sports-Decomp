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
extern int fn_8267C498();
extern int fn_826944C8();
extern int fn_82696958();
extern int fn_8269A190();
extern int fn_8269A678();
extern int fn_826F6FA8();
extern int fn_82703770();
extern int fn_8271BF18();
extern int fn_8271CE40();
extern unsigned int lbl_82005710;


void fn_82704528(int param_1,int param_2,undefined8 param_3,undefined8 param_4,int param_5)

{
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined8 uVar1;
  longlong lVar5;
  int aiStack_50 [2];
  longlong lStack_48;
  
  iVar2 = fn_82696958(param_2 + 0x30,0);
  if (iVar2 == 0) {
    if (*(int *)(param_2 + 0x10) == -1) {
      piVar4 = (int *)fn_8269A678(*(undefined4 *)(param_2 + 0x14),param_1);
      if (piVar4 != (int *)0x0) {
        piVar4[1] = piVar4[1] + 1;
      }
    }
    else {
      piVar4 = (int *)fn_826F6FA8(param_1);
      if (piVar4 == (int *)0x0) {
        piVar4 = (int *)fn_82703770(param_1,param_3,*(undefined4 *)(param_2 + 0x10));
        if (piVar4 == (int *)0x0) {
          return;
        }
      }
      else {
        piVar4[1] = piVar4[1] + 1;
      }
    }
    iVar2 = (**(code **)(*piVar4 + 0x9c))(piVar4);
    if (iVar2 == 0x1b) {
      lStack_48 = (longlong)param_5;
      if (*(double *)(piVar4 + 0xe) < lbl_82005710) {
        *(double *)(piVar4 + 0xe) = lbl_82005710;
      }
      *(double *)(piVar4 + 0xc) = (double)lStack_48;
      *(double *)(piVar4 + 0xe) = *(double *)(piVar4 + 0xe) + (double)lStack_48;
    }
    uVar1 = (**(code **)(**(int **)(param_1 + 0x68) + 0x5c))();
    fn_8271BF18(uVar1,piVar4 + 0x1a,param_4);
    fn_8267C498(piVar4);
  }
  else {
    iVar2 = fn_82696958(param_2 + 0x30,0);
    iVar3 = (**(code **)(**(int **)(param_1 + 0x68) + 0x5c))(*(int **)(param_1 + 0x68));
    fn_8269A190(aiStack_50,(ulonglong)*(uint *)(iVar3 + 0x78) + 0x254,param_4);
    lStack_48 = (longlong)param_5;
    if (*(double *)(iVar2 + 0x38) < lbl_82005710) {
      *(double *)(iVar2 + 0x38) = lbl_82005710;
    }
    *(double *)(iVar2 + 0x30) = (double)lStack_48;
    *(double *)(iVar2 + 0x38) = *(double *)(iVar2 + 0x38) + (double)lStack_48;
    fn_8271CE40(iVar2,iVar3,aiStack_50);
    lVar5 = (ulonglong)*(uint *)(aiStack_50[0] + 8) - 1;
    *(int *)(aiStack_50[0] + 8) = (int)lVar5;
    if (lVar5 == 0) {
      fn_826944C8(aiStack_50[0]);
    }
  }
  return;
}

