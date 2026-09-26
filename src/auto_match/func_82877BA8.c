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
extern unsigned int *auStack_7c;
extern unsigned int *auStack_a0;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_8223B688();
extern int fn_82868378();
extern int fn_8286DA10();
extern int fn_82878C60();
extern int fn_82F691F0();
extern int fn_82FE6BC0();
extern unsigned int uStack_80;


undefined8 fn_82877BA8(int param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_a0 [32];
  undefined4 uStack_80;
  undefined1 auStack_7c [124];
  
  if (*(char *)(param_1 + 0xc) != '\0') {
    if (*(char *)(param_1 + 4) != '\0') {
      uStack_80 = 0;
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(auStack_7c,0,0x1c);
    }
    uVar1 = fn_82878C60(param_2);
    uVar1 = fn_82FE6BC0(uVar1,0,0);
    *(undefined1 *)(param_1 + 0xc) = 0;
    if ((int)uVar1 != 1) {
      fn_82230110(auStack_a0,0xffffffff82022764);
      uVar2 = fn_8223B688(&uStack_80,auStack_a0);
      uVar3 = fn_82868378();
      fn_8286DA10(uVar3,uVar2,uVar1);
      fn_82230300(auStack_a0,1,0);
      return 0xffffffffa0340000;
    }
  }
  return 0x20340000;
}

