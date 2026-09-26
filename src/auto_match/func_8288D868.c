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
extern unsigned int *auStack_30;
extern int fn_82381BC0();
extern int fn_8240D928();
extern int fn_8288BE40();
extern int fn_82A4AAA8();
extern int fn_82F622E0();
extern unsigned int uStack_34;
extern unsigned int uStack_38;


longlong fn_8288D868(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  longlong lVar6;
  int aiStack_40 [2];
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 auStack_30 [48];
  
  lVar6 = 1;
  piVar1 = *(int **)(*(int *)(param_1 + 0x10) + 0x230);
  aiStack_40[0] = *piVar1;
  if ((int *)aiStack_40[0] != piVar1) {
    do {
      uVar2 = *(undefined4 *)(aiStack_40[0] + 0x10);
      if ((lVar6 == 0) || (iVar3 = fn_82A4AAA8(uVar2), iVar3 != 1)) {
LAB_8288d90c:
        lVar6 = 0;
      }
      else {
        uVar4 = fn_8240D928(uVar2);
        if (*(uint *)(param_1 + 0x4c) <= uVar4) {
                    /* WARNING: Subroutine does not return */
          fn_82F622E0(0xffffffff82023604);
        }
        uStack_38 = *(undefined4 *)(param_1 + 0x3c);
        uStack_34 = 0;
        puVar5 = (undefined4 *)fn_8288BE40(auStack_30,&uStack_38);
        lVar6 = 1;
        if ((1 << (puVar5[1] & 0x3f) & *(uint *)*puVar5) == 0) goto LAB_8288d90c;
      }
      fn_82381BC0(aiStack_40);
    } while (aiStack_40[0] != *(int *)(*(int *)(param_1 + 0x10) + 0x230));
  }
  return lVar6;
}

