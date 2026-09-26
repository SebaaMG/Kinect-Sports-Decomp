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
extern int fn_8265CA20();
extern int fn_82816710();
extern int fn_82F622A8();


void fn_82816868(int *param_1,ulonglong param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if ((param_2 & 0xffffffff) < 0xccccccd) {
    if ((ulonglong)(uint)((param_1[2] - *param_1) / 0x14) < (param_2 & 0xffffffff)) {
      iVar1 = fn_82816710(param_2,0);
      iVar5 = param_1[1];
      iVar4 = iVar1;
      for (iVar6 = *param_1; iVar6 != iVar5; iVar6 = iVar6 + 0x14) {
        if (iVar4 != 0) {
          puVar3 = (undefined4 *)(iVar6 + -4);
          puVar2 = (undefined4 *)(iVar4 + -4);
          lVar7 = 5;
          do {
            puVar3 = puVar3 + 1;
            puVar2 = puVar2 + 1;
            *puVar2 = *puVar3;
            lVar7 = lVar7 + -1;
          } while (lVar7 != 0);
        }
        iVar4 = iVar4 + 0x14;
      }
      iVar6 = *param_1;
      iVar5 = param_1[1] - iVar6;
      if (iVar6 != 0) {
        for (; iVar6 != param_1[1]; iVar6 = iVar6 + 0x14) {
        }
        fn_8265CA20();
      }
      *param_1 = iVar1;
      param_1[2] = (int)param_2 * 0x14 + iVar1;
      param_1[1] = (iVar5 / 0x14) * 0x14 + iVar1;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  fn_82F622A8(0xffffffff82196fd4);
}

