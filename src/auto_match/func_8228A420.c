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
extern unsigned int *auStack_444;
extern unsigned int *auStack_50;
extern int fn_82230218();
extern int fn_82230300();
extern int fn_82250A18();
extern int fn_82485BD8();
extern int fn_82486B08();
extern int fn_82A1DD38();
extern unsigned int iStack_448;
extern unsigned int iStack_44c;
extern unsigned int iStack_450;
extern unsigned int lbl_832975B0;
extern unsigned int uStack_34;
extern unsigned int uStack_58;


void fn_8228A420(int param_1)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  int iStack_450;
  int iStack_44c;
  int iStack_448;
  undefined1 auStack_444 [1004];
  undefined8 uStack_58;
  undefined1 auStack_50 [28];
  undefined1 uStack_34;
  
  piVar4 = (int *)(param_1 + 0x6c0);
  lVar3 = 0;
  do {
    fn_82486B08(&iStack_450);
    iStack_450 = piVar4[-6];
    if (iStack_450 == 3) {
      if (*(longlong *)(piVar4 + -4) == 0) {
        uStack_58 = 0;
        uStack_34 = 1;
      }
      else {
LAB_8228a478:
        uVar1 = (**(code **)(**(int **)(*piVar4 + 0x8c0) + 100))();
        fn_82A1DD38(auStack_444,uVar1,1000);
        iStack_44c = piVar4[-5];
        iStack_448 = piVar4[1];
        uStack_58 = *(undefined8 *)(piVar4 + -4);
        uStack_34 = 0;
        fn_82230218(auStack_50,piVar4 + 2,0,0xffffffffffffffff);
      }
    }
    else if (iStack_450 != 4) goto LAB_8228a478;
    fn_82A1DD38(lVar3 + (ulonglong)*(uint *)(param_1 + 0x11f0) + 0x838,&iStack_450,0x420);
    fn_82230300(auStack_50,1,0);
    lVar3 = lVar3 + 0x420;
    piVar4 = piVar4 + 0x10;
    if (0x107f < (int)lVar3) {
      iVar2 = lbl_832975B0;
      if (lbl_832975B0 == 0) {
        iVar2 = fn_82250A18();
      }
      fn_82485BD8(*(undefined4 *)(param_1 + 0x11f0),*(char *)(iVar2 + 4) == '\0');
      return;
    }
  } while( true );
}

