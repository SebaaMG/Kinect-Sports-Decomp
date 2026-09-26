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
extern int fn_825A8A70();
extern int fn_825B46F0();
extern int fn_825FDA90();
extern int fn_825FEAC0();
extern int fn_8265C9E0();
extern int fn_82D81078();
extern int fn_82DEDBA8();
extern unsigned int uStack_2f;
extern unsigned int uStack_30;


void fn_8253F650(int param_1)

{
  ulonglong uVar1;
  undefined4 uVar2;
  int *piVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 uStack_30;
  undefined1 uStack_2f;
  
  if (*(uint *)(param_1 + 0x8c0) != 0) {
    if ((*(uint *)(param_1 + 2000) & 8) != 0) {
      fn_825A8A70(param_1,(ulonglong)*(uint *)(param_1 + 0x8c0) + 0x98,0,0,0);
      fn_825B46F0(param_1 + 0x758);
    }
  }
  if (*(int *)(param_1 + 0x7ac) != 0) {
    uVar1 = fn_8265C9E0(0x368);
    if ((uVar1 & 0xffffffff) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = fn_825FEAC0(uVar1,*(undefined4 *)(param_1 + 0x8c0),param_1 + 0x7ac);
    }
    *(undefined4 *)(param_1 + 0x7b4) = uVar2;
    uStack_30 = *(int *)(param_1 + 0x7bc) == 0;
    uStack_2f = 1;
    uVar1 = fn_8265C9E0(0xc0);
    if ((uVar1 & 0xffffffff) == 0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)fn_825FDA90(uVar1,param_1,*(undefined4 *)(param_1 + 0x7b4),&uStack_30);
    }
    *(int **)(param_1 + 0x7b0) = piVar3;
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x4c) + 0x1f8);
    lVar5 = (ulonglong)*(uint *)(*piVar3 + 4) - 1;
    if (-1 < lVar5) {
      lVar4 = lVar5 * 0x90;
      do {
        fn_82D81078(uVar2,*(undefined4 *)((int)lVar4 + piVar3[1]),1);
        lVar5 = lVar5 + -1;
        lVar4 = lVar4 + -0x90;
      } while (-1 < lVar5);
    }
    fn_82DEDBA8(uVar2,piVar3[3]);
  }
  return;
}

