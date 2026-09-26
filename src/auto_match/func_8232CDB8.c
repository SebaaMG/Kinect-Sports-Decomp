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
extern int fn_8232BDB0();
extern int fn_8232C528();
extern int fn_8232CFA0();
extern int fn_8232D150();
extern int fn_82520780();


void fn_8232CDB8(int param_1)

{
  int *piVar1;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar2;
  undefined4 uVar6;
  
  iVar4 = *(int *)(*(int *)(param_1 + 8) + 0x27c);
  iVar3 = fn_8232CFA0(param_1,iVar4);
  piVar1 = *(int **)(param_1 + 0xc);
  if (iVar3 == 0) {
    if (((piVar1[3] == 5) || (*(int *)(iVar4 + 0x7ac) != 0)) || (*(int *)(iVar4 + 0x7a0) != 0)) {
      fn_8232C528(piVar1,2);
    }
  }
  else {
    iVar4 = (**(code **)(*piVar1 + 0x18))();
    if ((iVar4 == 5) && (*(int *)(param_1 + 0x38) == 0)) {
      fn_8232C528(*(undefined4 *)(param_1 + 0xc),2);
    }
    if ((*(int *)(param_1 + 0x38) != 0) &&
       (iVar4 = (**(code **)(**(int **)(param_1 + 0xc) + 0x18))(), iVar4 == 5)) {
      iVar4 = *(int *)(param_1 + 0xc);
      uVar5 = fn_8232D150(param_1,*(int *)(param_1 + 0x38) == 1);
      lVar2 = fn_82520780((double)*(float *)(iVar4 + 0x80),0xffffffff83265a28);
      uVar6 = fn_8232BDB0(iVar4 + 0x6c);
      *(undefined4 *)(iVar4 + 0xc) = uVar6;
      *(uint *)(iVar4 + 0x10) = (uint)(lVar2 != 0);
      *(undefined4 *)(iVar4 + 0x14) = uVar5;
      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
    }
  }
  return;
}

