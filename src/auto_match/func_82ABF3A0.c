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
extern unsigned int *auStack_3c;
extern int fn_82A9F7E0();
extern int fn_82ABDD90();
extern int fn_82ABDE58();
extern int fn_82ABDEC0();
extern int fn_82D7E470();
extern unsigned int uStack_40;


void fn_82ABF3A0(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4,
                  uint param_5)

{
  uint uVar1;
  longlong lVar2;
  char cVar4;
  int iVar3;
  bool bVar5;
  undefined8 uVar6;
  undefined4 uStack_40;
  undefined4 auStack_3c [15];
  
  if ((param_4 & 0xffffffff) != 0) {
    lVar2 = fn_82D7E470(param_1,param_5,1);
    if (lVar2 != 0) {
      cVar4 = fn_82ABDE58(param_1,lVar2,auStack_3c,&uStack_40);
      if (cVar4 != '\0') {
        if ((*(uint *)(*(int *)(param_5 + 0x1c) + 0x4c) & 0x7ffff) == 0) {
          uVar6 = 0xffffffffffffffff;
        }
        else {
          uVar6 = fn_82ABDEC0(param_1);
        }
        bVar5 = false;
        uVar1 = *(uint *)((param_5 & 0xfffffffe) + 0x24);
        if ((((uVar1 & 1) == 0) && (uVar1 = uVar1 & 0xfffffffe, uVar1 != 0x28)) &&
           ((*(uint *)(uVar1 - 0x20) & 0x3f80) == 0x3a80)) {
          iVar3 = fn_82ABDD90(param_1,0x75,0,0);
          bVar5 = (*(uint *)(iVar3 + (uVar1 - 0x38)) & 7) == 3;
        }
        fn_82A9F7E0(param_4,param_2,param_3,auStack_3c[0],uStack_40,uVar6,bVar5);
      }
    }
  }
  return;
}

