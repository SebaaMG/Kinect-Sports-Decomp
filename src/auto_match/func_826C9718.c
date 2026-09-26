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
extern unsigned int *auStack_40;
extern int fn_8269F500();
extern int fn_826C8D00();
extern int fn_826F5D70();
extern int fn_82704760();
extern unsigned int iStack_38;
extern unsigned int uStack_34;


void fn_826C9718(int param_1,ulonglong param_2)

{
  int *piVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  char cVar5;
  int iVar4;
  uint uVar6;
  undefined4 auStack_40 [2];
  int iStack_38;
  uint uStack_34;
  
  if ((int)param_2 != -1) {
    iVar4 = *(int *)(param_1 + 0x1ac);
    if ((iVar4 == 0) || (*(char *)(iVar4 + 0x18) != '\0')) {
      uVar2 = (**(code **)(**(int **)(param_1 + 0x9c) + 0x28))();
    }
    else {
      uVar2 = (ulonglong)*(uint *)(iVar4 + 0x10);
    }
    if ((param_2 & 0xffffffff) < (uVar2 & 0xffffffff)) {
      uVar3 = fn_826F5D70((ulonglong)*(uint *)(param_1 + 0xa0) + 0xa2c,auStack_40);
      (**(code **)(**(int **)(param_1 + 0x9c) + 0x2c))(&iStack_38,*(int **)(param_1 + 0x9c),param_2)
      ;
      uVar6 = 0;
      if (uStack_34 != 0) {
        iVar4 = 0;
        do {
          piVar1 = *(int **)(iVar4 + iStack_38);
          cVar5 = (**(code **)(*piVar1 + 0x10))(piVar1);
          if (cVar5 != '\0') {
            (**(code **)(*piVar1 + 4))(piVar1,param_1);
          }
          uVar6 = uVar6 + 1;
          iVar4 = iVar4 + 4;
        } while (uVar6 < uStack_34);
      }
      *(undefined4 *)(*(int *)(param_1 + 0xa0) + 0xa7c) = auStack_40[0];
      fn_82704760(*(undefined4 *)(param_1 + 0xa0),uVar3);
      return;
    }
  }
  iVar4 = *(int *)(param_1 + 0x80);
  if (iVar4 == 0) {
    iVar4 = fn_8269F500(param_1);
  }
  fn_826C8D00(param_1 + 0xc,0xffffffff8200be48,**(undefined4 **)(iVar4 + 0xc),param_2);
  return;
}

