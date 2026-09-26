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
extern int fn_82A1EFC0();
extern int fn_82F68CC0();


void fn_82BDBE00(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  short *psVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint *puVar8;
  ulonglong uVar9;
  
  iVar1 = *(int *)(param_2 + 8);
  iVar2 = param_1[0x24];
  puVar8 = (uint *)(param_1 + 0x24);
  uVar6 = (ulonglong)(uint)param_1[0x25];
  uVar7 = 0;
  uVar3 = (ulonglong)(*(uint *)(param_2 + 0xc) >> 1);
  if (*(int *)(*param_1 + 0x28) != 0) {
    if ((*(uint *)(param_1[1] + 0xd0) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      fn_82A1EFC0(iVar1,0,*(uint *)(param_2 + 0xc));
    }
    (**(code **)(*param_1 + 0x28))
              (*(undefined4 *)param_1[1],*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc)
               ,puVar8);
    param_3 = 0;
  }
  if (*(int *)(*param_1 + 0x20) == 0) {
    if (((*(uint *)(param_2 + 0x10) & 0xf0000000) == 0x40000000) &&
       (8 < (*(uint *)(param_2 + 0x10) & 0xff))) {
      uVar6 = uVar6 + 200;
    }
    if ((param_3 == 1) || ((*(uint *)(param_1[1] + 0xd0) & 1) != 0)) {
      *puVar8 = 0;
    }
    else {
      if (uVar3 != 0) {
        psVar5 = (short *)(iVar1 + -2);
        uVar9 = uVar3;
        do {
          psVar5 = psVar5 + 1;
          uVar4 = (ulonglong)((int)*psVar5 >> 0x1f);
          uVar7 = (((longlong)*psVar5 ^ uVar4) - uVar4) + uVar7;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      trapWord(6,uVar3,0);
      *puVar8 = -(uint)(uVar6 < (uVar7 & 0xffffffff) / uVar3) & 1;
    }
    if (*puVar8 == 1) {
      param_1[0x26] = 500;
      param_1[0x25] = 300;
    }
    else if (param_1[0x26] < 1) {
      param_1[0x25] = 600;
    }
    else {
      *puVar8 = 1;
      param_1[0x26] = param_1[0x26] - (int)((uVar3 * 1000 & 0xffffffff) / 16000);
    }
  }
  if (((*puVar8 == 1) && (iVar2 == 0)) || (30000 < (uint)param_1[0x27])) {
    param_1[0x27] = 0;
    *(char *)(param_1 + 0x23) = *(char *)(param_1 + 0x23) + '\x01';
    fn_82F68CC0(param_1 + 6,0xffffffff820e8748,0x36);
  }
  if (*puVar8 == 1) {
    param_1[0x27] = (int)((uVar3 * 1000 & 0xffffffff) / 16000) + param_1[0x27];
  }
  return;
}

