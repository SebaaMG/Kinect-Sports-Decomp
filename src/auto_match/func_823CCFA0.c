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
extern unsigned int *auStack_a0;
extern unsigned int *auStack_c4;
extern int fn_822315A0();
extern int fn_82250A18();
extern int fn_82250D10();
extern int fn_822EFBF0();
extern int fn_823CD178();
extern int fn_823E7368();
extern int fn_823F2230();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;
extern unsigned int lbl_832975B0;
extern unsigned int uStack_d0;


undefined8 fn_823CCFA0(undefined8 param_1,int param_2,undefined8 param_3,uint param_4)

{
  int iVar2;
  undefined4 *puVar3;
  undefined8 uVar1;
  uint uVar4;
  uint *puVar5;
  longlong lVar6;
  undefined8 uStack_d0;
  uint auStack_c4 [9];
  undefined1 auStack_a0 [160];
  
  puVar5 = auStack_c4;
  iVar2 = 0;
  lVar6 = 8;
  uVar4 = 0;
  do {
    if ((param_4 & 0xff & 1 << (uVar4 & 0x3f)) != 0) {
      puVar5 = puVar5 + 1;
      *puVar5 = uVar4;
      iVar2 = iVar2 + 1;
    }
    uVar4 = uVar4 + 1;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  uStack_d0 = (longlong)
              (int)(((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) *
                   (float)(longlong)iVar2);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    fn_82250D10(auStack_a0);
    fn_823E7368(param_2,auStack_a0);
    iVar2 = lbl_832975B0;
    if (lbl_832975B0 == 0) {
      iVar2 = fn_82250A18();
    }
    if (*(char *)(iVar2 + 4) == '\0') {
      fn_823CD178(param_1,param_2,param_3);
    }
    else if (*(int *)(param_2 + 0x84) != 0) {
      puVar3 = (undefined4 *)fn_822EFBF0(&uStack_d0);
      fn_823F2230(param_1,(ulonglong)*(uint *)*puVar3 + 0xaf8,param_3);
      if ((((U64)(uStack_d0) >> 32) & 0xFFFFFFFF) != 0) {
        fn_822315A0();
      }
    }
    uVar1 = 1;
  }
  return uVar1;
}

