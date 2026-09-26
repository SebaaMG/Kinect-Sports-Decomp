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
#define CONCAT11(h,l) ((U16)((((U8)(h)) << 8) | ((U8)(l))))
#define CONCAT21(h,l) ((U32)((((U16)(h)) << 8) | ((U8)(l))))
#define CONCAT31(h,l) ((U32)((((U32)(h)) << 8) | ((U8)(l))))


void fn_82CD5F00(undefined4 *param_1,int param_2,int param_3,int param_4,undefined8 param_5,
                  int param_6,longlong param_7,int param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  int in_stack_00000054;
  uint in_stack_0000005c;
  uint in_stack_00000064;
  
  iVar3 = (int)param_7;
  iVar8 = 0x8000;
  iVar6 = param_6 * 0x10000 +
          ((int)in_stack_0000005c >> 4) +
          (uint)((int)in_stack_0000005c < 0 && (in_stack_0000005c & 0xf) != 0) + -0x8000;
  if (0 < iVar3) {
    lVar10 = 0;
    do {
      lVar7 = lVar10 + 0x10;
      lVar9 = lVar7;
      if (iVar3 < (int)lVar7) {
        lVar9 = param_7;
      }
      iVar4 = 0x8000;
      if (0x8000 < iVar6) {
        do {
          iVar5 = iVar4 + in_stack_0000005c + in_stack_0000005c;
          iVar11 = iVar5 + in_stack_0000005c;
          lVar12 = lVar9 - lVar10;
          iVar2 = iVar8;
          if ((int)lVar10 < (int)lVar9) {
            do {
              iVar1 = iVar2 >> (in_stack_00000064 & 0x3f);
              *param_1 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)
                                                     ((iVar4 >> (in_stack_00000064 & 0x3f)) *
                                                      param_3 + param_2 + iVar1),
                                                    *(undefined1 *)
                                                     (((int)(iVar4 + in_stack_0000005c) >>
                                                      (in_stack_00000064 & 0x3f)) * param_3 +
                                                      param_2 + iVar1)),
                                           *(undefined1 *)
                                            ((iVar5 >> (in_stack_00000064 & 0x3f)) * param_3 +
                                             param_2 + iVar1)),
                                  *(undefined1 *)
                                   ((iVar11 >> (in_stack_00000064 & 0x3f)) * param_3 + param_2 +
                                   iVar1));
              param_1 = (undefined4 *)((int)param_1 + param_4);
              lVar12 = lVar12 + -1;
              iVar2 = iVar2 + in_stack_00000054;
            } while (lVar12 != 0);
          }
          iVar4 = iVar11 + in_stack_0000005c;
          param_1 = (undefined4 *)((int)param_1 + (-4 - (int)(lVar9 - lVar10) * param_4));
        } while (iVar4 < iVar6);
      }
      iVar8 = in_stack_00000054 * 0x10 + iVar8;
      param_1 = (undefined4 *)(param_4 * 0x10 + param_8 + (int)param_1);
      lVar10 = lVar7;
    } while ((int)lVar7 < iVar3);
  }
  return;
}

