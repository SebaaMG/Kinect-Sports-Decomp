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
extern unsigned int *auStack_40;
extern int fn_82E43B78();
extern int fn_82E43BE8();
extern int fn_82E43DC0();
extern int fn_82E5E390();
extern int fn_82E5F3C0();


ulonglong fn_82E447C8(int param_1,int *param_2)

{
  ulonglong uVar1;
  int iVar3;
  ulonglong uVar2;
  int *piVar4;
  int *piVar5;
  ulonglong uVar6;
  undefined2 auStack_40 [2];
  int *piStack_3c;
  uint auStack_38 [14];
  
  if (param_2 == (int *)0x0) {
    uVar1 = 0xffffffff80070057;
  }
  else {
    piStack_3c = (int *)0x0;
    piVar5 = (int *)0x0;
    iVar3 = fn_82E43B78(param_1);
    if (iVar3 == 0) {
      piVar5 = *(int **)(param_1 + 0x78);
      *(int **)(param_1 + 0x78) = param_2;
      (**(code **)(*param_2 + 4))(param_2);
      uVar1 = fn_82E5F3C0(*(undefined4 *)(param_1 + 0x78));
      piVar4 = piStack_3c;
      if ((((-1 < (longlong)uVar1) &&
           (uVar1 = fn_82E5E390(*(undefined4 *)(param_1 + 0x78)), piVar4 = piStack_3c,
           -1 < (longlong)uVar1)) &&
          (uVar1 = fn_82E43BE8(param_1), piVar4 = piStack_3c, -1 < (longlong)uVar1)) &&
         ((uVar1 = fn_82E43DC0(param_1), piVar4 = piStack_3c, -1 < (longlong)uVar1 &&
          (piVar5 != (int *)0x0)))) {
        auStack_38[0] = 0;
        uVar1 = (**(code **)(*piVar5 + 0x84))(piVar5,auStack_38);
        piVar4 = piStack_3c;
        if ((-1 < (longlong)uVar1) && (uVar6 = 0, auStack_38[0] != 0)) {
          do {
            auStack_40[0] = 0;
            uVar1 = (**(code **)(*piVar5 + 0x88))(piVar5,uVar6,auStack_40,0);
            piVar4 = piStack_3c;
            if ((longlong)uVar1 < 0) break;
            uVar2 = (**(code **)(**(int **)(param_1 + 0x78) + 0x8c))
                              (*(int **)(param_1 + 0x78),auStack_40[0],&piStack_3c);
            uVar1 = ((uVar2 & 0xffffffff) >> 0x1f) - 1 & uVar1;
            if (piStack_3c != (int *)0x0) {
              (**(code **)(*piStack_3c + 8))(piStack_3c);
              piStack_3c = (int *)0x0;
            }
            uVar6 = uVar6 + 1;
            piVar4 = (int *)0x0;
          } while ((uVar6 & 0xffffffff) < (ulonglong)auStack_38[0]);
        }
      }
    }
    else {
      uVar1 = 0xffffffffc00d4650;
      piVar4 = piStack_3c;
    }
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 8))(piVar4);
      piStack_3c = (int *)0x0;
    }
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 8))(piVar5);
    }
  }
  return uVar1;
}

