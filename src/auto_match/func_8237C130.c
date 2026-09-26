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
extern int fn_822CDC98();
extern int fn_8236FB68();
extern int fn_82370BB8();
extern int fn_82379D20();
extern int fn_8237C338();
extern int fn_82508078();
extern int fn_82F63108();
extern unsigned int lbl_821CC160;


void fn_8237C130(double param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 in_r8;
  int iVar6;
  double dVar7;
  
  if ((((*(int *)(param_2 + 200) == 0) && (*(int *)(param_2 + 0xcc) == 0)) &&
      (*(int *)(param_2 + 0xd0) == 0)) && (*(int *)(param_2 + 0x216c) == 0)) {
    dVar7 = (double)lbl_821CC160;
    if ((dVar7 < (double)*(float *)(param_2 + 0xc4)) &&
       (fVar1 = (float)((double)*(float *)(param_2 + 0xc4) - param_1),
       *(float *)(param_2 + 0xc4) = fVar1, (double)fVar1 <= dVar7)) {
      if ((*(int *)(param_2 + 0xb4) == 0) ||
         ((*(int *)(param_2 + 0x2130) == 0 || (*(int *)(param_2 + 0x2134) == 0)))) {
        if (*(int *)(param_2 + 0xbc) == 0) {
          if (*(int *)(param_2 + 0xc0) != 0) {
            *(undefined4 *)(param_2 + 200) = 1;
          }
        }
        else {
          fn_8237C338(param_2);
        }
      }
      else {
        if (*(int *)(param_2 + 0x2160) == 0) {
                    /* WARNING: Subroutine does not return */
          fn_82F63108();
        }
        (**(code **)(**(int **)(param_2 + 0x2160) + 4))
                  (*(int **)(param_2 + 0x2160),(double)*(float *)(param_2 + 0x38) < dVar7,1);
        iVar6 = *(int *)(param_2 + 0xb8);
        fn_82379D20((double)*(float *)(param_2 + 0x2140),(double)*(float *)(param_2 + 0x2144),
                          param_2,*(undefined4 *)(param_2 + 0x2130),
                          *(undefined4 *)(param_2 + 0x2134),(iVar6 != 0) + '\x11',
                          *(int *)(param_2 + 0x213c) == 0,in_r8,iVar6 == 0,1);
        *(undefined4 *)(param_2 + 0xd0) = 1;
        fn_822CDC98(*(undefined4 *)(param_2 + 0x2134),0xffffffff821b3864);
        iVar2 = *(int *)(*(int *)(param_2 + 0x2130) + 0x1c0);
        iVar3 = *(int *)(*(int *)(param_2 + 0x2130) + 0x2c);
        uVar4 = *(undefined4 *)(iVar3 * 4 + **(int **)(iVar2 + 8));
        fn_82370BB8(iVar2,*(undefined4 *)
                                 (((uint)((ulonglong)LZCOUNT(iVar3) >> 3) & 4) +
                                 **(int **)(iVar2 + 8)),iVar2 + 0x7e8);
        fn_82370BB8(iVar2,uVar4,iVar2 + 0x814);
        if (iVar6 == 0) {
          iVar6 = *(int *)(*(int *)(param_2 + 0x2134) + 0x1c0);
          lVar5 = fn_8236FB68(0xe);
          if (lVar5 != 0) {
            fn_82508078(*(undefined4 *)(iVar6 + 0xa4),lVar5,0);
          }
        }
        iVar6 = *(int *)(param_2 + 0x2130);
        iVar6 = (*(int *)(iVar6 + 0x2c) * 2 + *(int *)(iVar6 + 0x28)) * 0x88 +
                *(int *)(iVar6 + 0x1c0) + 0xa14;
        *(int *)(iVar6 + 0x48) = *(int *)(iVar6 + 0x48) + 1;
      }
    }
  }
  return;
}

