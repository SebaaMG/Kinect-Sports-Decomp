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
extern unsigned int *auStack_1240;
extern unsigned int *auStack_1280;
extern unsigned int *auStack_12c0;
extern unsigned int *auStack_1300;
extern unsigned int *auStack_1318;
extern unsigned int *auStack_1330;
extern unsigned int *auStack_135c;
extern unsigned int *auStack_1360;
extern unsigned int *auStack_1374;
extern unsigned int *auStack_138c;
extern unsigned int fStack_134c;
extern unsigned int fStack_1350;
extern unsigned int fStack_1354;
extern unsigned int fStack_1358;
extern unsigned int fStack_1364;
extern unsigned int fStack_1368;
extern unsigned int fStack_136c;
extern unsigned int fStack_1370;
extern int fn_8285A808();
extern int fn_8285A830();
extern int fn_8285AAC8();
extern int fn_8285CEB8();
extern int fn_8285D318();
extern int fn_8285E650();
extern int fn_82861370();
extern int fn_82861E68();
extern int fn_82862050();
extern int fn_82862068();
extern int fn_82862080();
extern int fn_82863790();
extern int fn_82F691F0();
extern unsigned int iStack_1390;
extern unsigned int lbl_82002C5C;


void fn_8285ECC8(int param_1,undefined8 param_2)

{
  int iVar1;
  int iStack_1390;
  undefined4 auStack_138c [6];
  undefined1 auStack_1374 [4];
  float fStack_1370;
  float fStack_136c;
  float fStack_1368;
  float fStack_1364;
  undefined1 auStack_1360 [4];
  undefined1 auStack_135c [4];
  float fStack_1358;
  float fStack_1354;
  float fStack_1350;
  float fStack_134c;
  undefined1 auStack_1330 [24];
  undefined1 auStack_1318 [24];
  undefined1 auStack_1300 [64];
  undefined1 auStack_12c0 [64];
  undefined1 auStack_1280 [64];
  undefined1 auStack_1240 [4672];
  
  auStack_138c[0] = 0;
  iStack_1390 = 0;
  if ((*(int *)(param_1 + 0x2c) == 2) || (*(int *)(param_1 + 0x2c) == 3)) {
    iVar1 = fn_8285A808(param_1,param_2);
    fn_8285A830(param_1,param_2);
    fn_82863790(auStack_138c);
    fn_82862080(auStack_138c[0],auStack_12c0);
    fn_82862050(auStack_138c[0],auStack_1300);
    fn_82862068(auStack_138c[0],auStack_1280);
    fn_82861E68(auStack_138c[0],&fStack_1370,&fStack_136c,&fStack_1368,&fStack_1364,auStack_1360,
                 auStack_135c);
    fn_8285CEB8(auStack_138c[0],auStack_1330);
    fn_82861370(auStack_1330,auStack_12c0,auStack_1240);
    fn_8285D318(auStack_1330,auStack_1240,auStack_1318,auStack_1374);
    fn_8285AAC8(param_1,param_2,&iStack_1390);
    if (iStack_1390 != 0) {
      fStack_1358 = fStack_1368 * lbl_82002C5C;
      fStack_1354 = -(fStack_1364 * lbl_82002C5C);
      fStack_1350 = fStack_1370 + fStack_1358 + lbl_82002C5C;
      fStack_134c = fStack_136c + fStack_1364 * lbl_82002C5C + lbl_82002C5C;
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(*(undefined4 *)(iVar1 + 0xa8),0,*(undefined4 *)(param_1 + 0x58));
    }
  }
  else {
    fn_8285E650();
  }
  return;
}

