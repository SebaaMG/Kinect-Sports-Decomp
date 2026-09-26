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
extern unsigned int fStack_38;
extern unsigned int fStack_3c;
extern unsigned int fStack_40;
extern int fn_82B9DA38();
extern int fn_82B9DAD8();
extern int fn_82B9DB78();
extern int fn_82B9DC18();
extern int fn_82BAFE48();
extern int fn_82BC2958();
extern int fn_82BC34D8();
extern int fn_82BC4478();
extern int fn_82BC49F8();
extern int fn_82BC5628();


void fn_82BA11F0(int param_1)

{
  undefined4 uVar1;
  int *piVar3;
  undefined8 uVar2;
  longlong lVar4;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float afStack_34 [13];
  
  fn_82B9DA38(*(undefined4 *)(param_1 + 0x10),0,afStack_34,0xffffffff82b7c800,
                *(undefined4 *)(param_1 + 0xc));
  fn_82B9DAD8(*(undefined4 *)(param_1 + 0x10),0,&fStack_38,0xffffffff82b7c800,
                *(undefined4 *)(param_1 + 0xc));
  fn_82B9DB78(*(undefined4 *)(param_1 + 0x10),0,&fStack_3c,0xffffffff82b7c800,
                *(undefined4 *)(param_1 + 0xc));
  fn_82B9DC18(*(undefined4 *)(param_1 + 0x10),0,&fStack_40,0xffffffff82b7c800,
                *(undefined4 *)(param_1 + 0xc));
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x6c) + 0x20);
  piVar3 = (int *)fn_82BC49F8(0x12,*(undefined4 *)(param_1 + 0xc));
  fn_82BC2958(piVar3,0,uVar1);
  fn_82BC2958(piVar3,1,uVar1);
  fn_82BC34D8((double)afStack_34[0],(double)fStack_38,(double)fStack_3c,(double)fStack_40,
                    piVar3,param_1,2);
  (**(code **)(*piVar3 + 0x54))(piVar3,0,3,1);
  *(undefined1 *)((int)piVar3 + 0x9a) = 1;
  fn_82BC5628(*(undefined4 *)(*(int *)(param_1 + 0x6c) + 0x3b4),*(int *)(param_1 + 0x6c),
                    piVar3);
  uVar2 = fn_82BAFE48(*(undefined4 *)(param_1 + 0xac),0x17,0);
  piVar3 = (int *)fn_82BC4478(0x14,*(undefined4 *)(param_1 + 0xc));
  fn_82BC2958(piVar3,0,uVar1);
  fn_82BC2958(piVar3,1,uVar2);
  lVar4 = 0;
  do {
    (**(code **)(*piVar3 + 0x58))(piVar3,1,lVar4,0);
    lVar4 = lVar4 + 1;
  } while ((int)lVar4 < 4);
  fn_82BC2958(piVar3,2,uVar1);
  fn_82BC34D8((double)afStack_34[0],(double)fStack_38,(double)fStack_3c,(double)fStack_40,
                    piVar3,param_1,3);
  (**(code **)(*piVar3 + 0x54))(piVar3,0,3,1);
  fn_82BC5628(*(undefined4 *)(*(int *)(param_1 + 0x6c) + 0x3b4),*(int *)(param_1 + 0x6c),
                    piVar3);
  return;
}

