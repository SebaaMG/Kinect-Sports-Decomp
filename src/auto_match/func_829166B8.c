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
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82904370();
extern int fn_829080F8();
extern int fn_82914750();


longlong fn_829166B8(int param_1,int param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint *puVar4;
  int iVar5;
  uint *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  if (*(int *)(param_2 + 4) == 0xe) {
    uVar7 = (longlong)*(int *)(param_2 + 0x18) * (longlong)*(int *)(param_2 + 0x14);
    puVar4 = (uint *)fn_8265C940((uVar7 & 0x3fffffff) << 2,0x24810000);
    if (puVar4 == (uint *)0x0) {
      lVar3 = -0x7ff8fff2;
    }
    else {
      if ((uVar7 & 0xffffffff) != 0) {
        puVar6 = puVar4 + -1;
        uVar8 = uVar7;
        uVar2 = uVar7 & 0xffffffff;
        while (uVar2 != 0) {
          puVar6 = puVar6 + 1;
          *puVar6 = 0xffffffff;
          uVar8 = uVar8 - 1;
          uVar2 = uVar8;
        }
      }
      lVar3 = fn_82914750(param_1,param_2,puVar4,0);
      if ((-1 < lVar3) &&
         (lVar3 = fn_82904370(param_1,param_2,uVar7 & 0xffffffff000fffff | 0x10000000,puVar4,
                                puVar4,0,0), -1 < lVar3)) {
        puVar6 = puVar4;
        uVar8 = uVar7 & 0xffffffff;
        while (uVar8 != 0) {
          iVar1 = *(int *)(param_1 + 8);
          if (*puVar6 < *(uint *)(iVar1 + 8)) {
            iVar5 = *(int *)(*puVar6 * 4 + *(int *)(iVar1 + 0x14));
          }
          else {
            iVar5 = 0;
          }
          if (iVar5 != 0) {
            *(undefined4 *)(iVar5 + 4) = *(undefined4 *)(iVar1 + 0x84);
          }
          puVar6 = puVar6 + 1;
          uVar7 = uVar7 - 1;
          uVar8 = uVar7;
        }
        lVar3 = fn_829080F8(param_1,*(undefined4 *)(param_2 + 0x10),puVar4,
                              *(undefined4 *)(*(int *)(param_1 + 8) + 0x84),1,1,0,0);
      }
    }
    fn_8265C990(puVar4,0x24810000);
    if (*(int *)(param_1 + 0x4c) != 0) {
      lVar3 = -0x7fffbffb;
    }
  }
  else {
    lVar3 = 0;
  }
  return lVar3;
}

