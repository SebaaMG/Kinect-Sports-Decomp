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
extern unsigned int *auStack_70;
extern unsigned int *auStack_a0;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_8265C9E0();
extern int fn_8284A0B8();
extern int fn_8284A7C0();
extern int fn_8284C288();
extern int fn_82BA02A8();
extern unsigned int iStack00000014;
extern unsigned int iStack_2c;
extern unsigned int iStack_30;
extern unsigned int iStack_80;
extern unsigned int iStack_84;
extern unsigned int iStack_b0;
extern unsigned int lbl_832112EC;


undefined4 fn_82849E60(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iStack00000014;
  int iStack_b0;
  undefined4 *puStack_ac;
  undefined1 auStack_a0 [28];
  int iStack_84;
  int iStack_80;
  undefined1 auStack_70 [64];
  int iStack_30;
  int iStack_2c;
  undefined4 *puStack_18;
  
  iStack00000014 = param_1;
  fn_82230110(auStack_a0,*(undefined4 *)(param_1 + 0x20));
  fn_8284A7C0(&iStack_b0,lbl_832112EC,auStack_a0);
  fn_82230300(auStack_a0,1,0);
  iStack_2c = lbl_832112EC;
  iStack_84 = *(int *)(lbl_832112EC + 4);
  iStack_30 = iStack_84;
  fn_82BA02A8(&iStack_84,lbl_832112EC);
  if (iStack_84 == iStack_b0) {
    iStack_80 = fn_8265C9E0(8);
    if (iStack_80 == 0) {
      puStack_18 = (undefined4 *)0x0;
    }
    else {
      puStack_18 = (undefined4 *)fn_8284A0B8(iStack_80,iStack00000014);
    }
    puStack_ac = puStack_18;
    fn_82230110(auStack_70,*(undefined4 *)(iStack00000014 + 0x20));
    puVar2 = (undefined4 *)fn_8284C288(lbl_832112EC,auStack_70);
    *puVar2 = puStack_ac;
    fn_82230300(auStack_70,1,0);
    uVar1 = *puStack_ac;
  }
  else {
    puVar2 = *(undefined4 **)(iStack_b0 + 0x28);
    puVar2[1] = puVar2[1] + 1;
    uVar1 = *puVar2;
  }
  return uVar1;
}

