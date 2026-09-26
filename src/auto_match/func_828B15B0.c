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
extern int fn_825089A0();
extern int fn_828B0528();
extern int fn_828B0ED0();
extern int fn_828B1468();
extern int fn_828D8EF8();
extern int fn_828D90D8();
extern int fn_828D9168();
extern int fn_828D9438();
extern int fn_828D94E0();
extern int fn_828D9620();
extern int fn_828D97D8();


undefined8 fn_828B15B0(int param_1)

{
  bool bVar1;
  int *piVar4;
  longlong lVar2;
  int iVar5;
  char cVar6;
  ulonglong uVar3;
  
  if (*(int *)(*(int *)(param_1 + 0x18) + 4) == 1) {
    piVar4 = (int *)fn_825089A0();
    lVar2 = (**(code **)(*piVar4 + 0xc))();
    lVar2 = lVar2 - *(longlong *)(param_1 + 8);
    iVar5 = fn_828B0ED0((ulonglong)*(uint *)(*(int *)(param_1 + 0x18) + 0x4c) + 0x38,0,0);
    if (((iVar5 != 0) &&
        (iVar5 = fn_828B0ED0((ulonglong)*(uint *)(*(int *)(param_1 + 0x18) + 0x4c) + 0x38,0,0),
        iVar5 != 7)) && (cVar6 = fn_828B0528(*(undefined4 *)(param_1 + 0x14)), cVar6 == '\0')) {
      fn_828B1468(param_1,7);
    }
    uVar3 = fn_828B0ED0((ulonglong)*(uint *)(*(int *)(param_1 + 0x18) + 0x4c) + 0x38,0,0);
    if ((uVar3 & 0xffffffff) < 7) {
      bVar1 = (int)uVar3 != 0;
      if (uVar3 == 1 && bVar1) {
        fn_828D8EF8(param_1,lVar2);
      }
      else if (uVar3 == 2 && bVar1) {
        fn_828D94E0(param_1,lVar2);
      }
      else if (uVar3 == 3 && bVar1) {
        fn_828D90D8(param_1,lVar2);
      }
      else if (uVar3 == 4 && bVar1) {
        fn_828D9620(param_1,lVar2);
      }
      else if (uVar3 == 5 && bVar1) {
        fn_828D9168(param_1,lVar2);
      }
      else if (bVar1) {
        fn_828D97D8(param_1,lVar2);
      }
      else {
        fn_828D9438(param_1,lVar2);
      }
    }
    iVar5 = fn_828B0ED0((ulonglong)*(uint *)(*(int *)(param_1 + 0x18) + 0x4c) + 0x38,0,0);
    if (iVar5 == 7) {
      (**(code **)(**(int **)(param_1 + 0x14) + 0x10))(*(int **)(param_1 + 0x14),0);
      return 1;
    }
  }
  return 0;
}

