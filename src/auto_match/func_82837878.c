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
extern int fn_8263FB38();
extern int fn_82645EA8();
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_8320A7B0;
extern unsigned int lbl_8320A898;
extern unsigned int lbl_8320A89C;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


void fn_82837878(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  double dVar4;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  puVar3 = (undefined4 *)&lbl_8320A7B0;
  if (lbl_8320A89C == 1) {
    fn_8263FB38((double)lbl_821AAD20,lbl_8320A898,0x14,0,param_1,0,0,0,0);
  }
  else {
    iVar1 = 0;
    if (0 < lbl_8320A89C) {
      uVar2 = 0;
      dVar4 = (double)lbl_821AAD20;
      do {
        uStack_50 = *puVar3;
        uStack_4c = puVar3[1];
        fn_82645EA8(lbl_8320A898,3 << (uVar2 & 0x3f));
        fn_8263FB38(dVar4,lbl_8320A898,0x14,puVar3,param_1,&uStack_50,0,0,0);
        fn_82645EA8(lbl_8320A898,0);
        iVar1 = iVar1 + 1;
        uVar2 = uVar2 + 2;
        puVar3 = puVar3 + 4;
      } while (iVar1 < lbl_8320A89C);
    }
  }
  return;
}

