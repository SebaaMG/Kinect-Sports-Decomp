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
extern unsigned int *auStack_30;
extern int fn_82BA02A8();
extern int fn_82CE5410();
extern int fn_82CEA4B8();
extern int fn_82CEAB00();
extern int fn_82E19DA0();
extern int fn_82E1A470();
extern int fn_83082D10();
extern unsigned int uStack_20;
extern unsigned int uStack_24;
extern unsigned int uStack_28;


void fn_82E0F0E0(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_30 [8];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  fn_83082D10();
  fn_82E19DA0(auStack_30);
  iVar2 = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0xffffffff;
  iVar1 = fn_82CE5410();
  fn_82CEAB00(&uStack_28,*(undefined4 *)(iVar1 + 0x10),0);
  iVar1 = *param_1;
  while (iVar1 != 0) {
    fn_82E1A470(auStack_30,iVar1,&uStack_28,1);
    iVar2 = iVar2 + 1;
    iVar1 = param_1[iVar2];
  }
  iVar1 = fn_82CE5410();
  fn_82CEA4B8(&uStack_28,*(undefined4 *)(iVar1 + 0x10));
  fn_82BA02A8(&uStack_28);
  return;
}

