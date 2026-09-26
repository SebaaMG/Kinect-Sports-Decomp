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
extern int fn_82BC23E0();
extern unsigned int lbl_8316FF50;


int fn_82BB5CB0(int param_1,undefined1 *param_2)

{
  char cVar2;
  int iVar1;
  undefined1 uVar3;
  int iVar4;
  
  cVar2 = (**(code **)(**(int **)(param_1 + 8) + 0x14))();
  if (cVar2 == '\0') {
    cVar2 = (**(code **)(**(int **)(param_1 + 8) + 0x18))();
    if (cVar2 != '\0') {
      for (iVar4 = *(int *)(param_1 + 0x2c); *(int *)(iVar4 + 8) != 0; iVar4 = *(int *)(iVar4 + 8))
      {
        iVar1 = fn_82BC23E0(*(undefined4 *)(iVar4 + 0x28));
        if (2 < iVar1) goto LAB_82bb5d4c;
      }
      iVar4 = 0;
LAB_82bb5d9c:
      uVar3 = 0;
      goto LAB_82bb5d44;
    }
    cVar2 = (**(code **)(**(int **)(param_1 + 8) + 0x1c))();
    if (cVar2 == '\0') {
      return 0;
    }
    for (iVar4 = *(int *)(param_1 + 0x2c); *(int *)(iVar4 + 8) != 0; iVar4 = *(int *)(iVar4 + 8)) {
      iVar1 = fn_82BC23E0(*(undefined4 *)(iVar4 + 0x28));
      if (iVar1 < 3) goto LAB_82bb5d9c;
    }
  }
  else {
    iVar4 = *(int *)(param_1 + 0x2c);
    iVar1 = *(int *)(iVar4 + 8);
    while (iVar1 != 0) {
      if ((*(uint *)(&lbl_8316FF50 + *(int *)(*(int *)(iVar4 + 0x28) + 0x18) * 0x34) >> 2 & 1) != 0)
      {
        uVar3 = 0;
        goto LAB_82bb5d44;
      }
      iVar1 = fn_82BC23E0();
      if (2 < iVar1) goto LAB_82bb5d4c;
      iVar4 = *(int *)(iVar4 + 8);
      iVar1 = *(int *)(iVar4 + 8);
    }
  }
  *param_2 = 0;
  return *(int *)(param_1 + 0x2c);
LAB_82bb5d4c:
  uVar3 = 1;
LAB_82bb5d44:
  *param_2 = uVar3;
  return iVar4;
}

