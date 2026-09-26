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
extern int fn_8305E0F8();
extern int fn_8305EC98();
extern int fn_8305F320();
extern int fn_830615A8();
extern int fn_83065C40();
extern int fn_83065E50();
extern int fn_83066810();


void fn_8305C5D8(int param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  bool bVar1;
  int iVar3;
  undefined8 uVar2;
  
LAB_8305c5f8:
  do {
    if ((*(int *)(param_2 + 0x20) != 0) || (bVar1 = true, *(int *)(param_2 + 0x24) != 0)) {
      bVar1 = false;
    }
    if (bVar1) {
      if (*(int *)(param_2 + 0x28) == (int)param_3) {
        return;
      }
      goto LAB_8305c718;
    }
    iVar3 = fn_83066810((double)*(float *)(param_1 + 8),param_2,param_4);
    if (iVar3 == 1) {
      param_2 = *(int *)(param_2 + 0x20);
    }
    else {
      if (iVar3 != 2) {
        if (*(int *)(param_2 + 0x20) == 0) {
LAB_8305c6ec:
          fn_8305F320((double)*(float *)(param_1 + 8),param_4,param_2,param_4,0);
          param_2 = *(int *)(param_2 + 0x24);
        }
        else {
          if (*(int *)(param_2 + 0x24) == 0) {
            if (*(int *)(param_2 + 0x20) == 0) goto LAB_8305c6ec;
            fn_8305F320((double)*(float *)(param_1 + 8),param_4,param_2,0,param_4);
          }
          else {
            uVar2 = fn_83065E50();
            fn_8305E0F8(uVar2,param_5);
            fn_8305EC98(uVar2,param_4);
            fn_8305F320((double)*(float *)(param_1 + 8),param_4,param_2,uVar2,param_4);
            fn_8305C5D8(param_1,*(undefined4 *)(param_2 + 0x24),param_3,uVar2,param_5);
          }
          param_2 = *(int *)(param_2 + 0x20);
        }
        goto LAB_8305c5f8;
      }
      param_2 = *(int *)(param_2 + 0x24);
    }
    if (param_2 == 0) {
LAB_8305c718:
      fn_830615A8(param_5,param_4);
      fn_83065C40(param_4);
      return;
    }
  } while( true );
}

