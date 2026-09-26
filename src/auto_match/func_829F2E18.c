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


void fn_829F2E18(int param_1,int *param_2,ushort *param_3,ulonglong *param_4,ulonglong *param_5,
                  uint *param_6,uint *param_7,int *param_8)

{
  ushort uVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int in_stack_00000054;
  
  iVar4 = 0;
  if (0 < *param_8) {
    do {
      uVar1 = *(ushort *)(((int)*param_5 * *param_2 + *(int *)param_5) * 2 + param_1);
      if ((uVar1 & 7) == *param_3) {
        lVar8 = (ulonglong)param_7[1] + ((*param_4 & 0xffffffff) - (ulonglong)param_6[1]);
        iVar5 = param_7[1] + ((int)*param_5 - param_6[1]);
        lVar7 = (ulonglong)*param_7 + ((*param_4 >> 0x20) - (ulonglong)*param_6);
        lVar6 = (ulonglong)*param_7 + ((*param_5 >> 0x20) - (ulonglong)*param_6);
        uVar2 = (uint)(uVar1 >> 3);
        if ((*(int *)((int)((lVar8 * 0xc + lVar7 & 0xffffffffU) << 2) + in_stack_00000054) != 0) &&
           ((int)(uVar2 - (*(ushort *)
                            ((int)(((longlong)*param_2 * (longlong)iVar5 + lVar6 & 0xffffffffU) << 1
                                  ) + param_1) >> 3)) < 0x50)) {
          *(undefined4 *)(((int)*param_4 * 0xc + *(int *)param_4) * 4 + in_stack_00000054) = 1;
        }
        lVar8 = (ulonglong)param_6[1] + lVar8;
        lVar7 = (ulonglong)*param_6 + lVar7;
        lVar6 = (ulonglong)*param_6 + lVar6;
        iVar5 = param_6[1] + iVar5;
        if ((*(int *)((int)((lVar8 * 0xc + lVar7 & 0xffffffffU) << 2) + in_stack_00000054) != 0) &&
           ((int)(uVar2 - (*(ushort *)
                            ((int)(((longlong)iVar5 * (longlong)*param_2 + lVar6 & 0xffffffffU) << 1
                                  ) + param_1) >> 3)) < 0x50)) {
          *(undefined4 *)(((int)*param_4 * 0xc + *(int *)param_4) * 4 + in_stack_00000054) = 1;
        }
        if ((*(int *)((int)((((ulonglong)param_6[1] + lVar8) * 0xc + (ulonglong)*param_6 + lVar7 &
                            0xffffffff) << 2) + in_stack_00000054) != 0) &&
           ((int)(uVar2 - (*(ushort *)
                            ((int)(((longlong)(int)(param_6[1] + iVar5) * (longlong)*param_2 +
                                    (ulonglong)*param_6 + lVar6 & 0xffffffff) << 1) + param_1) >> 3)
                 ) < 0x50)) {
          *(undefined4 *)(((int)*param_4 * 0xc + *(int *)param_4) * 4 + in_stack_00000054) = 1;
        }
      }
      iVar4 = iVar4 + 1;
      uVar3 = *param_4;
      *(uint *)param_4 = *(int *)param_4 + *param_6;
      *(uint *)((int)param_4 + 4) = (int)uVar3 + param_6[1];
      uVar3 = *param_5;
      *(uint *)param_5 = *(int *)param_5 + *param_6;
      *(uint *)((int)param_5 + 4) = (int)uVar3 + param_6[1];
    } while (iVar4 < *param_8);
  }
  return;
}

