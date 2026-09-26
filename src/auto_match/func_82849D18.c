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
extern unsigned int *auStack_4c;
extern unsigned int *auStack_70;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_8265CA20();
extern int fn_8265CAA0();
extern int fn_8284A7C0();
extern int fn_8284ADC8();
extern int fn_82BA02A8();
extern unsigned int iStack00000014;
extern unsigned int iStack_18;
extern unsigned int iStack_1c;
extern unsigned int iStack_50;
extern unsigned int iStack_54;
extern unsigned int iStack_80;
extern unsigned int lbl_832112EC;
extern unsigned int uStack_14;


void fn_82849D18(int param_1)

{
  int iStack00000014;
  int iStack_80;
  undefined4 *puStack_7c;
  undefined1 auStack_70 [28];
  int iStack_54;
  int iStack_50;
  undefined1 auStack_4c [4];
  undefined4 *puStack_48;
  undefined4 *puStack_44;
  int iStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  
  iStack00000014 = param_1;
  fn_82230110(auStack_70,*(undefined4 *)(param_1 + 0x20));
  fn_8284A7C0(&iStack_80,lbl_832112EC,auStack_70);
  fn_82230300(auStack_70,1,0);
  iStack_18 = lbl_832112EC;
  iStack_54 = *(int *)(lbl_832112EC + 4);
  iStack_1c = iStack_54;
  fn_82BA02A8(&iStack_54,lbl_832112EC);
  if (iStack_54 != iStack_80) {
    puStack_7c = *(undefined4 **)(iStack_80 + 0x28);
    puStack_7c[1] = puStack_7c[1] + -1;
    if (puStack_7c[1] == 0) {
      iStack_50 = iStack_80;
      fn_8284ADC8(auStack_4c,lbl_832112EC,iStack_80);
      puStack_44 = puStack_7c;
      puStack_48 = puStack_7c;
      if (puStack_7c != (undefined4 *)0x0) {
        uStack_14 = *puStack_7c;
        fn_8265CAA0(uStack_14);
        fn_8265CA20(puStack_48);
      }
    }
  }
  return;
}

