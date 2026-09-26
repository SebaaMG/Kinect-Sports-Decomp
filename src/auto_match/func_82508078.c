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
extern unsigned int fStack_4c;
extern int fn_82508160();
extern int fn_82512E18();
extern int fn_8251FBA8();
extern int fn_82526A20();
extern unsigned int iStack_50;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_48;


undefined8 fn_82508078(int *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  int iStack_50;
  float fStack_4c;
  undefined4 uStack_48;
  
  iVar1 = *param_1;
  if ((iVar1 != 0) && (param_1[10] == 0)) {
    uVar5 = 0;
    uVar2 = fn_8251FBA8(iVar1);
    iVar4 = iVar1;
    if ((int)((uVar2 & 0xffffffff) / 0x98) != 0) {
      do {
        iVar3 = fn_82526A20(iVar4 + 4,param_2);
        if (iVar3 == 0) goto LAB_825080f8;
        uVar5 = uVar5 + 1;
        iVar4 = iVar4 + 0x98;
        uVar2 = fn_8251FBA8(iVar1);
      } while ((uVar5 & 0xffffffff) < (uVar2 & 0xffffffff) / 0x98);
    }
    iVar4 = 0;
LAB_825080f8:
    if (iVar4 != 0) {
      fStack_4c = *(float *)(iVar4 + 0x90);
      if (fStack_4c <= lbl_821CC160) {
        fn_82508160(param_1,iVar4,param_3,1);
      }
      else {
        uStack_48 = (undefined4)param_3;
        iStack_50 = iVar4;
        fn_82512E18(param_1 + 0xb,&iStack_50);
      }
      return 1;
    }
  }
  return 0;
}

