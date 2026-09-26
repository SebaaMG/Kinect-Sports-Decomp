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
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern unsigned int fStack_9c;
extern int fn_82F4F010();
extern int fn_82F4F448();
extern int fn_82F53528();
extern int fn_82F53548();
extern int fn_82F538A0();
extern int fn_82F538C8();
extern int fn_82F53940();
extern int fn_82F593C8();
extern int fn_82F59BD8();
extern int fn_82F59E08();
extern int fn_82F59F48();
extern int fn_82F5A0A0();
extern int fn_82F5A148();
extern int fn_82F5A258();
extern int fn_8306ED30();
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_8201DFF0;
extern unsigned int lbl_82023040;
extern unsigned int lbl_82165AA0;
extern unsigned int lbl_831BAAD6;
extern unsigned int lbl_831BAAD8;
extern unsigned int lbl_83262440;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82F4F578(ulonglong param_1)

{
  undefined4 *puVar1;
  int in_r0;
  int iVar2;
  double dVar3;
  double dVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auStack_a0 [4];
  float fStack_9c;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [128];
  
  if ((param_1 & 0xffffffff) != 0) {
    fn_82F538A0(auStack_a0,param_1,3);
    fn_82F538A0(auStack_90,param_1,0xd);
    fn_8306ED30();
    fn_82F538A0(auStack_90,param_1,3);
    fn_82F538A0(auStack_a0,param_1,8);
    fn_8306ED30();
    fn_82F53528();
    fn_82F53548();
    fn_82F53528();
    fn_82F53528();
    fn_82F4F448(param_1,6,5,lbl_831BAAD8);
    fn_82F53940(param_1,5);
    fn_82F4F448(param_1,5,4,lbl_831BAAD8);
    fn_82F53940(param_1,4);
    fn_82F4F448(param_1,9,8,lbl_831BAAD8);
    fn_82F53940(param_1,8);
    fn_82F4F448(param_1,10,9,0);
    fn_82F53940(param_1,9);
    fn_82F538A0(auStack_90,param_1,9);
    iVar2 = fn_82F538A0(auStack_a0,param_1,10);
    puVar1 = (undefined4 *)(in_r0 + iVar2 & 0xfffffff0);
    uVar5 = *puVar1;
    uVar6 = puVar1[1];
    uVar7 = puVar1[2];
    uVar8 = puVar1[3];
    fn_8306ED30();
    fn_82F53548();
    puVar1 = (undefined4 *)((uint)(auStack_a0 + in_r0) & 0xfffffff0);
    *puVar1 = uVar5;
    puVar1[1] = uVar6;
    puVar1[2] = uVar7;
    puVar1[3] = uVar8;
    fn_82F59F48();
    dVar3 = (double)fn_82F593C8((double)lbl_83262440,(double)fStack_9c);
    dVar4 = (double)lbl_8201DFF0;
    fn_82F5A0A0((double)(float)((double)(float)(dVar3 * (double)lbl_82165AA0) * dVar4));
    fn_82F59BD8();
    fn_82F59E08();
    fn_82F53940(param_1,10);
    fn_82F4F448(param_1,0xe,0xd,lbl_831BAAD8);
    fn_82F53940(param_1,0xd);
    fn_82F4F448(param_1,0xf,0xe,0);
    fn_82F53940(param_1,0xe);
    fn_82F538A0(auStack_90,param_1,0xe);
    iVar2 = fn_82F538A0(auStack_80,param_1,0xf);
    puVar1 = (undefined4 *)(in_r0 + iVar2 & 0xfffffff0);
    uVar5 = *puVar1;
    uVar6 = puVar1[1];
    uVar7 = puVar1[2];
    uVar8 = puVar1[3];
    fn_8306ED30();
    fn_82F53548();
    puVar1 = (undefined4 *)((uint)(auStack_a0 + in_r0) & 0xfffffff0);
    *puVar1 = uVar5;
    puVar1[1] = uVar6;
    puVar1[2] = uVar7;
    puVar1[3] = uVar8;
    fn_82F59F48();
    dVar3 = (double)fn_82F593C8((double)lbl_83262440,(double)fStack_9c);
    fn_82F5A0A0((double)(float)((double)(float)(dVar3 * (double)lbl_82023040) * dVar4));
    fn_82F59BD8();
    fn_82F59E08();
    fn_82F53940(param_1,0xf);
    fn_82F4F448(param_1,4,3,lbl_831BAAD8);
    fn_82F53940(param_1,3);
    fn_82F538A0(auStack_80,param_1,2);
    fn_8306ED30();
    fn_82F53548();
    fn_82F59F48();
    if (lbl_831BAAD8 != '\0') {
      fn_82F4F010();
      if (lbl_831BAAD6 != '\0') {
        fn_82F5A258(auStack_80);
        fn_82F5A0A0();
      }
      fn_82F59BD8();
    }
    fn_82F59E08();
    fn_82F53940(param_1,1);
    fn_82F538C8(auStack_80,param_1,1);
    fn_82F538C8(auStack_90,param_1,3);
    fn_82F5A148((double)lbl_82002C5C);
    fn_82F53940(param_1,2);
    fn_82F4F448(param_1,0x12,0x11,lbl_831BAAD8);
    fn_82F53940(param_1,0x11);
    fn_82F4F448(param_1,0x13,0x12,lbl_831BAAD8);
    fn_82F53940(param_1,0x12);
    fn_82F4F448(param_1,0x14,0x13,lbl_831BAAD8);
    fn_82F53940(param_1,0x13);
    fn_82F4F448(param_1,0x16,0x15,lbl_831BAAD8);
    fn_82F53940(param_1,0x15);
    fn_82F4F448(param_1,0x17,0x16,lbl_831BAAD8);
    fn_82F53940(param_1,0x16);
    fn_82F4F448(param_1,0x18,0x17,lbl_831BAAD8);
    fn_82F53940(param_1,0x17);
    fn_82F59F48();
    fn_82F53940(param_1,0);
    fn_82F59BD8();
    fn_82F53940(param_1,1);
    fn_82F59E08();
    fn_82F53940(param_1,0);
  }
  return;
}

