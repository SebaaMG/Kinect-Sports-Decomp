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
extern unsigned int fStack_38;
extern unsigned int fStack_3c;
extern unsigned int fStack_40;
extern int fn_8305D680();
extern int fn_8305D688();
extern unsigned int lbl_82005C88;
extern unsigned int lbl_82005C8C;


void fn_83060EC8(int param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  struct { float first; float second; } stack_pair_40;

  float fStack_38;
  
  fVar2 = lbl_82005C8C;
  fVar1 = lbl_82005C88;
  *param_2 = lbl_82005C88;
  param_2[1] = fVar1;
  param_2[2] = fVar1;
  *param_3 = fVar2;
  param_3[1] = fVar2;
  param_3[2] = fVar2;
  iVar5 = *(int *)(param_1 + 4);
  if (iVar5 != 0) {
    fn_8305D688(iVar5,0,param_2);
    *param_3 = *param_2;
    param_3[1] = param_2[1];
    param_3[2] = param_2[2];
    do {
      lVar4 = 0;
      iVar3 = fn_8305D680(iVar5);
      if (0 < iVar3) {
        do {
          fn_8305D688(iVar5,lVar4,&stack_pair_40.first);
          if (stack_pair_40.first < *param_2) {
            *param_2 = stack_pair_40.first;
          }
          if (stack_pair_40.second < param_2[1]) {
            param_2[1] = stack_pair_40.second;
          }
          if (fStack_38 < param_2[2]) {
            param_2[2] = fStack_38;
          }
          if (*param_3 < stack_pair_40.first) {
            *param_3 = stack_pair_40.first;
          }
          if (param_3[1] < stack_pair_40.second) {
            param_3[1] = stack_pair_40.second;
          }
          if (param_3[2] < fStack_38) {
            param_3[2] = fStack_38;
          }
          lVar4 = lVar4 + 1;
          iVar3 = fn_8305D680(iVar5);
        } while ((int)lVar4 < iVar3);
      }
    } while ((iVar5 != 0) && (iVar5 = *(int *)(iVar5 + 4), iVar5 != 0));
  }
  return;
}

