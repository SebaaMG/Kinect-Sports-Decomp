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
extern int fn_82BA02A8();
extern int fn_82CE5410();
extern int fn_82CEA4B8();
extern int fn_82CEAB00();
extern int fn_83082980();
extern int fn_83082A80();
extern int fn_83082BF0();
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


void fn_83082D10(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  
  iVar3 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0xffffffff;
  iVar1 = fn_82CE5410();
  fn_82CEAB00(&uStack_40,*(undefined4 *)(iVar1 + 0x10),0);
  iVar1 = *param_1;
  piVar2 = param_1;
  do {
    if (iVar1 == 0) {
      iVar1 = fn_82CE5410();
      fn_82CEA4B8(&uStack_40,*(undefined4 *)(iVar1 + 0x10));
      fn_82BA02A8(&uStack_40);
      return;
    }
    iVar1 = *piVar2;
    if (param_2 == 1) {
      fn_83082A80(iVar1,&uStack_40);
      fn_83082BF0(iVar1,&uStack_40);
LAB_83082d90:
      fn_83082980(iVar1,&uStack_40,2,0xffffffff83082890);
    }
    else if (param_2 < 4) goto LAB_83082d90;
    if (param_2 < 5) {
      fn_83082980(iVar1,&uStack_40,8,0xffffffff830828c0);
    }
    iVar3 = iVar3 + 1;
    piVar2 = param_1 + iVar3;
    iVar1 = *piVar2;
  } while( true );
}

