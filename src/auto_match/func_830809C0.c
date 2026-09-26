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
extern unsigned int *auStack_430;
extern int fn_82CEDF40();
extern int fn_82CFBBA8();
extern int fn_82CFBBF0();
extern int fn_82CFBE40();
extern unsigned int stack0x00000028;
extern unsigned int uStack00000028;
extern unsigned int uStack00000030;
extern unsigned int uStack00000038;
extern unsigned int uStack00000040;
extern unsigned int uStack00000048;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_830809C0(int param_1,undefined8 param_2,char *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar2;
  undefined8 uVar1;
  int iVar3;
  longlong lVar4;
  undefined8 uStack00000028;
  undefined8 uStack00000030;
  undefined8 uStack00000038;
  undefined8 uStack00000040;
  undefined8 uStack00000048;
  undefined1 auStack_430 [1072];
  
  iVar3 = 0;
  uStack00000028 = param_4;
  uStack00000030 = param_5;
  uStack00000038 = param_6;
  uStack00000040 = param_7;
  uStack00000048 = param_8;
  if (0 < *(int *)(param_1 + 0x14)) {
    lVar4 = 0;
    do {
      iVar2 = fn_82CFBBF0((ulonglong)*(uint *)(param_1 + 0x10) + lVar4,param_2);
      if (iVar2 == 0) {
        return;
      }
      iVar3 = iVar3 + 1;
      lVar4 = lVar4 + 0x20;
    } while (iVar3 < *(int *)(param_1 + 0x14));
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (*(int *)(param_1 + 8) != 0) {
    if (*param_3 == '#') {
      fn_82CFBBA8(auStack_430,0xffffffff82186f1c);
      uVar1 = fn_82CFBE40(auStack_430);
      fn_82CEDF40(*(undefined4 *)(param_1 + 8),auStack_430,uVar1);
      param_3 = param_3 + 1;
    }
    thunk_FUN_82f6ede8(auStack_430,0x400,param_3,&stack0x00000028);
    uVar1 = fn_82CFBE40(auStack_430);
    fn_82CEDF40(*(undefined4 *)(param_1 + 8),auStack_430,uVar1);
  }
  return;
}

