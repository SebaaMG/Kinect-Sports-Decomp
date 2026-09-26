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
extern int fn_82BE5240();
extern int fn_82BE52B8();
extern int fn_82BEA238();
extern int fn_82BEB628();
extern unsigned int lbl_8322B130;


undefined8 fn_82BE1D18(int param_1,char *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  int iVar4;
  
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    fn_82BE5240(param_1,300,0xffffffff82196582);
    uVar1 = 300;
  }
  else {
    uVar2 = thunk_FUN_82be5550(0x54);
    if ((uVar2 & 0xffffffff) == 0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = (undefined4 *)fn_82BEA238(uVar2,param_2,param_3);
    }
    if (puVar3 == (undefined4 *)0x0) {
      uVar1 = 0x65;
      *(undefined4 *)(lbl_8322B130 + 0x10) = 0;
    }
    else {
      uVar2 = thunk_FUN_82be5550(0xc);
      if ((uVar2 & 0xffffffff) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = fn_82BEB628(uVar2,puVar3);
      }
      if (iVar4 == 0) {
        (**(code **)*puVar3)(puVar3,1);
        *(undefined4 *)(lbl_8322B130 + 0x10) = 0;
        uVar1 = fn_82BE5240(lbl_8322B130,0x65,0xffffffff820e89e8);
      }
      else {
        fn_82BE52B8(param_1 + 0x170);
        *(undefined4 **)(param_1 + 0x180) = puVar3;
        uVar1 = 0;
      }
    }
  }
  return uVar1;
}

