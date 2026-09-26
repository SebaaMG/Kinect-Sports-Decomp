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
extern int fn_8267BE38();
extern int fn_827A9760();
extern int fn_827ABA70();


void fn_827ABAF0(int *param_1,uint param_2,ulonglong param_3)

{
  int iVar1;
  bool bVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = 0;
  if ((param_3 & 0xffffffff) != 0) {
    iVar4 = param_2 << 2;
    uVar5 = param_2;
    do {
      if (((param_1 == (int *)0x0) || ((uint)param_1[1] <= uVar5)) ||
         (bVar2 = false, (int)uVar5 < 0)) {
        bVar2 = true;
      }
      if (bVar2) break;
      iVar1 = *(int *)(iVar4 + *param_1);
      if (iVar1 != 0) {
        fn_827A9760(iVar1);
        fn_8267BE38(iVar1);
      }
      if (uVar5 < (uint)param_1[1]) {
        uVar5 = uVar5 + 1;
        iVar4 = iVar4 + 4;
      }
      uVar3 = uVar3 + 1;
    } while ((uVar3 & 0xffffffff) < (param_3 & 0xffffffff));
  }
  fn_827ABA70(param_1,param_2,param_3);
  return;
}

