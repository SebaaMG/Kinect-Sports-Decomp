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
extern int fn_82AB15D0();
extern int fn_82AB60F0();
extern int fn_82AB63F8();
extern int fn_82AB66F8();
extern int fn_82AB67A8();
extern int fn_82AB7198();
extern int fn_82AB7358();
extern int fn_82B7F5B8();
extern int fn_82F68CC0();


undefined8 fn_82B7F730(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int iVar3;
  uint *puVar4;
  undefined8 uVar2;
  int *piVar5;
  longlong lVar6;
  
  uVar1 = fn_82AB7358(param_2);
  iVar3 = fn_82AB60F0();
  if (iVar3 == 0) {
    uVar2 = 0;
  }
  else {
    puVar4 = (uint *)fn_82AB7198(param_2);
    lVar6 = ((ulonglong)*puVar4 + 2 & 0x3fffffff) << 2;
    uVar2 = (*(code *)param_1[1])(*param_1,lVar6);
    fn_82F68CC0(uVar2,puVar4,lVar6);
    for (lVar6 = fn_82AB63F8(uVar1); lVar6 != 0; lVar6 = fn_82AB66F8(uVar1,lVar6)) {
      piVar5 = (int *)fn_82AB67A8(lVar6);
      if (*piVar5 == 0) {
        fn_82B7F5B8(piVar5,uVar2,param_3,param_1[3]);
      }
      else {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820dbcd0,0xffffffff820dbba0,0x34a);
      }
    }
  }
  return uVar2;
}

