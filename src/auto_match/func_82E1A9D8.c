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
extern int fn_82CE52E0();
extern int fn_82CE5410();
extern int fn_82CEAF18();
extern int fn_82CEAF20();
extern int fn_82CFC050();
extern int fn_82CFD5F0();


undefined8 fn_82E1A9D8(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  if ((param_3 & 0xffffffff) == 0) {
    uVar1 = 0;
  }
  else {
    lVar4 = 0;
    lVar2 = fn_82CEAF18(param_2);
    uVar5 = lVar2 - 1;
    if (-1 < (longlong)uVar5) {
      lVar2 = (uVar5 & 0x3fffffff) * 4 + param_3;
      do {
        if (*(int *)lVar2 != -1) {
          fn_82CEAF20(param_2,uVar5);
          lVar4 = fn_82CFD5F0();
          lVar4 = lVar4 + (ulonglong)*(uint *)((int)((uVar5 & 0xffffffff) << 2) + (int)param_3);
          break;
        }
        uVar5 = uVar5 - 1;
        lVar2 = lVar2 + -4;
      } while (-1 < (longlong)uVar5);
    }
    iVar3 = fn_82CE5410();
    uVar1 = fn_82CE52E0(*(undefined4 *)(iVar3 + 0x10),lVar4);
    fn_82CFC050(uVar1,param_3,lVar4);
  }
  return uVar1;
}

