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
extern int fn_82CEAC20();
extern int fn_82CFBBF0();
extern int fn_83082610();


undefined4 fn_82E14300(uint *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar3;
  uint uVar4;
  ulonglong uVar2;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  
  uVar5 = 0;
  iVar3 = 0;
  do {
    if ((param_3 == 0) || ((int)param_1[1] <= (int)uVar5)) break;
    uVar5 = uVar5 + 1;
    iVar1 = iVar3 + *param_1;
    iVar3 = iVar3 + 0xc;
  } while (*(int *)(iVar1 + 8) != param_3);
  if ((int)uVar5 < (int)param_1[1]) {
    lVar6 = (uVar5 + (uVar5 & 0x7fffffff) * 2 & 0x3fffffff) << 2;
    do {
      uVar4 = *param_1;
      lVar7 = lVar6 + (ulonglong)uVar4 + 8;
      iVar3 = fn_83082610(lVar7);
      if (iVar3 == 0) {
        uVar4 = *(uint *)((int)(lVar6 + (ulonglong)uVar4) + 4) & 0xfffffffe;
      }
      else {
        fn_83082610(lVar7);
        uVar4 = fn_82CEAC20();
      }
      if (uVar4 != 0) {
        uVar4 = *param_1;
        lVar7 = lVar6 + (ulonglong)uVar4 + 8;
        iVar3 = fn_83082610(lVar7);
        if (iVar3 == 0) {
          uVar2 = (ulonglong)*(uint *)((int)(lVar6 + (ulonglong)uVar4) + 4) & 0xfffffffe;
        }
        else {
          fn_83082610(lVar7);
          uVar2 = fn_82CEAC20();
        }
        iVar3 = fn_82CFBBF0(param_2,uVar2);
        if (iVar3 == 0) {
          return *(undefined4 *)
                  ((int)((uVar5 + (uVar5 & 0x7fffffff) * 2 & 0xffffffff) << 2) + *param_1 + 8);
        }
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0xc;
    } while ((int)uVar5 < (int)param_1[1]);
  }
  return 0;
}

