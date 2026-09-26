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
extern int fn_82CEAFA8();
extern int fn_82CFD5A8();


void fn_83082A80(int param_1,undefined8 param_2)

{
  ushort uVar1;
  ulonglong uVar2;
  int iVar4;
  int iVar5;
  undefined8 uVar3;
  longlong lVar6;
  
  uVar2 = fn_82CEA280(param_2,param_1,0);
  while( true ) {
    if ((uVar2 & 1) != 0) {
      return;
    }
    iVar4 = fn_82CE5410();
    fn_82CEA160(param_2,*(undefined4 *)(iVar4 + 0x10),param_1,uVar2 | 1);
    iVar4 = fn_82CEAFA8(0xffffffff832654f0,0xffffffff82187014);
    uVar1 = *(ushort *)(iVar4 + 0x12);
    iVar5 = fn_82CEAC30(param_1);
    iVar4 = param_1;
    while (iVar5 != 0) {
      *(undefined4 *)(iVar4 + (uint)uVar1) = 0;
      iVar4 = fn_82CEAC30(iVar4);
      iVar5 = fn_82CEAC30();
    }
    if (*(char *)(iVar4 + (uint)uVar1) != '\0') {
      iVar5 = fn_82CEAFA8(0xffffffff832654f0,0xffffffff8213079c);
      *(int *)((uint)*(ushort *)(iVar5 + 0x12) + iVar4) =
           *(int *)((uint)*(ushort *)(iVar5 + 0x12) + iVar4) + 1;
    }
    *(undefined4 *)(iVar4 + (uint)uVar1) = 0;
    lVar6 = 0;
    iVar4 = fn_82CEAF18(param_1);
    if (0 < iVar4) {
      do {
        iVar4 = fn_82CEAF20(param_1,lVar6);
        if (*(int *)(iVar4 + 4) != 0) {
          uVar3 = fn_82CFD5A8();
          fn_83082A80(uVar3,param_2);
        }
        lVar6 = lVar6 + 1;
        iVar4 = fn_82CEAF18(param_1);
      } while ((int)lVar6 < iVar4);
    }
    iVar4 = fn_82CEAC30(param_1);
    if (iVar4 == 0) break;
    param_1 = fn_82CEAC30(param_1);
    uVar2 = fn_82CEA280(param_2,param_1,0);
  }
  return;
}

