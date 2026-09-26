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
extern unsigned int *auStack_40;
extern int fn_823AA970();
extern int fn_8265C9E0();
extern int fn_82886518();
extern int fn_8288B760();
extern int fn_8288F1E8();
extern int fn_8289F2E0();
extern int fn_828B5580();
extern int fn_828B55B0();
extern int fn_828BE250();
extern int fn_828DD6D8();


undefined8 fn_828BE2D0(undefined8 param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  char cVar5;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auStack_40 [64];
  
  uVar2 = fn_8289F2E0(param_1,param_2[6]);
  cVar5 = (**(code **)(*param_2 + 0x70))(param_2);
  if (cVar5 == '\0') {
    iVar1 = *param_2;
    uVar2 = fn_823AA970(uVar2);
    uVar2 = (**(code **)(iVar1 + 100))(param_2,uVar2);
  }
  else {
    fn_828B5580(auStack_40,param_2 + 0x18);
    uVar3 = fn_8288F1E8(param_1,auStack_40);
    fn_828B55B0(auStack_40);
    if ((uVar3 & 0xffffffff) == 0) {
      uVar2 = 1;
    }
    else {
      cVar5 = fn_8288B760(uVar3);
      if (cVar5 == '\0') {
        uVar4 = fn_8265C9E0(0x98);
        if ((uVar4 & 0xffffffff) == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = fn_823AA970(uVar2);
          uVar2 = fn_828DD6D8(uVar4,param_2,uVar3,uVar2,0);
        }
        fn_82886518(uVar2,0xffffffffffffffff,0xffffffffffffffff);
        fn_828BE250(param_1,uVar2,uVar3);
        uVar2 = 0;
      }
      else {
        iVar1 = *param_2;
        uVar2 = fn_823AA970(uVar2);
        uVar2 = (**(code **)(iVar1 + 0x68))(param_2,uVar2,uVar3);
      }
    }
  }
  return uVar2;
}

