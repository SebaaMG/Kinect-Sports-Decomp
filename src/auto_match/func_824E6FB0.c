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
extern unsigned int *auStack_ac;
extern unsigned int *auStack_e0;
extern int fn_82230300();
extern int fn_82359C18();
extern int fn_824E75B8();
extern int fn_82F691F0();
extern unsigned int uStack_b0;


void fn_824E6FB0(int param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined8 param_5)

{
  int iVar1;
  int *piVar2;
  undefined1 auStack_e0 [48];
  undefined4 uStack_b0;
  undefined1 auStack_ac [172];
  
  iVar1 = *(int *)(param_1 + 0x2f4);
  piVar2 = (int *)fn_824E75B8(auStack_e0,param_1 + 0x2f0,param_2);
  if (((*piVar2 != iVar1) && (-1 < param_4)) && (param_4 < 2)) {
    uStack_b0 = 0;
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(auStack_ac,0,100);
  }
  fn_82230300(param_2,1,0);
  fn_82359C18(param_5);
  return;
}

