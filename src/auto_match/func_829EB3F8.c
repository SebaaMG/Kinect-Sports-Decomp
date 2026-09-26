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
extern int fn_829EA4C0();
extern int fn_829EE638();
extern int fn_829EE660();


void fn_829EB3F8(int param_1,int param_2,int param_3,undefined8 param_4,int param_5,
                  longlong param_6,undefined8 param_7,uint *param_8)

{
  undefined4 uVar1;
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  uint in_stack_00000054;
  uint in_stack_0000005c;
  
  if (0 < (int)param_6) {
    uVar2 = (ulonglong)in_stack_0000005c;
    do {
      iVar7 = in_stack_00000054 * 0xc + param_8[2];
      fn_829EA4C0(param_1,*(uint *)(in_stack_00000054 * 0xc + param_8[2]) + uVar2,
                    *(undefined4 *)(iVar7 + 4),param_7);
      pfVar5 = *(float **)(iVar7 + 8);
      lVar3 = (longlong)param_3 * (longlong)*(int *)(param_2 + 0x1c) +
              (longlong)param_5 * (longlong)*(int *)(param_2 + 0x24) +
              (ulonglong)*(uint *)(param_2 + 0x28);
      if (*(int *)(iVar7 + 4) < 2) {
        if (*(int *)(iVar7 + 4) == 1) {
          fn_829EE638((double)*pfVar5,**(undefined4 **)(param_1 + 0x174),lVar3);
        }
      }
      else {
        uVar1 = *(undefined4 *)(param_1 + 0x1dc);
        fn_829EE638((double)*pfVar5,**(undefined4 **)(param_1 + 0x174),uVar1);
        pfVar5 = pfVar5 + 1;
        iVar6 = 1;
        if (1 < *(int *)(iVar7 + 4) + -1) {
          iVar4 = 4;
          do {
            fn_829EE660((double)*pfVar5,uVar1,*(undefined4 *)(*(int *)(param_1 + 0x174) + iVar4)
                            ,uVar1);
            iVar6 = iVar6 + 1;
            iVar4 = iVar4 + 4;
            pfVar5 = pfVar5 + 1;
          } while (iVar6 < *(int *)(iVar7 + 4) + -1);
        }
        fn_829EE660((double)*pfVar5,uVar1,*(undefined4 *)(iVar6 * 4 + *(int *)(param_1 + 0x174))
                        ,lVar3);
      }
      in_stack_00000054 = in_stack_00000054 + 1;
      if ((uint)((int)(param_8[3] - param_8[2]) / 0xc) <= in_stack_00000054) {
        in_stack_00000054 = 0;
        uVar2 = *param_8 + uVar2;
      }
      param_6 = param_6 + -1;
      param_5 = param_5 + 1;
    } while (param_6 != 0);
  }
  return;
}

