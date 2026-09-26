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
extern unsigned int *auStack_80;
extern int fn_825089A0();
extern int fn_8251C390();
extern int fn_828EAFD8();
extern int fn_828EB1E8();
extern int fn_828EB278();
extern int fn_828EB7C8();
extern int fn_829E53B0();
extern unsigned int iStack_8c;
extern unsigned int uStack_50;
extern unsigned int uStack_58;
extern unsigned int uStack_60;
extern unsigned int uStack_68;
extern unsigned int uStack_90;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

int fn_828EBF50(undefined8 param_1,undefined8 param_2)

{
  int *piVar3;
  int iVar4;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uStack_90;
  int iStack_8c;
  undefined1 auStack_80 [24];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  fn_8251C390(auStack_80,0xffffffff82027528,0x4d4);
  piVar3 = (int *)fn_825089A0();
  iVar4 = (**(code **)(*piVar3 + 0x3c))(piVar3,1,0,param_2,0,0,uStack_68,uStack_60);
  uVar1 = fn_828EB278();
  uStack_90 = *(undefined4 *)(iVar4 + 0x54);
  iStack_8c = iVar4;
  uVar2 = fn_828EB1E8(uVar1,&uStack_90);
  fn_828EAFD8(&uStack_90,uVar1,uVar2,0);
  uVar1 = fn_828EB7C8();
  uStack_90 = *(undefined4 *)(iVar4 + 0x54);
  iStack_8c = iVar4;
  uVar2 = fn_828EB1E8(uVar1,&uStack_90);
  fn_828EAFD8(&uStack_90,uVar1,uVar2,0);
  fn_829E53B0(auStack_80);
  return iVar4;
}

