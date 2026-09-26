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
extern unsigned int *auStack_68;
extern int fn_82230040();
extern int fn_82328D90();
extern int fn_8265C9E0();
extern int fn_828B5580();
extern int fn_828B55B0();
extern int fn_82F622A8();
extern unsigned int lbl_82002B04;
extern unsigned int uStack_6c;


void fn_823276B8(undefined8 param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 in_r7;
  int iVar3;
  undefined **ppuStack_70;
  undefined4 uStack_6c;
  undefined1 auStack_68 [104];
  
  fn_828B5580(auStack_68,in_r7);
  lVar2 = (**(code **)(*param_2 + 0x50))(param_2);
  fn_82328D90(param_1,lVar2 + 0x30);
  iVar1 = *(int *)param_2[0x34];
  iVar3 = *(int *)(iVar1 + 4);
  lVar2 = fn_8265C9E0(0xc);
  if (lVar2 != 0) {
    *(int *)lVar2 = iVar1;
    ((int *)lVar2)[1] = iVar3;
    if (lVar2 + 8 != 0) {
      *(int *)(lVar2 + 8) = param_2[0x33];
    }
    iVar3 = param_2[0x35];
    if (iVar3 == 0x3ffffffe) {
      lVar2 = -0x7de60000;
      fn_82F622A8(0xffffffff8219852c);
    }
    param_2[0x35] = iVar3 + 1;
    iVar3 = (int)lVar2;
    *(int *)(iVar1 + 4) = iVar3;
    **(int **)(iVar3 + 4) = iVar3;
    param_2[0x33] = param_2[0x33] + 1;
    fn_828B55B0(in_r7);
    return;
  }
  uStack_6c = 0;
  ppuStack_70 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_70);
}

