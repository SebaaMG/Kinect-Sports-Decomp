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
extern int fn_8288CBD8();
extern int fn_82897620();
extern int fn_8289CB70();
extern int fn_8289F350();
extern int fn_828B5580();
extern int fn_828BDDA0();
extern unsigned int lbl_82023640;
extern unsigned int lbl_82023648;


undefined4 * fn_8288D9D8(undefined4 *param_1,int *param_2,undefined8 param_3,char param_4)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar4;
  undefined8 uVar3;
  ulonglong uVar5;
  undefined4 auStack_40 [16];
  
  fn_828BDDA0();
  *param_1 = &lbl_82023648;
  param_1[0x14] = &lbl_82023640;
  fn_828B5580(param_1 + 0x20,param_2 + 5);
  uVar5 = 0;
  param_1[0x22] = (int)param_3;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined1 *)(param_1 + 0x27) = 1;
  *(char *)((int)param_1 + 0x9d) = param_4;
  *(undefined1 *)((int)param_1 + 0x9e) = *(undefined1 *)(param_2 + 0x17);
  if (param_4 != '\0') {
    uVar2 = fn_8289F350(param_2[4],param_3);
    iVar4 = (**(code **)(*param_2 + 8))(param_2);
    uVar1 = *(uint *)(*(int *)(iVar4 + 0x10) + 8);
    if (uVar1 != 0) {
      do {
        uVar3 = fn_82897620(iVar4,uVar5);
        auStack_40[0] = fn_8289CB70(uVar3,uVar2,1,1);
        fn_8288CBD8(param_1 + 0x23,auStack_40);
        uVar5 = uVar5 + 1;
      } while ((uVar5 & 0xffffffff) < (ulonglong)uVar1);
    }
  }
  return param_1;
}

