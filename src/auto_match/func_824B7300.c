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
extern int fn_8225F160();
extern int fn_823AB478();
extern int fn_8245AE18();
extern int fn_8245AF50();
extern int fn_8245AFC0();
extern int fn_8245B050();
extern int fn_8245B100();
extern int fn_8245B168();
extern int fn_8245B1F0();
extern int fn_824B70F0();
extern int fn_82512508();
extern int fn_828EA5F8();
extern int fn_828EA610();


void fn_824B7300(undefined8 param_1,int param_2,undefined1 param_3,undefined4 param_4,
                  undefined2 param_5,undefined2 param_6,undefined2 param_7)

{
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  undefined2 auStack_50 [40];
  
  if (param_2 == 1) {
    iVar4 = 8;
  }
  else if (param_2 == 2) {
    iVar4 = 9;
  }
  else if (param_2 == 3) {
    iVar4 = 7;
  }
  else if (param_2 == 4) {
    iVar4 = 6;
  }
  else {
    iVar4 = ((uint)LZCOUNT(param_2 + -5) >> 5 ^ 1) + 5;
  }
  iVar1 = fn_8225F160();
  *(undefined4 *)(iVar1 + 0x18) = 2;
  *(int *)(iVar1 + 0x1c) = iVar4;
  *(undefined4 *)(iVar1 + 0x28) = 4;
  *(undefined4 *)(iVar1 + 0x20) = param_4;
  *(undefined4 *)(iVar1 + 0x24) = 0;
  cVar2 = fn_828EA610(param_1);
  if (cVar2 == '\0') {
    cVar2 = fn_828EA5F8(param_1);
    if ((cVar2 != '\0') && (cVar2 = fn_82512508(param_1), cVar2 != '\0')) {
      iVar4 = fn_8245AE18();
      if (param_2 == 1) {
        cVar2 = '\x1e';
      }
      else if (param_2 == 2) {
        cVar2 = '\x1f';
      }
      else if (param_2 == 3) {
        cVar2 = '\x1d';
      }
      else if (param_2 == 4) {
        cVar2 = '\x1c';
      }
      else {
        cVar2 = (param_2 != 5) + '\x1b';
      }
      iVar1 = fn_8245B1F0(iVar4);
      if (iVar1 != 0) {
        fn_8245AF50(iVar4,cVar2);
        if (*(int *)(iVar4 + 0x14) == 0) {
          *(undefined4 *)(iVar4 + 0x14) = 1;
        }
        uVar3 = fn_823AB478(param_1);
        fn_8245B050(iVar4,uVar3,4);
        fn_8245B050(iVar4,param_3,4);
        fn_8245B100(iVar4);
        auStack_50[0] = (undefined2)param_4;
        fn_8245B168(iVar4,auStack_50,2);
        auStack_50[0] = param_5;
        fn_8245B168(iVar4,auStack_50,2);
        auStack_50[0] = param_6;
        fn_8245B168(iVar4,auStack_50,2);
        auStack_50[0] = param_7;
        fn_8245B168(iVar4,auStack_50,2);
        fn_824B70F0();
        fn_8245AFC0(iVar4,0,0);
      }
    }
  }
  return;
}

