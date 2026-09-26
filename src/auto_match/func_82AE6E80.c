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
extern unsigned int *auStack_130;
extern unsigned int *auStack_13c;
extern int fn_82AA66A8();
extern int fn_82AE6CC0();
extern int fn_82AE6D50();
extern int fn_82F6DCE0();
extern unsigned int uStack_140;


void fn_82AE6E80(int param_1,undefined8 param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 uVar5;
  ulonglong uVar6;
  uint uStack_140;
  uint auStack_13c [3];
  undefined1 auStack_130 [304];
  
  fn_82AE6D50(param_1,param_2,auStack_13c,&uStack_140);
  puVar1 = (uint *)((int)param_2 * 0x28 + *(int *)(param_1 + 0xc));
  uVar5 = 0x3f;
  uVar2 = puVar1[1] >> 4 & 7;
  if (uVar2 == 0) {
    uVar5 = 0x62;
  }
  else if (uVar2 == 1) {
    uVar5 = 0x69;
  }
  else if (uVar2 < 3) {
    uVar5 = 99;
  }
  else if (uVar2 == 3) {
    uVar5 = 0x73;
  }
  iVar3 = fn_82AE6CC0(param_1,param_2);
  uVar6 = (ulonglong)auStack_13c[0];
  if (iVar3 == 0) {
    fn_82F6DCE0(auStack_130,0x100,0xffffffff820d31c8,uVar5,
                      ((ulonglong)(*puVar1 >> 0x14) & 0x1ff) - uVar6);
    puVar4 = auStack_130;
  }
  else {
    puVar4 = *(undefined1 **)(iVar3 + 0x18);
  }
  if (uVar6 < uStack_140) {
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(param_1,0xdeb,puVar4,uVar5,0,uVar5,(uStack_140 - uVar6) + -1);
  }
                    /* WARNING: Subroutine does not return */
  fn_82AA66A8(param_1,0x119d,puVar4);
}

