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
extern int fn_82F68CC0();
extern int fn_82FA5060();
extern int fn_82FB95B0();
extern int fn_8300D168();
extern unsigned int lbl_8217C330;
extern unsigned int lbl_831BC768;


int * fn_8300CFF8(int param_1,ushort param_2)

{
  undefined2 uVar1;
  int iVar2;
  int *piVar4;
  ulonglong uVar3;
  undefined2 *puVar5;
  int iVar6;
  undefined2 *puVar7;
  
  if (param_2 == 0) {
LAB_8300d0d8:
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)fn_82FA5060(lbl_831BC768,0x2c);
    if (piVar4 == (int *)0x0) {
      return (int *)0x0;
    }
    *(ushort *)(piVar4 + 5) = param_2;
    iVar6 = (uint)param_2 * 0x32;
    *(ushort *)((int)piVar4 + 0x16) = param_2;
    piVar4[3] = iVar6;
    piVar4[4] = iVar6;
    *piVar4 = (int)&lbl_8217C330;
    piVar4[6] = 0;
    piVar4[7] = 0;
    piVar4[8] = 0;
    piVar4[9] = 0;
    piVar4[10] = 0;
    piVar4[3] = *(int *)(param_1 + 0xc);
    piVar4[4] = *(int *)(param_1 + 0x10);
    *(undefined2 *)(piVar4 + 5) = *(undefined2 *)(param_1 + 0x14);
    *(undefined2 *)((int)piVar4 + 0x16) = *(undefined2 *)(param_1 + 0x16);
    if (*(int *)(param_1 + 0x24) != 0) {
      iVar6 = (int)(param_2 + 7) >> 3;
      iVar2 = iVar6 << 1;
      uVar3 = fn_82FA5060(lbl_831BC768,iVar2);
      piVar4[9] = (int)uVar3;
      if ((uVar3 & 0xffffffff) == 0) {
LAB_8300d0c4:
        (**(code **)(*piVar4 + 4))(piVar4);
        goto LAB_8300d0d8;
      }
      piVar4[10] = (int)uVar3 + iVar6;
      fn_82F68CC0(uVar3,*(undefined4 *)(param_1 + 0x24),iVar2);
    }
    fn_8300D168(piVar4 + 6,*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18) >> 1);
    puVar7 = *(undefined2 **)(param_1 + 0x18);
    if (puVar7 != *(undefined2 **)(param_1 + 0x1c)) {
      do {
        uVar1 = *puVar7;
        puVar5 = (undefined2 *)fn_82FB95B0(piVar4 + 6);
        if (puVar5 == (undefined2 *)0x0) goto LAB_8300d0c4;
        puVar7 = puVar7 + 1;
        *puVar5 = uVar1;
      } while (puVar7 != *(undefined2 **)(param_1 + 0x1c));
    }
  }
  return piVar4;
}

