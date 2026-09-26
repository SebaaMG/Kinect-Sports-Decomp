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
extern unsigned int *auStack_34;
extern unsigned int *auStack_40;
extern int fn_82CE2220();
extern int fn_82F691F0();
extern int fn_82F90628();
extern int fn_82F90680();
extern int fn_82F90B28();
extern int fn_82F93910();
extern int fn_82F93988();
extern unsigned int iStack00000014;
extern unsigned int uStack_18;


uint fn_82F8E4F8(int param_1)

{
  char cVar2;
  undefined4 uVar1;
  int iStack00000014;
  undefined1 auStack_40 [12];
  undefined4 auStack_34 [7];
  uint uStack_18;
  
  iStack00000014 = param_1;
  fn_82F90628(auStack_40,param_1 + 0xc);
  if (*(int *)(iStack00000014 + 0x98) != 0) {
    fn_82F93988(*(undefined4 *)(iStack00000014 + 0x98));
    *(undefined4 *)(iStack00000014 + 0x98) = 0;
  }
  *(undefined4 *)(iStack00000014 + 0x74) = 0;
  cVar2 = fn_82F90B28(iStack00000014);
  if (cVar2 == '\0') {
    fn_82F90680(auStack_40);
    uStack_18 = 0x8054002c;
  }
  else {
    uStack_18 = fn_82CE2220(0,10,auStack_34,iStack00000014 + 0x94);
    if (uStack_18 == 0) {
      uVar1 = fn_82F93910(auStack_34[0]);
      *(undefined4 *)(iStack00000014 + 0x98) = uVar1;
      if (*(int *)(iStack00000014 + 0x98) != 0) {
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(iStack00000014 + 0x78,0,0x1c);
      }
      fn_82F90680(auStack_40);
      uStack_18 = 0x8007000e;
    }
    else {
      (**(code **)(*(int *)(iStack00000014 + 8) + 0x1c))
                (iStack00000014 + 8,uStack_18,0xffffffff8216b828);
      if (0 < (int)uStack_18) {
        uStack_18 = uStack_18 & 0xffff | 0x80070000;
      }
      fn_82F90680(auStack_40);
    }
  }
  return uStack_18;
}

