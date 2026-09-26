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
extern int fn_826C66D0();
extern int fn_82702A88();
extern int fn_82703C40();
extern int fn_82703E98();
extern unsigned int lbl_8200DE20;


undefined8 fn_827043C0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0xa08) = 0;
    fn_82703E98();
    if (*(int *)(param_1 + 0x60) != 0) {
      do {
        piVar1 = *(int **)(*(int *)(param_1 + 0x60) * 8 + *(int *)(param_1 + 0x5c) + -4);
        (**(code **)(*piVar1 + 0x74))(piVar1);
        fn_82703C40(param_1);
        fn_826C66D0(piVar1);
        fn_82702A88((int *)(param_1 + 0x5c),(ulonglong)*(uint *)(param_1 + 0x60) - 1);
      } while (*(int *)(param_1 + 0x60) != 0);
    }
    uVar3 = 1;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 0x13c) = lbl_8200DE20;
    *(uint *)(param_1 + 0xb00) = *(uint *)(param_1 + 0xb00) | 0x100;
  }
  else {
    uVar5 = 0;
    if (*(int *)(param_1 + 0x60) != 0) {
      iVar4 = 0;
      do {
        if (*(int *)(iVar4 + *(int *)(param_1 + 0x5c)) == param_2) {
          iVar2 = uVar5 * 8 + *(int *)(param_1 + 0x5c);
          iVar4 = *(int *)(iVar2 + 4);
          if (iVar4 != 0) {
            *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) + 1;
          }
          piVar1 = *(int **)(iVar2 + 4);
          (**(code **)(*piVar1 + 0x74))(piVar1);
          fn_82703C40(param_1);
          fn_826C66D0(piVar1);
          fn_82702A88(param_1 + 0x5c,uVar5);
          *(uint *)(param_1 + 0xb00) = *(uint *)(param_1 + 0xb00) | 0x100;
          fn_8267C498(piVar1);
          return 1;
        }
        uVar5 = uVar5 + 1;
        iVar4 = iVar4 + 8;
      } while (uVar5 < *(uint *)(param_1 + 0x60));
    }
    uVar3 = 0;
  }
  return uVar3;
}

