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
extern int fn_82FB8030();
extern int fn_82FB81B8();
extern int fn_82FB8420();
extern int fn_82FB8808();


undefined8 fn_82FB8C80(int *param_1)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  char cVar6;
  int iVar4;
  uint uVar5;
  int *piVar7;
  char acStack_40 [64];
  
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 6) = 1;
  *(ushort *)(param_1 + 10) = *(ushort *)(param_1 + 10) | 0x8000;
  piVar3 = (int *)(*param_1 + 0xac);
  while( true ) {
    piVar7 = piVar3;
    if (piVar7 == (int *)0x0) {
      return 2;
    }
    cVar6 = (**(code **)(*piVar7 + 4))(piVar7);
    if (cVar6 != '\0') break;
    if (((piVar7[5] - piVar7[4] & 0xfffffffcU) == 0) || (*(char *)((int)piVar7 + 0x26) == '\0')) {
      piVar7 = (int *)piVar7[1];
      if (piVar7 == (int *)0x0) {
        return 2;
      }
    }
    else {
      iVar4 = fn_82FB81B8(param_1,piVar7);
      if (iVar4 != 1) {
        fn_82FB8030(param_1);
        return 2;
      }
    }
    acStack_40[0] = '\0';
    while( true ) {
      uVar5 = 0;
      iVar4 = param_1[2] + -0xc;
      uVar1 = *(uint *)(*(int *)(param_1[2] + -0xc) + 0x1c);
      if (uVar1 < 4) {
        if ((uVar1 == 0) || (uVar1 == 1)) {
          uVar5 = fn_82FB8420(param_1,iVar4,acStack_40);
        }
        else {
          uVar5 = fn_82FB8808(param_1,iVar4,acStack_40);
        }
      }
      cVar6 = acStack_40[0];
      if (acStack_40[0] == '\0') {
        piVar3 = *(int **)((uVar5 & 0xffff) * 4 + piVar7[4]);
      }
      else {
        piVar3 = (int *)piVar7[1];
        iVar4 = *(int *)(*(int *)(param_1[2] + -0xc) + 0x1c);
        if (((iVar4 == 0) || (iVar4 == 2)) &&
           (piVar2 = *(int **)(param_1[2] + -4), piVar2 != (int *)0x0)) {
          (**(code **)(*piVar2 + 4))();
        }
        param_1[2] = param_1[2] + -0xc;
      }
      if (cVar6 == '\0') break;
      if (piVar3 == (int *)0x0) {
        return 2;
      }
    }
  }
  iVar4 = piVar7[4];
  param_1[4] = iVar4;
  *(char *)(param_1 + 6) = '\x01' - (iVar4 == 0);
  param_1[5] = piVar7[2];
  *(undefined2 *)((int)param_1 + 0x2a) = *(undefined2 *)(piVar7 + 3);
  return 1;
}

