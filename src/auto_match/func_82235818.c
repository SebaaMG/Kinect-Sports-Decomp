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
extern int fn_8223C610();
extern int fn_8265C9E0();
extern int fn_82F691F0();
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


void fn_82235818(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar2;
  undefined1 uVar3;
  undefined8 uVar1;
  uint uVar4;
  undefined4 uStack_30;
  undefined2 uStack_2c;
  
  iVar2 = fn_8223C610(param_3,1,0,0);
  if (iVar2 == 0) {
    uVar4 = 0;
    do {
      iVar2 = fn_8223C610(param_3,1,0,0);
      if (iVar2 == 0) {
        uVar1 = 4;
        if (uVar4 != 5) {
          uVar1 = 8;
        }
        uVar3 = fn_8223C610(param_3,uVar1,0,0);
        *(undefined1 *)((int)&uStack_30 + uVar4) = uVar3;
      }
      else {
        *(undefined1 *)((int)&uStack_30 + uVar4) = 0;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 6);
  }
  else {
    uStack_30 = 0;
    uStack_2c = 0;
  }
  if (param_4 != 0) {
    *(undefined4 *)(param_4 + 4) = 7;
    *(undefined4 *)(param_4 + 0xc) = 6;
    uVar1 = fn_8265C9E0(6);
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(uVar1,0,6);
  }
  return;
}

