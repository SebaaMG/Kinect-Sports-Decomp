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
extern int fn_828865A0();
extern int fn_8289AB78();
extern int fn_828ACCE8();
extern int fn_828D45F8();
extern int fn_828D47D0();
extern int fn_828E0390();
extern int fn_828E09C8();
extern int fn_828E0DE0();
extern unsigned int lbl_82027070;


void fn_828E1D08(int param_1)

{
  char cVar4;
  int *piVar2;
  undefined8 uVar1;
  int iVar3;
  undefined4 uVar5;
  double dVar6;
  double dVar7;
  
  cVar4 = fn_828ACCE8(*(undefined4 *)(param_1 + 0x18));
  if (cVar4 == '\0') {
    cVar4 = fn_828865A0(param_1);
    if (cVar4 != '\0') {
      fn_828D45F8(param_1);
      fn_828E09C8();
    }
    if (*(int *)(param_1 + 0xc) == 0) {
      return;
    }
    piVar2 = (int *)fn_825089A0();
    dVar6 = (double)(**(code **)(*piVar2 + 8))();
    uVar5 = 0;
  }
  else {
    cVar4 = fn_828865A0(param_1);
    if (cVar4 != '\0') {
      uVar1 = fn_828D45F8(param_1);
      iVar3 = fn_828D47D0(uVar1,3,0);
      if (iVar3 != 0) {
        uVar1 = fn_828D45F8(param_1);
        iVar3 = fn_828D47D0(uVar1,4,0);
        if (iVar3 != 0) {
          fn_828D45F8(param_1);
          cVar4 = fn_8289AB78();
          if (cVar4 != '\0') {
            fn_828E0390(param_1,2);
            return;
          }
          dVar7 = (double)(*(float *)(param_1 + 0x10) + lbl_82027070);
          piVar2 = (int *)fn_825089A0();
          dVar6 = (double)(**(code **)(*piVar2 + 8))();
          if (dVar6 <= dVar7) {
            return;
          }
        }
        fn_828D45F8(param_1);
        fn_828E09C8();
        fn_828E0DE0(param_1,7);
        return;
      }
    }
    cVar4 = fn_828865A0(param_1);
    if (cVar4 != '\0') {
      fn_828D45F8(param_1);
      fn_828E09C8();
    }
    if (*(int *)(param_1 + 0xc) == 7) {
      return;
    }
    piVar2 = (int *)fn_825089A0();
    dVar6 = (double)(**(code **)(*piVar2 + 8))();
    uVar5 = 7;
  }
  *(float *)(param_1 + 0x10) = (float)dVar6;
  *(undefined4 *)(param_1 + 0xc) = uVar5;
  return;
}

