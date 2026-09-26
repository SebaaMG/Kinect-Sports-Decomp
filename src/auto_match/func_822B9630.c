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
extern int fn_822315A0();
extern int fn_82282360();
extern int fn_8251F720();
extern int fn_8265C9E0();
extern unsigned int lbl_8218DF78;
extern unsigned int lbl_821ACA24;
extern unsigned int lbl_821ACA34;
extern unsigned int lbl_831D13E8;
extern V16 loadVectorLeftIndexed128();
extern V16 loadVectorRightIndexed128();


int * fn_822B9630(int *param_1,int param_2,uint *param_3)

{
  undefined4 *puVar2;
  int iVar3;
  longlong lVar1;
  ulonglong uVar4;
  longlong lVar5;
  
  *param_1 = param_2;
  param_1[1] = 1;
  param_1[2] = 0;
  param_1[3] = 0;
  puVar2 = (undefined4 *)fn_8265C9E0(0x10);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[1] = 1;
    puVar2[2] = 1;
    puVar2[3] = 0;
    *puVar2 = &lbl_821ACA34;
  }
  if (param_1[3] != 0) {
    fn_822315A0();
  }
  param_1[3] = (int)puVar2;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = -1;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  if ((param_3 != (uint *)0x0) &&
     (uVar4 = (ulonglong)*param_3, uVar4 != (uVar4 - 1) + (ulonglong)(uVar4 == 0))) {
    iVar3 = fn_8251F720(param_3,0);
    param_1[10] = iVar3;
  }
  if ((param_1[10] == 0) && (*(int *)(*param_1 + 0x8c0) != 0)) {
    loadVectorRightIndexed128(0xc,0xffffffff831d13ec);
    loadVectorLeftIndexed128(0xffffffff831d13e4,8);
    lVar1 = fn_8265C9E0(0xf0);
    lVar5 = 0;
    if (lVar1 != 0) {
      puVar2 = (undefined4 *)lVar1;
      puVar2[1] = 1;
      puVar2[2] = 1;
      *puVar2 = &lbl_821ACA24;
      lVar5 = lVar1;
      if (lVar1 != -0x10) {
        fn_82282360((double)lbl_8218DF78,(double)lbl_8218DF78,(double)lbl_831D13E8);
      }
    }
    iVar3 = param_1[3];
    param_1[3] = (int)lVar5;
    param_1[2] = (int)lVar5 + 0x10;
    if (iVar3 != 0) {
      fn_822315A0();
    }
  }
  return param_1;
}

