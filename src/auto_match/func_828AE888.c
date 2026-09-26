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
extern int fn_82381BC0();
extern int fn_8289D8D0();
extern int fn_828A2CF8();
extern int fn_828A3578();
extern int fn_828ACC98();
extern int fn_828ACDB8();
extern int fn_828AD0F8();
extern int fn_828AD488();
extern int fn_828AECC0();
extern int fn_828C4240();
extern int fn_82A4AAA8();
extern int fn_82F63CA0();


undefined8 fn_828AE888(int param_1,undefined4 param_2)

{
  bool bVar1;
  char cVar5;
  undefined8 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int aiStack_40 [16];
  
  cVar5 = fn_828ACC98();
  if (cVar5 == '\0') {
    *(undefined4 *)(param_1 + 0xb4) = param_2;
    *(undefined1 *)(param_1 + 0x94) = 1;
    if ((*(int *)(param_1 + 0x8c) == 0) ||
       (((cVar5 = fn_828AD488(param_1), cVar5 == '\0' &&
         (cVar5 = fn_828AD0F8(param_1), cVar5 == '\0')) &&
        (cVar5 = fn_828C4240(param_1), cVar5 == '\0')))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      aiStack_40[0] = **(int **)(param_1 + 0x230);
      if ((int *)aiStack_40[0] != *(int **)(param_1 + 0x230)) {
        do {
          puVar4 = *(undefined4 **)(aiStack_40[0] + 0x10);
          fn_82381BC0(aiStack_40);
          iVar3 = fn_82A4AAA8(puVar4);
          if (iVar3 != 2) {
            fn_828AECC0(puVar4,2);
          }
          if (puVar4 != (undefined4 *)0x0) {
            (**(code **)*puVar4)(puVar4,1);
          }
        } while (aiStack_40[0] != *(int *)(param_1 + 0x230));
      }
      puVar4 = (undefined4 *)fn_8289D8D0(param_1);
      if (puVar4 != (undefined4 *)0x0) {
        (**(code **)*puVar4)(puVar4,1);
      }
      *(undefined4 *)(param_1 + 0x23c) = 0;
      fn_828A2CF8(param_1 + 0x268);
      iVar3 = *(int *)(param_1 + 600);
      if (iVar3 != *(int *)(param_1 + 0x25c)) {
        fn_82F63CA0(iVar3,*(int *)(param_1 + 0x25c),0);
        *(int *)(param_1 + 0x25c) = iVar3;
      }
      fn_828A3578(param_1 + 0x2f4);
      (**(code **)(**(int **)(param_1 + 0x8c) + 0x20))();
      fn_828ACDB8(param_1,7);
    }
    uVar2 = 1;
    *(undefined1 *)(param_1 + 0x94) = 0;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

