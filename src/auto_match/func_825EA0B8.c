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
extern unsigned int *auStack_40;
extern int fn_82BFE460();
extern int fn_82BFE530();
extern U64 storeWordConditionalIndexed();


ulonglong fn_825EA0B8(longlong param_1,int param_2,uint *param_3)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar5;
  ulonglong uVar4;
  uint *puVar6;
  longlong lVar7;
  int iVar8;
  char in_RESERVE;
  byte in_cr0;
  uint auStack_40 [16];
  
  iVar8 = 0;
  lVar7 = param_1;
  do {
    piVar1 = (int *)*(int *)lVar7;
    if (((int)*param_3 <= piVar1[1]) && (*piVar1 == param_2)) {
      if (piVar1[4] == 0) {
        iVar5 = 1;
      }
      else {
        iVar5 = fn_82BFE460();
      }
      if (iVar5 == 0) {
        uVar2 = *(uint *)(*(int *)(iVar8 * 4 + (int)param_1) + 4);
        *param_3 = uVar2;
        do {
          puVar6 = (uint *)(param_1 + 0x20);
          if (in_RESERVE != '\0') {
            uVar3 = storeWordConditionalIndexed
                              ((ulonglong)uVar2 + (ulonglong)*puVar6,0,param_1 + 0x20);
            *puVar6 = uVar3;
            in_cr0 = 2;
          }
        } while (!(bool)(in_cr0 >> 1 & 1));
        auStack_40[0] = 0;
        uVar4 = fn_82BFE530(*(undefined4 *)(*(int *)(iVar8 * 4 + (int)param_1) + 0x10),
                                  auStack_40);
        return ((uVar4 & 0xffffffff) >> 0x1f) - 1 & (ulonglong)auStack_40[0];
      }
    }
    iVar8 = iVar8 + 1;
    lVar7 = lVar7 + 4;
    if (3 < iVar8) {
      return 0;
    }
  } while( true );
}

