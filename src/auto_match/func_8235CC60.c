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
extern unsigned int *auStack_48;
extern int fn_822315A0();
extern int fn_82361D00();
extern int fn_8241C900();
extern int fn_8265C9E0();
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;


void fn_8235CC60(int param_1,int param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  char *pcStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 auStack_48 [18];
  
  iVar3 = 0;
  if (*(uint *)(param_1 + 0x15d0) != 0 && (*(uint *)(param_1 + 0x15d0) & 0xff000000) < 0x7a000000) {
    iVar1 = *(int *)(param_1 + 0x188);
    *(undefined4 *)(param_1 + 0x188) = 0;
    *(undefined4 *)(param_1 + 0x184) = 0;
    if (iVar1 != 0) {
      fn_822315A0();
    }
    uStack_4c = *(undefined4 *)(param_1 + 0x9c);
    auStack_48[0] = *(undefined4 *)(param_1 + 0x98);
    uStack_5c = 0;
    uStack_58 = 0;
    uStack_54 = 0;
    uStack_50 = 0;
    if (param_2 == 0) {
      pcStack_60 = "intervalscreentitle";
    }
    else {
      pcStack_60 = "resultsscreentitle";
    }
    uVar2 = fn_8265C9E0(0x2010);
    if ((uVar2 & 0xffffffff) != 0) {
      iVar3 = fn_82361D00(uVar2,&pcStack_60,param_1 + 0x15d0,auStack_48,&uStack_4c,&uStack_50,
                                &uStack_54,&uStack_58);
    }
    iVar1 = *(int *)(param_1 + 0x188);
    *(int *)(param_1 + 0x188) = iVar3;
    *(int *)(param_1 + 0x184) = iVar3 + 0x10;
    if (iVar1 != 0) {
      fn_822315A0();
    }
    fn_8241C900(*(undefined4 *)(param_1 + 0x2b20),(int *)(param_1 + 0x184),param_2 == 0);
  }
  return;
}

