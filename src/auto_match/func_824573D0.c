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
extern unsigned int *auStack_6c;
extern unsigned int *auStack_90;
extern unsigned int *auStack_98;
extern int fn_82230040();
extern int fn_82457D28();
extern int fn_82555A88();
extern int fn_8265C9E0();
extern int fn_82F68CC0();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821BAA38;
extern unsigned int uStack_70;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_9c;


undefined4 * fn_824573D0(undefined4 *param_1,undefined8 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined **ppuStack_a0;
  undefined4 uStack_9c;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [24];
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined1 auStack_6c [108];
  
  *param_1 = &lbl_821BAA38;
  param_1[3] = 0;
  puVar2 = param_1 + 1;
  iVar1 = fn_8265C9E0(0x34);
  if (iVar1 != 0) {
    param_1[2] = iVar1;
    *(int *)iVar1 = iVar1;
    *(undefined4 *)(param_1[2] + 4) = param_1[2];
    *(undefined4 *)(param_1[2] + 8) = param_1[2];
    *(undefined1 *)(param_1[2] + 0x30) = 1;
    *(undefined1 *)(param_1[2] + 0x31) = 1;
    param_1[5] = param_3;
    fn_82F68CC0(auStack_90,param_2,0x18);
    uStack_74 = 0;
    uStack_78 = fn_82555A88((ulonglong)*(uint *)(*(int *)(param_4 + 0x3e4) + 0x8c0) + 0x98,
                                  0xffffffff821ba9d4);
    uStack_70 = 0;
    fn_82F68CC0(auStack_6c,auStack_90,0x20);
    fn_82457D28(auStack_98,puVar2,&uStack_70);
    fn_82F68CC0(auStack_90,param_2,0x18);
    uStack_74 = 0;
    uStack_78 = fn_82555A88((ulonglong)*(uint *)(*(int *)(param_4 + 0x3e4) + 0x8c0) + 0x98,
                                  0xffffffff821ba9ec);
    uStack_70 = 3;
    fn_82F68CC0(auStack_6c,auStack_90,0x20);
    fn_82457D28(auStack_98,puVar2,&uStack_70);
    fn_82F68CC0(auStack_90,param_2,0x18);
    uStack_74 = 0;
    uStack_78 = fn_82555A88((ulonglong)*(uint *)(*(int *)(param_4 + 0x3e4) + 0x8c0) + 0x98,
                                  0xffffffff821baa04);
    uStack_70 = 2;
    fn_82F68CC0(auStack_6c,auStack_90,0x20);
    fn_82457D28(auStack_98,puVar2,&uStack_70);
    fn_82F68CC0(auStack_90,param_2,0x18);
    uStack_74 = 0;
    uStack_78 = fn_82555A88((ulonglong)*(uint *)(*(int *)(param_4 + 0x3e4) + 0x8c0) + 0x98,
                                  0xffffffff821baa1c);
    uStack_70 = 1;
    fn_82F68CC0(auStack_6c,auStack_90,0x20);
    fn_82457D28(auStack_98,puVar2,&uStack_70);
    return param_1;
  }
  uStack_9c = 0;
  ppuStack_a0 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_a0);
}

