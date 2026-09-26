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
extern int fn_82248B90();
extern int fn_8288F948();
extern int fn_828A12E8();
extern int fn_828B5ED8();
extern unsigned int lbl_82025010;
extern unsigned int uStack_2e;
extern unsigned int uStack_30;


undefined4 * fn_828B6158(undefined4 *param_1,short param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  undefined2 uStack_30;
  undefined2 uStack_2e;
  int aiStack_2c [11];
  
  *param_1 = &lbl_82025010;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(short *)(param_1 + 5) = param_2;
  uVar2 = fn_828A12E8(param_3);
  iVar3 = fn_8288F948(uVar2,0x8000);
  aiStack_2c[0] = **(int **)(iVar3 + 4);
  if ((int *)aiStack_2c[0] != *(int **)(iVar3 + 4)) {
    do {
      iVar1 = *(int *)(aiStack_2c[0] + 0x14);
      if (*(short *)(iVar1 + 0x14) == param_2) {
        uStack_30 = *(undefined2 *)(iVar1 + 0x16);
        uStack_2e = *(undefined2 *)(iVar1 + 0x18);
        fn_828B5ED8(param_1 + 1,&uStack_30);
      }
      fn_82248B90(aiStack_2c);
    } while (aiStack_2c[0] != *(int *)(iVar3 + 4));
  }
  return param_1;
}

