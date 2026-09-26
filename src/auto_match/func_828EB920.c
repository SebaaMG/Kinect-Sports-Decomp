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
extern unsigned int *auStack_70;
extern int fn_825089A0();
extern int fn_8251C390();
extern int fn_828EAFD8();
extern int fn_828EB1E8();
extern int fn_828EB278();
extern int fn_828EB7C8();
extern int fn_829E53B0();
extern unsigned int iStack_7c;
extern unsigned int uStack00000050;
extern unsigned int uStack_80;


int fn_828EB920(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar3;
  int iVar4;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack00000050;
  undefined4 uStack_80;
  int iStack_7c;
  undefined1 auStack_70 [112];
  
  uStack00000050 = param_8;
  fn_8251C390(auStack_70,0xffffffff82027528,0x246);
  piVar3 = (int *)fn_825089A0();
  iVar4 = (**(code **)(*piVar3 + 0x3c))(piVar3,1,0,param_1,param_3,param_4,param_5,param_6);
  uVar1 = fn_828EB278();
  uStack_80 = *(undefined4 *)(iVar4 + 0x54);
  iStack_7c = iVar4;
  uVar2 = fn_828EB1E8(uVar1,&uStack_80);
  fn_828EAFD8(&uStack_80,uVar1,uVar2,0);
  uVar1 = fn_828EB7C8();
  uStack_80 = *(undefined4 *)(iVar4 + 0x54);
  iStack_7c = iVar4;
  uVar2 = fn_828EB1E8(uVar1,&uStack_80);
  fn_828EAFD8(&uStack_80,uVar1,uVar2,0);
  fn_829E53B0(auStack_70);
  return iVar4;
}

