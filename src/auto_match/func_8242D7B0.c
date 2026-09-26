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
extern int fn_822ABA88();
extern int fn_822B7620();
extern int fn_822C6880();
extern int fn_82359C18();
extern int fn_8242C410();
extern int fn_82F56790();
extern unsigned int uStack_30;


void fn_8242D7B0(undefined8 param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined8 in_r0;
  int iVar4;
  longlong lVar3;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  undefined1 auStack_40 [16];
  undefined4 uStack_30;
  
  lVar6 = 0;
  iVar4 = fn_8242C410();
  if (0 < iVar4) {
    lVar7 = 0;
    iVar4 = **(int **)((int)param_1 + 8);
    do {
      piVar1 = *(int **)((int)lVar7 + iVar4);
      lVar3 = fn_822ABA88(*(undefined4 *)(piVar1[4] * 4 + *piVar1),0);
      iVar5 = (int)in_r0;
      if (*(int *)((int)lVar3 + 0x24) == param_3) {
        if (param_2 != 0) {
          uStack_30 = 0;
          fn_82F56790(lVar3 + 0x140,auStack_40);
          fn_82359C18(auStack_40);
          return;
        }
        fn_822C6880(lVar3 + 0xc0);
        iVar4 = *(int *)((int)lVar3 + 0x114);
        puVar2 = (undefined4 *)(iVar5 + iVar4 + 0x50 & 0xfffffff0);
        *puVar2 = in_register_000104d0;
        puVar2[1] = in_register_000104d4;
        puVar2[2] = in_register_000104d8;
        puVar2[3] = in_vr77;
        *(undefined4 *)(iVar4 + 0x7c) = 0;
        puVar2 = (undefined4 *)(iVar4 + 0x60U & 0xfffffff0);
        *puVar2 = in_register_000104d0;
        puVar2[1] = in_register_000104d4;
        puVar2[2] = in_register_000104d8;
        puVar2[3] = in_vr77;
        fn_822B7620(lVar3);
        return;
      }
      lVar6 = lVar6 + 1;
      lVar7 = lVar7 + 4;
      iVar5 = fn_8242C410(param_1);
    } while ((int)lVar6 < iVar5);
  }
  return;
}

