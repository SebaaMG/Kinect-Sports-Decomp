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
extern int fn_8265C940();
extern int fn_82A20618();
extern int fn_82A207C8();
extern int fn_82A21B98();
extern unsigned int lbl_8315D2EC;
extern unsigned int lbl_83219C90;
extern unsigned int *lbl_83219C94;
extern unsigned int lbl_83219C98;


void fn_82A222E8(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (lbl_83219C98 < 1000) {
    lbl_83219C98 = lbl_83219C98 + 1;
    puVar1 = lbl_83219C94;
    if (((undefined4 **)lbl_83219C90 == &lbl_83219C90) &&
       (puVar1 = (undefined4 *)fn_8265C940(0x100c,lbl_8315D2EC), puVar1 != (undefined4 *)0x0))
    {
      uVar2 = fn_82A207C8(puVar1 + 3,0x1000,4,1);
      puVar1[2] = uVar2;
      puVar1[1] = lbl_83219C94;
      *puVar1 = &lbl_83219C90;
      *lbl_83219C94 = puVar1;
      lbl_83219C94 = puVar1;
    }
    puVar1 = (undefined4 *)fn_82A21B98(puVar1[2],param_2,param_3);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)fn_8265C940(0x100c,lbl_8315D2EC);
      if (puVar1 != (undefined4 *)0x0) {
        uVar2 = fn_82A207C8(puVar1 + 3,0x1000,4,1);
        puVar1[2] = uVar2;
        puVar1[1] = lbl_83219C94;
        *puVar1 = &lbl_83219C90;
        *lbl_83219C94 = puVar1;
        lbl_83219C94 = puVar1;
      }
      puVar1 = (undefined4 *)fn_82A21B98(puVar1[2],param_2,param_3);
      if (puVar1 == (undefined4 *)0x0) {
        return;
      }
    }
    *puVar1 = param_1;
    fn_82A20618(2);
  }
  return;
}

