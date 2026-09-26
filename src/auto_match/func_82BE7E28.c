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
extern int fn_82BE54C0();
extern int fn_82BE56B0();
extern int fn_82BE56C0();
extern int fn_82BE7790();
extern int fn_82BEB628();
extern int fn_82BEB640();
extern unsigned int lbl_8322B1DC;


undefined4 * fn_82BE7E28(void)

{
  undefined4 *puVar2;
  ulonglong uVar1;
  undefined4 *puVar3;
  int iVar4;
  
  puVar2 = (undefined4 *)fn_82BE7790();
  if (puVar2 != (undefined4 *)0x0) {
    uVar1 = fn_82BE56B0(0xc);
    if ((uVar1 & 0xffffffff) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = fn_82BEB628(uVar1,puVar2);
    }
    if ((uVar1 & 0xffffffff) == 0) {
      if (lbl_8322B1DC != 0) {
        fn_82BE5240(lbl_8322B1DC,0x65,0xffffffff820e9ac8);
      }
    }
    else {
      puVar3 = (undefined4 *)fn_82BE56B0(0x10);
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[3] = 0;
      }
      if (puVar3 == (undefined4 *)0x0) {
        if (lbl_8322B1DC != 0) {
          fn_82BE5240(lbl_8322B1DC,0x65,0xffffffff820e9a98);
        }
      }
      else {
        iVar4 = fn_82BE52B8(puVar3,uVar1);
        if (iVar4 != 0) {
          return puVar3;
        }
        fn_82BE54C0(puVar3);
        fn_82BE56C0(puVar3);
      }
      fn_82BEB640(uVar1);
      fn_82BE56C0(uVar1);
    }
    (**(code **)*puVar2)(puVar2,1);
  }
  return (undefined4 *)0x0;
}

