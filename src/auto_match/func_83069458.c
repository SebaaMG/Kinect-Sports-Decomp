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
extern int fn_82F691F0();
extern int fn_830604F0();
extern int fn_83061508();
extern int fn_83061F30();
extern int fn_830635A0();
extern int fn_83065B90();


undefined8
fn_83069458(undefined8 param_1,int *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  int iVar2;
  undefined8 uVar1;
  undefined1 auStack_70 [112];
  
  fn_83061508(auStack_70);
  fn_830635A0(param_1,param_3,auStack_70,param_5,param_6);
  iVar2 = fn_830604F0(auStack_70);
  if (0 < iVar2) {
    uVar1 = fn_83065B90(*param_2 << 2);
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(uVar1,0,*param_2 << 2);
  }
  fn_83061F30(auStack_70);
  return 0xffffffffffffffff;
}

