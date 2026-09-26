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
extern unsigned int *auStack_50;
extern unsigned int *auStack_80;
extern unsigned int *auStack_a0;
extern int fn_82230110();
extern int fn_822381A8();
extern int fn_8223B688();
extern int fn_8224AAB8();
extern int fn_8224AB50();
extern int fn_8265CA20();
extern int fn_82F63EC8();
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;


void fn_83108AD8(void)

{
  undefined4 *puVar1;
  uint auStack_a0 [4];
  undefined4 uStack_90;
  uint uStack_8c;
  undefined1 auStack_80 [32];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  uint auStack_50 [4];
  undefined4 uStack_40;
  uint uStack_3c;
  code *pcStack_34;
  code *pcStack_30;
  
  fn_82230110(auStack_a0,0xffffffff8219768c);
  puVar1 = (undefined4 *)fn_8223B688(auStack_80,auStack_a0);
  uStack_60 = 1;
  uStack_5c = 1;
  uStack_58 = 0x101010001010101;
  fn_8223B688(auStack_50,puVar1);
  pcStack_34 = fn_8224AAB8;
  pcStack_30 = fn_8224AB50;
  if (0xf < (uint)puVar1[5]) {
    fn_8265CA20(*puVar1);
  }
  puVar1[4] = 0;
  puVar1[5] = 0xf;
  *(undefined1 *)puVar1 = 0;
  fn_822381A8(0xffffffff83282e28,1,&uStack_60);
  if (0xf < uStack_3c) {
    fn_8265CA20(auStack_50[0]);
  }
  uStack_3c = 0xf;
  uStack_40 = 0;
  auStack_50[0] = auStack_50[0] & 0xffffff;
  if (0xf < uStack_8c) {
    fn_8265CA20(auStack_a0[0]);
  }
  uStack_8c = 0xf;
  uStack_90 = 0;
  auStack_a0[0] = auStack_a0[0] & 0xffffff;
  fn_82F63EC8(0xffffffff8313a920);
  return;
}

