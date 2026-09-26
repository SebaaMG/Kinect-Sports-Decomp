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
extern int fn_82248B90();
extern int fn_8288B760();
extern int fn_8288F9A0();
extern int fn_828A12E8();
extern int fn_828EB5F8();
extern unsigned int uStack_20;


longlong fn_828A97F8(int *param_1,int *param_2)

{
  char cVar4;
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uStack_20;
  
  cVar4 = fn_8288B760();
  if (cVar4 == '\0') {
    if (param_2 != (int *)0x0) {
      uStack_20 = (**(code **)(*param_1 + 0x48))(param_1);
      uVar1 = (**(code **)(*param_2 + 0x44))(param_2);
      lVar2 = fn_828EB5F8(uVar1,&uStack_20);
      return (lVar2 + -2) - (lVar2 + -3 + (ulonglong)(lVar2 + -2 == 0));
    }
    uVar1 = fn_828A12E8(param_1[4]);
    iVar3 = fn_8288F9A0(uVar1,1);
    uStack_20 = ((((U64)(uStack_20)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)((int *)**(int **)(iVar3 + 4))) & ((U64)0xFFFFFFFF)) << 0));
    if ((((U64)(uStack_20) >> 0) & 0xFFFFFFFF) != *(int **)(iVar3 + 4)) {
      do {
        cVar4 = fn_828A97F8(param_1,*(undefined4 *)((int)(((U64)(uStack_20) >> 0) & 0xFFFFFFFF) + 0x14));
        if (cVar4 != '\0') {
          return 1;
        }
        fn_82248B90(&uStack_20);
      } while ((((U64)(uStack_20) >> 0) & 0xFFFFFFFF) != (int *)*(int *)(iVar3 + 4));
    }
    uVar1 = fn_828A12E8(param_1[4]);
    iVar3 = fn_8288F9A0(uVar1,2);
    uStack_20 = ((((U64)(uStack_20)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)((int *)**(int **)(iVar3 + 4))) & ((U64)0xFFFFFFFF)) << 0));
    if ((((U64)(uStack_20) >> 0) & 0xFFFFFFFF) != *(int **)(iVar3 + 4)) {
      do {
        cVar4 = fn_828A97F8(param_1,*(undefined4 *)((int)(((U64)(uStack_20) >> 0) & 0xFFFFFFFF) + 0x14));
        if (cVar4 != '\0') {
          return 1;
        }
        fn_82248B90(&uStack_20);
      } while ((((U64)(uStack_20) >> 0) & 0xFFFFFFFF) != (int *)*(int *)(iVar3 + 4));
    }
  }
  return 0;
}

