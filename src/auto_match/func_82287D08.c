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
extern int fn_82287DA8();
extern int fn_82288228();


void fn_82287D08(int param_1,ulonglong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  
  iVar3 = 1;
  if ((param_2 & 0xffffffff) != 0) {
    lVar4 = 1;
    do {
      if (iVar3 < 4) {
        iVar2 = iVar3 * 0x420;
        iVar5 = iVar3;
        do {
          iVar1 = *(int *)(iVar2 + *(int *)(param_1 + 0x11f0) + 0x838);
          if ((iVar1 == 0) || (iVar1 == 1)) goto LAB_82287d6c;
          iVar2 = iVar2 + 0x420;
          iVar5 = iVar5 + 1;
        } while (iVar2 < 0x1080);
      }
      iVar5 = -1;
LAB_82287d6c:
      if (iVar5 == -1) {
        fn_82287DA8(param_1,lVar4);
      }
      else {
        fn_82288228(param_1,iVar5,lVar4);
        iVar3 = iVar5 + 1;
      }
      param_2 = param_2 - 1;
      lVar4 = lVar4 + 1;
    } while (param_2 != 0);
  }
  return;
}

