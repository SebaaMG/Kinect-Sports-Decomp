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
extern int fn_82CEAE80();
extern int fn_82CEAEA8();
extern int fn_82CEB2D8();
extern int fn_82CFD5B0();
extern int fn_82E17EE8();


ulonglong fn_82E18118(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  int iVar6;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar7;
  
  uVar1 = fn_82CEB2D8(param_1,param_3,param_4);
  if (((*(char *)(param_2 + 0xc) == '\x19') &&
      (uVar2 = fn_82CFD5B0(param_2), (uVar2 & 0xffffffff) != 0)) &&
     (lVar3 = fn_82E17EE8(param_2), 0 < (int)lVar3)) {
    do {
      lVar7 = 0;
      iVar6 = fn_82CEAE80(uVar2);
      if (0 < iVar6) {
        do {
          uVar4 = fn_82CEAEA8(uVar2,lVar7);
          lVar5 = fn_82E18118(uVar2,uVar4,lVar7,param_4);
          lVar7 = lVar7 + 1;
          uVar1 = -(ulonglong)(lVar5 != 0) & uVar1;
          iVar6 = fn_82CEAE80(uVar2);
        } while ((int)lVar7 < iVar6);
      }
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return uVar1;
}

