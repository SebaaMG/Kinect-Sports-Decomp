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
extern int fn_82CE5410();
extern int fn_82CEA160();
extern int fn_82CEA280();
extern int fn_82CEAC30();
extern int fn_82CEAF18();
extern int fn_82CEAF20();
extern int fn_82CFD5B0();


void fn_83082980(undefined8 param_1,undefined8 param_2,ulonglong param_3,code *param_4)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar4;
  undefined8 uVar3;
  longlong lVar5;
  
  uVar2 = fn_82CEA280(param_2,param_1,0);
  uVar1 = (uint)uVar2;
  while( true ) {
    if ((uVar1 & (uint)param_3) != 0) {
      return;
    }
    iVar4 = fn_82CE5410();
    fn_82CEA160(param_2,*(undefined4 *)(iVar4 + 0x10),param_1,uVar2 | param_3);
    lVar5 = 0;
    iVar4 = fn_82CEAF18(param_1);
    if (0 < iVar4) {
      do {
        uVar3 = fn_82CEAF20(param_1,lVar5);
        uVar2 = fn_82CFD5B0();
        if ((uVar2 & 0xffffffff) != 0) {
          fn_83082980(uVar2,param_2,param_3,param_4);
        }
        (*param_4)(uVar3);
        lVar5 = lVar5 + 1;
        iVar4 = fn_82CEAF18(param_1);
      } while ((int)lVar5 < iVar4);
    }
    iVar4 = fn_82CEAC30(param_1);
    if (iVar4 == 0) break;
    param_1 = fn_82CEAC30(param_1);
    uVar2 = fn_82CEA280(param_2,param_1,0);
    uVar1 = (uint)uVar2;
  }
  return;
}

