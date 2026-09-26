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
extern int fn_8267BE38();
extern int fn_8267BF50();
extern int fn_826944C8();
extern int fn_826957D0();
extern int fn_82696D38();
extern int fn_82726458();
extern int fn_82728090();
extern int fn_8279A0A0();
extern unsigned int iStack_3c;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_40;


void fn_8272A710(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  bool bVar3;
  int iVar5;
  undefined8 uVar4;
  int *piVar6;
  undefined4 *apuStack_50 [4];
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  if (*(int **)(param_1 + 8) != (int *)0x0) {
    iVar5 = (**(code **)(**(int **)(param_1 + 8) + 8))();
    if (iVar5 == 4) {
      piVar6 = (int *)(*(int *)(param_1 + 8) + -0x68);
      if (*(int *)(param_1 + 8) == 0) {
        piVar6 = (int *)0x0;
      }
      if (((int *)piVar6[0x34] == (int *)0x0) || (bVar3 = true, *(int *)piVar6[0x34] == 0)) {
        bVar3 = false;
      }
      if ((!bVar3) && (0 < *(int *)(param_1 + 0x1c))) {
        uVar1 = *(undefined4 *)(param_1 + 0x18);
        uVar4 = fn_826957D0(param_1,0);
        fn_82696D38(apuStack_50,uVar4,uVar1,0xffffffffffffffff,0);
        uStack_34 = fn_8267BF50(piVar6);
        uStack_40 = 0;
        iStack_3c = 0;
        uStack_38 = 0;
        fn_8279A0A0(piVar6[0x28],*apuStack_50[0],0xffffffffffffffff,0,&uStack_40);
        if (iStack_3c != 0) {
          fn_82728090(piVar6,&uStack_40);
        }
        iVar5 = (**(code **)(*piVar6 + 0x40))(piVar6);
        if (iVar5 != 0) {
          *(uint *)(iVar5 + 0xb00) = *(uint *)(iVar5 + 0xb00) | 0x400;
        }
        fn_82726458(uStack_40,iStack_3c);
        fn_8267BE38(uStack_40);
        uVar2 = apuStack_50[0][2];
        apuStack_50[0][2] = (int)((ulonglong)uVar2 - 1);
        if ((ulonglong)uVar2 - 1 == 0) {
          fn_826944C8(apuStack_50[0]);
        }
      }
    }
  }
  return;
}

