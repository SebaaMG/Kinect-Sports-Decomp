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
extern unsigned int *auStack_30;
extern int fn_82CE4118();
extern int fn_82D913E0();
extern int fn_82D9A260();
extern int fn_82DA6530();
extern int fn_82DA6A58();
extern int fn_82DA6BA8();
extern int fn_82DADC08();


void fn_82D82E28(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar4;
  longlong lVar3;
  undefined1 auStack_30 [4];
  int *piStack_2c;
  
  if ((ulonglong)*(uint *)(param_1 + 0x98) + (ulonglong)*(uint *)(param_1 + 0x94) == 0) {
    *(uint *)(param_1 + 0x94) = *(uint *)(param_1 + 0x94) + 1;
    fn_82DADC08(param_1,param_2);
    fn_82D9A260(param_2);
    fn_82D913E0(param_1,param_2);
    iVar4 = 0;
    if (0 < *(int *)(param_1 + 0x118)) {
      piVar1 = *(int **)(param_1 + 0x114);
      do {
        if ((int *)*piVar1 == param_2) goto LAB_82d82ecc;
        iVar4 = iVar4 + 1;
        piVar1 = piVar1 + 1;
      } while (iVar4 < *(int *)(param_1 + 0x118));
    }
    iVar4 = -1;
LAB_82d82ecc:
    iVar2 = *(int *)(param_1 + 0x118) + -1;
    *(int *)(param_1 + 0x118) = iVar2;
    if (iVar2 != iVar4) {
      *(undefined4 *)(iVar4 * 4 + *(int *)(param_1 + 0x114)) =
           *(undefined4 *)(iVar2 * 4 + *(int *)(param_1 + 0x114));
    }
    param_2[2] = 0;
    if (*(short *)(param_2 + 1) == 0) {
      (**(code **)(*param_2 + 0x34))(param_2);
    }
    fn_82CE4118(param_2);
    lVar3 = (ulonglong)*(uint *)(param_1 + 0x94) - 1;
    *(int *)(param_1 + 0x94) = (int)lVar3;
    if ((lVar3 == 0) && (*(char *)(param_1 + 0x9c) == '\0')) {
      if (*(int *)(param_1 + 0x8c) != 0) {
        *(undefined4 *)(param_1 + 0x8c) = 0;
        fn_82DA6BA8(*(undefined4 *)(param_1 + 0x88));
      }
      if ((*(int *)(param_1 + 0xa4) == 1) && (*(int *)(param_1 + 0x90) != 0)) {
        *(undefined4 *)(param_1 + 0x90) = 0;
        fn_82DA6A58(*(undefined4 *)(param_1 + 0x88));
      }
    }
  }
  else {
    auStack_30[0] = 0xe;
    piStack_2c = param_2;
    fn_82DA6530(*(undefined4 *)(param_1 + 0x88),auStack_30);
  }
  return;
}

