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
extern unsigned int *auStack_50;
extern int fn_82292780();
extern int fn_82864898();
extern unsigned int lbl_821AAD20;


undefined8 fn_82877850(int *param_1,uint *param_2)

{
  int iVar1;
  ulonglong uVar2;
  double dVar3;
  undefined1 auStack_50 [80];
  
  uVar2 = (ulonglong)*param_2;
  if (uVar2 != param_2[1]) {
    dVar3 = (double)lbl_821AAD20;
    do {
      fn_82292780(auStack_50,uVar2);
      iVar1 = (**(code **)(*param_1 + 4))(dVar3,param_1,auStack_50,1);
      if (iVar1 < 0) {
        fn_82864898(auStack_50);
        return 0xffffffffa0320000;
      }
      fn_82864898(auStack_50);
      uVar2 = uVar2 + 0x24;
    } while ((uVar2 & 0xffffffff) != (ulonglong)param_2[1]);
  }
  return 0x20320000;
}

