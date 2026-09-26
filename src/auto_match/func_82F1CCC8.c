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
extern int fn_82E85220();


void fn_82F1CCC8(int param_1,int param_2,short *param_3,undefined2 *param_4,int param_5)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 *puVar3;
  longlong lVar4;
  
  if ((((param_2 == 0) || (param_2 == 2)) || (param_2 == 4)) || (param_2 == 5)) {
    uVar2 = fn_82E85220(param_1,(longlong)
                                 *(int *)(*(int *)(param_5 + -0xb4) * 0x34 +
                                          *(int *)(param_1 + 0x6d24) + 0x28) *
                                 (longlong)(int)*param_3,
                         *(undefined4 *)
                          (*(int *)(param_5 + 0x60) * 0x34 + *(int *)(param_1 + 0x6d24) + 0x28));
    param_4[8] = uVar2;
    *param_4 = uVar2;
    puVar3 = param_4 + 9;
    iVar1 = (int)param_3 - (int)param_4;
    lVar4 = 7;
    do {
      param_3 = param_3 + 1;
      uVar2 = fn_82E85220(param_1,(longlong)(int)*param_3 * (longlong)*(int *)(param_5 + -0xb4),
                           *(undefined4 *)(param_5 + 0x60));
      puVar3[-8] = uVar2;
      uVar2 = fn_82E85220(param_1,(longlong)(int)*(short *)((int)puVar3 + iVar1) *
                                   (longlong)*(int *)(param_5 + -0xb4),
                           *(undefined4 *)(param_5 + 0x60));
      *puVar3 = uVar2;
      lVar4 = lVar4 + -1;
      puVar3 = puVar3 + 1;
    } while (lVar4 != 0);
  }
  else {
    iVar1 = (int)param_3 - (int)param_4;
    lVar4 = 0x10;
    do {
      *param_4 = *(undefined2 *)(iVar1 + (int)param_4);
      param_4 = param_4 + 1;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}

